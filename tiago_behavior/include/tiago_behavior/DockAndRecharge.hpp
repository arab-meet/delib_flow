#ifndef DOCK_AND_RECHARGE_HPP_
#define DOCK_AND_RECHARGE_HPP_

#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/action_node.h>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

#include <nav2_msgs/action/dock_robot.hpp>
#include <std_msgs/msg/bool.hpp>

class DockAndRecharge : public BT::CoroActionNode
{
public:
  using DockRobot = nav2_msgs::action::DockRobot;

  DockAndRecharge(const std::string& name,
                  const BT::NodeConfiguration& config);

  static BT::PortsList providedPorts();

  BT::NodeStatus tick() override;

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp_action::Client<DockRobot>::SharedPtr client_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr recharge_pub_;
};

#endif  // DOCK_AND_RECHARGE_HPP_
