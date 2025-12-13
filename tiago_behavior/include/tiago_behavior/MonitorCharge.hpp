#ifndef MONITOR_CHARGE_HPP_
#define MONITOR_CHARGE_HPP_

#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/condition_node.h>

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/battery_state.hpp>
#include <std_msgs/msg/bool.hpp>

class MonitorCharge : public BT::ConditionNode
{
public:
  MonitorCharge(const std::string& name,
                const BT::NodeConfiguration& config);

  static BT::PortsList providedPorts();

  BT::NodeStatus tick() override;

private:
  void batteryCallback(
    const sensor_msgs::msg::BatteryState::SharedPtr msg);

  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr recharge_pub_;
  sensor_msgs::msg::BatteryState::SharedPtr last_msg_;

  bool battery_received_;
};

#endif  // MONITOR_CHARGE_HPP_
