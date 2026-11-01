// Copyright 2026 Arabian Robotics
#ifndef TIAGO_BEHAVIOR_TREE__CHECK_GRASP_FROM_FINGERS_HPP_
#define TIAGO_BEHAVIOR_TREE__CHECK_GRASP_FROM_FINGERS_HPP_

#include <string>
#include <vector>

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"

namespace tiago_behavior_tree
{

/**
 * @brief Verifies a grasp from the gap between the gripper fingers.
 *
 * Returns SUCCESS when the measured gap lies between min_gap and max_gap, that is when
 * the fingers stopped on an object rather than closing on nothing or staying open.
 */
class CheckGraspFromFingers : public BT::StatefulActionNode
{
public:
  CheckGraspFromFingers(const std::string & name, const BT::NodeConfig & conf)
  : BT::StatefulActionNode(name, conf)
  {
  }

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<double>("min_gap", 0.046, "Smallest finger gap that means an object is held (m)"),
      BT::InputPort<double>("max_gap", 0.072, "Largest finger gap that means an object is held (m)"),
      BT::InputPort<double>("timeout", 2.0, "Seconds to wait for joint states")
    };
  }

  BT::NodeStatus onStart() override
  {
    if (!config().blackboard->get("node", node_)) {
      return BT::NodeStatus::FAILURE;
    }
    if (!subscription_) {
      subscription_ = node_->create_subscription<sensor_msgs::msg::JointState>(
        "joint_states", rclcpp::SensorDataQoS(),
        [this](sensor_msgs::msg::JointState::ConstSharedPtr msg) {joint_state_ = msg;});
    }
    joint_state_.reset();
    start_time_ = node_->now();
    return BT::NodeStatus::RUNNING;
  }

  BT::NodeStatus onRunning() override
  {
    double timeout = 2.0;
    getInput("timeout", timeout);
    if (!joint_state_) {
      if ((node_->now() - start_time_).seconds() > timeout) {
        RCLCPP_ERROR(node_->get_logger(), "[%s] No joint states received", name().c_str());
        return BT::NodeStatus::FAILURE;
      }
      return BT::NodeStatus::RUNNING;
    }

    double gap = 0.0;
    int fingers = 0;
    for (size_t i = 0; i < joint_state_->name.size() && i < joint_state_->position.size(); ++i) {
      if (joint_state_->name[i] == "gripper_left_finger_joint" ||
        joint_state_->name[i] == "gripper_right_finger_joint")
      {
        gap += joint_state_->position[i];
        ++fingers;
      }
    }
    if (fingers != 2) {
      RCLCPP_ERROR(node_->get_logger(), "[%s] Gripper joints not found", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    double min_gap = 0.046;
    double max_gap = 0.072;
    getInput("min_gap", min_gap);
    getInput("max_gap", max_gap);
    const bool held = gap >= min_gap && gap <= max_gap;
    RCLCPP_INFO(
      node_->get_logger(), "[%s] Finger gap %.3f m: %s", name().c_str(), gap,
      held ? "object held" : "no object");
    return held ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
  }

  void onHalted() override {}

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr subscription_;
  sensor_msgs::msg::JointState::ConstSharedPtr joint_state_;
  rclcpp::Time start_time_;
};

}  // namespace tiago_behavior_tree

#endif  // TIAGO_BEHAVIOR_TREE__CHECK_GRASP_FROM_FINGERS_HPP_
