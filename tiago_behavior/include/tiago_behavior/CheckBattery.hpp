#ifndef CHECK_BATTERY_HPP_
#define CHECK_BATTERY_HPP_

#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/condition_node.h>

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/battery_state.hpp>

class CheckBattery : public BT::ConditionNode
{
public:
  CheckBattery(const std::string& name,
               const BT::NodeConfiguration& config);

  static BT::PortsList providedPorts();

  BT::NodeStatus tick() override;

private:
  void batteryCallback(
    const sensor_msgs::msg::BatteryState::SharedPtr msg);

  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
  sensor_msgs::msg::BatteryState::SharedPtr last_msg_;

  bool battery_received_;
};

#endif  // CHECK_BATTERY_HPP_
