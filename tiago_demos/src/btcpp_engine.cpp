// Copyright 2025 Arabian Robotics
#include <vector>
#include <string>

#include "rclcpp/rclcpp.hpp"

#include "behaviortree_cpp/behavior_tree.h"
#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_cpp/utils/shared_library.h"
#include "behaviortree_cpp/xml_parsing.h"

#include <behaviortree_cpp/loggers/bt_cout_logger.h>
#include <behaviortree_cpp/loggers/groot2_publisher.h>

#include "grab2_behavior_tree/plugins_list.hpp"
#include "nav2_behavior_tree/plugins_list.hpp"
#include "nav2_util/string_utils.hpp"

#include "tiago_demos/utils.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("btcpp_executor");

  node->declare_parameter("behavior_tree", "trees/navigation_demo.xml");
  node->declare_parameter("target_locations", "");
  // ------------------------------------------------------
  // Load Target Locations from YAML
  auto global_blackboard = BT::Blackboard::create();

  std::string target_locations_filename;
  node->get_parameter("target_locations", target_locations_filename);
  if (target_locations_filename.empty()) {
    RCLCPP_WARN(
      node->get_logger(),
      "No target locations YAML provided, proceeding without predefined targets.");
  } else {
    const std::filesystem::path target_locations_path = tiago_demos::getFilePath("tiago_demos",
      target_locations_filename);
    tiago_demos::loadTargetLocationsFromYAML(node, target_locations_path.string(),
      global_blackboard);
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
  std::vector<std::string> nav2_plugins_list =
    nav2_util::split(nav2::details::BT_BUILTIN_PLUGINS, ';');
  for (const auto & plugin : nav2_plugins_list) {
    RCLCPP_DEBUG(node->get_logger(), "Registering Nav2 BT plugin: %s", plugin.c_str());
    try {
      factory.registerFromPlugin(BT::SharedLibrary::getOSName(plugin));
    } catch (const std::exception & e) {
      RCLCPP_WARN(
        node->get_logger(),
        "Failed to register Nav2 plugin '%s': %s", plugin.c_str(), e.what());
    }
  }

  // Register Grab2 BT plugins
  RCLCPP_INFO_ONCE(node->get_logger(), "Registering Grab2 BT plugins");
  std::vector<std::string> grab2_plugins_list =
    nav2_util::split(grab2::details::BT_BUILTIN_PLUGINS, ';');
  for (const auto & plugin : grab2_plugins_list) {
    RCLCPP_DEBUG(node->get_logger(), "Registering Grab2 BT plugin: %s", plugin.c_str());
    try {
      factory.registerFromPlugin(BT::SharedLibrary::getOSName(plugin));
    } catch (const std::exception & e) {
      RCLCPP_WARN(
        node->get_logger(),
        "Failed to register Grab2 plugin '%s': %s", plugin.c_str(), e.what());
    }
  }

  // Register Tiago BT Plugins
  factory.registerFromPlugin(BT::SharedLibrary::getOSName("tiago_set_target_using_aruco_marker_bt_node"));
  // ------------------------------------------------------
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(node);

  // ------------------------------------------------------
  // Load and execute the tree
  const std::filesystem::path bt_xml_path = tiago_demos::getFilePath("tiago_demos", bt_filename);
  try {
    factory.registerBehaviorTreeFromFile(bt_xml_path.string());
  } catch (const std::exception & e) {
    RCLCPP_ERROR(
      node->get_logger(),
      "Failed to load behavior tree from '%s': %s",
      bt_xml_path.string().c_str(), e.what());
    return 1;
  }

  // Set common blackboard entries for Nav2 BT nodes
  global_blackboard->set("node", node);
  global_blackboard->set<std::chrono::milliseconds>("bt_loop_duration",
    std::chrono::milliseconds(500));
  global_blackboard->set<std::chrono::milliseconds>("server_timeout",
    std::chrono::milliseconds(5000));  // 5 seconds for goal acknowledgment
  global_blackboard->set<std::chrono::milliseconds>("wait_for_service_timeout",
    std::chrono::milliseconds(8000));  // 8 seconds to find server

  // Set custom blackboard entries
  global_blackboard->set<float>("battery_level", 100.0f);
  global_blackboard->set<bool>("holding_object", false);

  RCLCPP_INFO(node->get_logger(), "All target locations loaded into blackboard.");

  BT::Tree tree = factory.createTree("MainTree", global_blackboard);

  // Loggers
  // This will add console messages for each action and condition executed
  BT::StdCoutLogger console_logger(tree);
  console_logger.enableTransitionToIdle(false);

  BT::Groot2Publisher groot2_publisher(tree, 5555);

  BT::NodeStatus status = BT::NodeStatus::RUNNING;
  while (rclcpp::ok() && status == BT::NodeStatus::RUNNING) {
    status = tree.tickOnce();
    executor.spin_once(std::chrono::milliseconds(500));
  }

  if (status == BT::NodeStatus::SUCCESS) {
    RCLCPP_INFO(node->get_logger(), "Mission completed successfully!");
  } else if (status == BT::NodeStatus::FAILURE) {
    RCLCPP_ERROR(node->get_logger(), "Mission failed!");
  }

  return 0;
}
