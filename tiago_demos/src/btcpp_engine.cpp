#include <vector>
#include <string>
#include <filesystem>
#include <yaml-cpp/yaml.h>


#include "rclcpp/rclcpp.hpp"
#include "ament_index_cpp/get_package_share_directory.hpp"

#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_cpp/utils/shared_library.h"
#include "behaviortree_cpp/xml_parsing.h"

#include "grab2_behavior_tree/plugins_list.hpp"
#include "nav2_behavior_tree/plugins_list.hpp"
#include "nav2_util/string_utils.hpp"
#include <unordered_map>

#include "tf2/LinearMath/Quaternion.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"

std::filesystem::path GetFilePath(const std::string& filename);

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("btcpp_executor");

  node->declare_parameter("behavior_tree", "trees/navigation_demo.xml");
  node->declare_parameter("target_locations", "config/map_locations.yaml");
  // ------------------------------------------------------
  // Load Target Locations from YAML
  auto global_blackboard = BT::Blackboard::create();

  std::string target_locations_filename;
  node->get_parameter("target_locations", target_locations_filename);
  if (target_locations_filename.empty()) {
    RCLCPP_WARN(node->get_logger(), "No target locations YAML provided, proceeding without predefined targets.");
  return 1;
    }
    try {
        const std::filesystem::path target_locations_path = GetFilePath(target_locations_filename);
        YAML::Node locations = YAML::LoadFile(target_locations_path.string());

        for (auto it = locations.begin(); it != locations.end(); ++it) {
            std::string name = it->first.as<std::string>();
            auto pose_node = it->second["pose"];
            std::string frame_id = it->second["frame_id"].as<std::string>();

            double x = pose_node["x"].as<double>();
            double y = pose_node["y"].as<double>();
            double z = pose_node["z"].as<double>();
            double yaw_deg = pose_node["yaw_deg"].as<double>();

            // yaw to quaternion
            tf2::Quaternion q;
            q.setRPY(0, 0, yaw_deg * M_PI / 180.0);

            geometry_msgs::msg::PoseStamped pose;
            pose.header.frame_id = frame_id;
            pose.pose.position.x = x;
            pose.pose.position.y = y;
            pose.pose.position.z = z;
            pose.pose.orientation = tf2::toMsg(q);

            //add the name and pose
            global_blackboard->set<geometry_msgs::msg::PoseStamped>("loc." + name, pose);

            RCLCPP_INFO(node->get_logger(), "Loaded target location: %s (x=%.2f, y=%.2f, yaw=%.1f)",
                        name.c_str(), x, y, yaw_deg);
        }
    } catch (const std::exception& e) {
        RCLCPP_ERROR(node->get_logger(), "Failed to load target locations YAML: %s", e.what());
        return 1;
    }

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
  try {
    factory.registerBehaviorTreeFromFile(bt_xml_path.string());
  } catch (const std::exception& e) {
    RCLCPP_ERROR(node->get_logger(), "Failed to load behavior tree from '%s': %s", 
                 bt_xml_path.string().c_str(), e.what());
    return 1;
  }


  // Set common blackboard entries for Nav2 BT nodes
  global_blackboard->set("node", node);
  global_blackboard->set<std::chrono::milliseconds>("bt_loop_duration", std::chrono::milliseconds(10));
  global_blackboard->set<std::chrono::milliseconds>("server_timeout", std::chrono::milliseconds(2000)); // 2 seconds for goal acknowledgment
  global_blackboard->set<std::chrono::milliseconds>("wait_for_service_timeout", std::chrono::milliseconds(3000)); // 3 seconds to find server

  // Set custom blackboard entries
  global_blackboard->set<float>("battery_level", 100.0f);
  global_blackboard->set<bool>("holding_object", false);

  RCLCPP_INFO(node->get_logger(), "All target locations loaded into blackboard."); // for debugging

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
