// Copyright (c) 2026, ElSayed ElSheikh
#ifndef TIAGO_BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_APPROACH_POSE_HPP_
#define TIAGO_BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_APPROACH_POSE_HPP_

#include <string>
#include <memory>
#include <cmath>

#include "behaviortree_cpp/bt_factory.h"
#include "rclcpp/rclcpp.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"

namespace tiago_behavior_tree
{

/**
 * @brief Computes the forward distance needed to bring the robot within
 *        arm reach of a detected object.
 *
 * Given an object pose in base_link, outputs the distance the robot must
 * drive forward so the object ends up at reach_distance from base_link.
 * Designed to feed into Nav2's DriveOnHeading behavior.
 */
class ComputeApproachPose : public BT::SyncActionNode
{
public:
  explicit ComputeApproachPose(
    const std::string & name,
    const BT::NodeConfig & conf)
  : BT::SyncActionNode(name, conf)
  {
  }

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<geometry_msgs::msg::PoseStamped>(
        "object_pose", "Object pose in base_link frame"),
      BT::InputPort<double>(
        "reach_distance", 0.75, "Desired distance from robot to object after approach (m)"),
      BT::OutputPort<double>(
        "approach_distance", "Distance to drive forward (m)")
    };
  }

  BT::NodeStatus tick() override
  {
    // Get node from blackboard
    if (!config().blackboard->get("node", node_)) {
      return BT::NodeStatus::FAILURE;
    }

    geometry_msgs::msg::PoseStamped object_pose;
    double reach_distance;

    if (!getInput("object_pose", object_pose)) {
      RCLCPP_ERROR(node_->get_logger(), "[%s] Missing required input [object_pose]", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    getInput("reach_distance", reach_distance);

    double forward_distance = object_pose.pose.position.x - reach_distance;
    if (forward_distance <= 0.05) {
      RCLCPP_INFO(
        node_->get_logger(),
        "[%s] Object already within reach (x=%.3f, reach=%.3f), no approach needed",
        name().c_str(), object_pose.pose.position.x, reach_distance);
      forward_distance = 0.0;
    }

    RCLCPP_INFO(
      node_->get_logger(),
      "[%s] Object at x=%.3f in base_link. Drive forward %.3fm (reach_distance=%.2f)",
      name().c_str(),
      object_pose.pose.position.x,
      forward_distance,
      reach_distance);

    setOutput("approach_distance", forward_distance);
    return BT::NodeStatus::SUCCESS;
  }

private:
  rclcpp::Node::SharedPtr node_;
};

}  // namespace tiago_behavior_tree

#endif  // TIAGO_BEHAVIOR_TREE__PLUGINS__ACTION__COMPUTE_APPROACH_POSE_HPP_
