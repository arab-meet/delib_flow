// Copyright (c) 2025, Zaynap Ahmed

#include "grab2_bt_testing_pkg/pick_and_navigate.hpp"
#include "ament_index_cpp/get_package_share_directory.hpp"
#include <sstream>

namespace grab2_bt_testing
{

PickAndNavigate::PickAndNavigate(const rclcpp::NodeOptions & options)
: BT::TreeExecutionServer<grab2_msgs::action::TreeActionServer>(options, "pick_and_navigate")
{
  configure();
}

void PickAndNavigate::configure()
{
  if (!node()->has_parameter("tree_file")) {
    std::string pkg_share_dir = ament_index_cpp::get_package_share_directory("grab2_bt_testing_pkg");
    node()->declare_parameter<std::string>(
      "tree_file",
      pkg_share_dir + "/behavior_trees/pick_and_navigate.xml");
  }

  node()->declare_parameter<std::string>("arm_controller_action", "arm_controller/follow_joint_trajectory");
  node()->declare_parameter<std::string>("gripper_controller_action", "hand_controller/gripper_cmd");
  node()->declare_parameter<std::string>("navigation_action", "navigate_to_pose");
}

std::string PickAndNavigate::getTreeName(const GoalType & goal)
{
  if (!goal.target_tree.empty()) {
    return goal.target_tree;
  }
  return "";  // fallback
}

void PickAndNavigate::onTreeCreated(BT::Tree & tree, const GoalType & goal)
{
  auto bb = tree.rootBlackboard();

  bb->set("target_pose", goal.target_pose);
  bb->set("arm_controller_action", node()->get_parameter("arm_controller_action").as_string());
  bb->set("gripper_controller_action", node()->get_parameter("gripper_controller_action").as_string());
  bb->set("navigation_action", node()->get_parameter("navigation_action").as_string());
}

} // namespace grab2_bt_testing
