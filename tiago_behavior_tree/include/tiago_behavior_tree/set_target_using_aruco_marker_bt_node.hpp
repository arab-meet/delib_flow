// Copyright 2025 Arabian Robotics
// Author: ElSayed ElSheikh
#ifndef TIAGO_BEHAVIOR_TREE__SET_TARGET_USING_ARUCO_MARKER_BT_NODE_HPP_
#define TIAGO_BEHAVIOR_TREE__SET_TARGET_USING_ARUCO_MARKER_BT_NODE_HPP_

#include <string>
#include <memory>

#include "behaviortree_ros2/bt_topic_sub_node.hpp"
#include "behaviortree_ros2/ros_node_params.hpp"

#include "tf2/exceptions.hpp"
#include "tf2_ros/buffer.hpp"
#include "tf2_ros/transform_listener.hpp"
#include "tf2_geometry_msgs/tf2_geometry_msgs.hpp"

#include "geometry_msgs/msg/pose_array.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

namespace tiago_behavior_tree
{

class SetTargetUsingArucoMarkerBtNode
  : public BT::RosTopicSubNode<geometry_msgs::msg::PoseArray> {
public:
  explicit SetTargetUsingArucoMarkerBtNode(
    const std::string & name,
    const BT::NodeConfig & conf,
    const BT::RosNodeParams & params)
  : BT::RosTopicSubNode<geometry_msgs::msg::PoseArray>(name, conf, params)
  {
    auto nh = node_.lock();
    tf_buffer_ = std::make_unique<tf2_ros::Buffer>(nh->get_clock());
    tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
  }

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<std::string>("target_frame", "base_link",
                                   "Frame to transform detected markers into"),
      BT::InputPort<double>("tf_timeout", 1.0, "Timeout for Tf2"),
      BT::OutputPort<geometry_msgs::msg::PoseStamped>(
            "target_pose", "Detected Aruco marker stamped pose")};
  }

  BT::NodeStatus onTick(
    const std::shared_ptr<geometry_msgs::msg::PoseArray> & last_msg) override
  {
    RCLCPP_INFO(logger(), "[%s] onTick is invoked", name().c_str());
    if (!last_msg) {
      RCLCPP_WARN(logger(), "[%s] No Publisher on ArUco Poses topic", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    if (last_msg->poses.empty()) {
      RCLCPP_WARN(logger(), "[%s]Received empty ArUco PoseArray", name().c_str());
      return BT::NodeStatus::FAILURE;
    }

    RCLCPP_INFO(logger(), "[%s] received %zu ArUco Markers", name().c_str(),
                last_msg->poses.size());

    std::string target_frame;
    double tf_timeout;

    getInput("target_frame", target_frame);
    getInput("tf_timeout", tf_timeout);

    geometry_msgs::msg::PoseStamped target_pose;
    geometry_msgs::msg::PoseStamped pose_in_camera_optical_frame;
    pose_in_camera_optical_frame.header = last_msg->header;
    pose_in_camera_optical_frame.pose = last_msg->poses.front();

    try {
      tf_buffer_->transform(pose_in_camera_optical_frame, target_pose,
                            target_frame, tf2::durationFromSec(tf_timeout));
    } catch (const tf2::TransformException & ex) {
      RCLCPP_ERROR(logger(),
                   "[%s] Could not transform ArUco marker into target frame %s",
                   name().c_str(),
                   target_frame.c_str());
      return BT::NodeStatus::FAILURE;
    }

    setOutput("target_pose", target_pose);
    return BT::NodeStatus::SUCCESS;
  }

private:
  std::unique_ptr<tf2_ros::Buffer> tf_buffer_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_{nullptr};
};

}  // namespace tiago_behavior_tree

#endif  // TIAGO_BEHAVIOR_TREE__SET_TARGET_USING_ARUCO_MARKER_BT_NODE_HPP_
