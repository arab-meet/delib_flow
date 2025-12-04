#include <vector>
#include <string>
#include <filesystem>

#include "rclcpp/rclcpp.hpp"
#include "ament_index_cpp/get_package_share_directory.hpp"

#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_cpp/utils/shared_library.h"
#include "behaviortree_cpp/xml_parsing.h"

#include "grab2_behavior_tree/plugins_list.hpp"
#include "nav2_behavior_tree/plugins_list.hpp"
#include "nav2_util/string_utils.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"

std::filesystem::path GetFilePath(const std::string& filename);

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("btcpp_executor");

  node->declare_parameter("behavior_tree", "trees/navigation_demo.xml");
  node->declare_parameter("target_locations", "config/our_map.yaml");

  // TODO(Load Pre-defined Targets): Parse YAML file with target locations and store them in the blackboard with a
  // HASHMAP to search for target_pose
  // (unordered_map<string, geometry_msgs::msg::PoseStamped>)
  // Hint: Check (grab2_behavior_tree, grab2_grasp_generator) pkgs for YAML parsing examples.

  std::string bt_filename;
  node->get_parameter("behavior_tree", bt_filename);

  if (bt_filename.empty()) {
    RCLCPP_ERROR(node->get_logger(), "No behavior tree XML provided");
    return 1;
  }

  // ------------------------------------------------------
  // Register BT plugins
  BT::BehaviorTreeFactory factory;

  // Register Nav2 BT plugins
  RCLCPP_INFO_ONCE(node->get_logger(), "Registering Nav2 BT plugins");
  std::vector<std::string> nav2_plugins_list = nav2_util::split(nav2::details::BT_BUILTIN_PLUGINS, ';');
  for (const auto & plugin : nav2_plugins_list) {
    RCLCPP_DEBUG(node->get_logger(), "Registering Nav2 BT plugin: %s", plugin.c_str());
    factory.registerFromPlugin(BT::SharedLibrary::getOSName(plugin));
  }

  // Register Grab2 BT plugins
  RCLCPP_INFO_ONCE(node->get_logger(), "Registering Grab2 BT plugins");
  std::vector<std::string> grab2_plugins_list = nav2_util::split(grab2::details::BT_BUILTIN_PLUGINS, ';');
  for (const auto & plugin : grab2_plugins_list) {
    RCLCPP_DEBUG(node->get_logger(), "Registering Grab2 BT plugin: %s", plugin.c_str());
    factory.registerFromPlugin(BT::SharedLibrary::getOSName(plugin));
  }

  // ------------------------------------------------------
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node);

  // ------------------------------------------------------
  // Load and execute the tree
  const std::filesystem::path bt_xml_path = GetFilePath(bt_filename);
  factory.registerBehaviorTreeFromFile(bt_xml_path.string());

  auto global_blackboard = BT::Blackboard::create();

  // Set common blackboard entries for Nav2 BT nodes
  global_blackboard->set("node", node);
  global_blackboard->set<std::chrono::milliseconds>("bt_loop_duration", std::chrono::milliseconds(10));
  global_blackboard->set<std::chrono::milliseconds>("server_timeout", std::chrono::milliseconds(2000)); // 2 seconds for goal acknowledgment
  global_blackboard->set<std::chrono::milliseconds>("wait_for_service_timeout", std::chrono::milliseconds(3000)); // 3 seconds to find server

  // Set custom blackboard entries
  global_blackboard->set<float>("battery_level", 100.0f);
  global_blackboard->set<bool>("holding_object", false);

  // TODO(Load Pre-defined Targets): For each target location parsed from the YAML file,
  // store it in the blackboard with the corresponding key.
  // Example:
  // geometry_msgs::msg::PoseStamped target_goal;
  // target_goal.header.frame_id = "map";
  // target_goal.pose.position.x = 0.4;
  // target_goal.pose.position.y = -0.3;
  // target_goal.pose.position.z = 0.0;
  // target_goal.pose.orientation.x = 0.0;
  // target_goal.pose.orientation.y = 0.0;
  // target_goal.pose.orientation.z = 0.0;
  // target_goal.pose.orientation.w = 1.0;
  // global_blackboard->set<geometry_msgs::PoseStamped>("target_goal", target_goal);

  BT::Tree tree = factory.createTree("MainTree", global_blackboard);

  BT::NodeStatus status = BT::NodeStatus::RUNNING;
  while (rclcpp::ok() && status == BT::NodeStatus::RUNNING) {
    status = tree.tickOnce();
    executor.spin_once(std::chrono::milliseconds(10));
  }

  if (status == BT::NodeStatus::SUCCESS) {
    RCLCPP_INFO(node->get_logger(), "Mission completed successfully!");
  } else if (status == BT::NodeStatus::FAILURE) {
    RCLCPP_ERROR(node->get_logger(), "Mission failed!");
  }

  return 0;
}

std::filesystem::path GetFilePath(const std::string& filename)
{
  // check first the given path
  if(std::filesystem::exists(filename))
  {
    return filename;
  }
  // try appending the package directory
  const std::string package_dir = ament_index_cpp::get_package_share_directory("tiago_demos");
  const auto package_path = std::filesystem::path(package_dir) / filename;
  if(std::filesystem::exists(package_path))
  {
    return package_path;
  }
  throw std::runtime_error("File not found: " + filename);
}
