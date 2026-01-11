// Copyright 2025 Arabian Robotics
// Author: ElSayed ElSheikh
#include "tiago_behavior_tree/set_target_using_aruco_marker_bt_node.hpp"

BT_REGISTER_NODES(factory) {
  BT::NodeBuilder builder = [](const std::string & name,
    const BT::NodeConfiguration & config) {
      BT::RosNodeParams params;
      params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
      params.default_port_value = "aruco_poses";
      params.server_timeout =
        config.blackboard->get<std::chrono::milliseconds>("server_timeout");
      params.wait_for_server_timeout =
        config.blackboard->get<std::chrono::milliseconds>(
            "wait_for_service_timeout");

      return std::make_unique<
        tiago_behavior_tree::SetTargetUsingArucoMarkerBtNode>(name, config,
                                                              params);
    };

  factory.registerBuilder<tiago_behavior_tree::SetTargetUsingArucoMarkerBtNode>(
      "SetTargetUsingArucoMarker", builder);
}
