// Copyright (c) 2026, ElSayed ElSheikh
#ifndef TIAGO_BEHAVIOR_TREE__PLUGINS__ACTION__SET_TARGET_USING_TRANSFORM_HPP_
#define TIAGO_BEHAVIOR_TREE__PLUGINS__ACTION__SET_TARGET_USING_TRANSFORM_HPP_

#include <string>
#include <memory>

#include "behaviortree_cpp/bt_factory.h"
#include "rclcpp/rclcpp.hpp"

#include "tf2/utils.hpp"
#include "tf2/exceptions.hpp"
#include "tf2_ros/buffer.hpp"
#include "tf2_ros/transform_listener.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"

namespace tiago_behavior_tree
{

class SetTargetUsingTransform : public BT::SyncActionNode
{
public:
  explicit SetTargetUsingTransform(
    const std::string & name,
    const BT::NodeConfig & conf)
  : BT::SyncActionNode(name, conf)
  {
  }

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<std::string>("source_frame", "Aruco_marker_1",
                                 "Source frame to transform from"),
      BT::InputPort<std::string>("base_frame", "base_link",
                                 "Target frame to transform into"),
      BT::InputPort<double>("tf_timeout", 1.0, "Timeout for TF2 lookup"),
      BT::InputPort<double>("offset_z", 0.0, "Vertical offset to apply to the target pose"),
      BT::OutputPort<geometry_msgs::msg::PoseStamped>("target_pose", "Transformed pose with adjustments")
    };
  }

  BT::NodeStatus tick() override
  {
    // Get node from blackboard
    if (!config().blackboard->get("node", node_)) {
      return BT::NodeStatus::FAILURE;
    }

    // Initialize TF2 buffer and listener if not already done
    if (!tf_buffer_) {
      tf_buffer_ = std::make_unique<tf2_ros::Buffer>(node_->get_clock());
      tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
    }

    std::string source_frame, base_frame;
    double tf_timeout, offset_z;

    if (!getInput("source_frame", source_frame)) {
      RCLCPP_ERROR(node_->get_logger(), "[%s] Failed to get source_frame", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    if (!getInput("offset_z", offset_z)) {
      RCLCPP_ERROR(node_->get_logger(), "[%s] Failed to get offset_z", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    if (!getInput("base_frame", base_frame)) {
      RCLCPP_ERROR(node_->get_logger(), "[%s] Failed to get base_frame", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    if (!getInput("tf_timeout", tf_timeout)) {
      RCLCPP_ERROR(node_->get_logger(), "[%s] Failed to get tf_timeout", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    geometry_msgs::msg::TransformStamped transform_stamped;

    try {
      transform_stamped = tf_buffer_->lookupTransform(
        base_frame, source_frame, tf2::TimePointZero, tf2::durationFromSec(tf_timeout));
    } catch (const tf2::TransformException & ex) {
      RCLCPP_ERROR(
        node_->get_logger(),
        "[%s] Could not transform from %s to %s: %s",
        name().c_str(), source_frame.c_str(), base_frame.c_str(), ex.what());
      return BT::NodeStatus::FAILURE;
    }

    // Convert transform to PoseStamped
    geometry_msgs::msg::PoseStamped target_pose;
    target_pose.header = transform_stamped.header;
    target_pose.pose.position.x = transform_stamped.transform.translation.x;
    target_pose.pose.position.y = transform_stamped.transform.translation.y;
    target_pose.pose.position.z = transform_stamped.transform.translation.z;
    target_pose.pose.orientation = transform_stamped.transform.rotation;

    // Apply transformations
    target_pose.pose.position.z += offset_z;  // Add vertical offset
    tf2::Quaternion target_quat;
    double yaw = tf2::getYaw(target_pose.pose.orientation);
    target_quat.setRPY(0, M_PI / 2, 0);
    target_pose.pose.orientation = tf2::toMsg(target_quat);

    setOutput("target_pose", target_pose);

    RCLCPP_INFO(
      node_->get_logger(),
      "[%s] Successfully transformed %s to %s",
      name().c_str(), source_frame.c_str(), base_frame.c_str());

    return BT::NodeStatus::SUCCESS;
  }

private:
  rclcpp::Node::SharedPtr node_;
  std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
};

}  // namespace tiago_behavior_tree

#endif  // TIAGO_BEHAVIOR_TREE__PLUGINS__ACTION__SET_TARGET_USING_TRANSFORM_HPP_
