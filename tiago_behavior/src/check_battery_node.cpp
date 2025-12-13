#include "tiago_behavior/CheckBattery.hpp"

#include <chrono>
#include <thread>

CheckBattery::CheckBattery(const std::string& name,
                           const BT::NodeConfiguration& config)
: BT::ConditionNode(name, config)
{
  node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
  battery_received_ = false;

  battery_sub_ = node_->create_subscription<sensor_msgs::msg::BatteryState>(
      "/battery/state", 10,
      std::bind(&CheckBattery::batteryCallback,
                this, std::placeholders::_1));
}

BT::PortsList CheckBattery::providedPorts()
{
  return { BT::InputPort<double>("threshold") };
}

BT::NodeStatus CheckBattery::tick()
{
  rclcpp::spin_some(node_);

  int attempts = 0;
  while (rclcpp::ok() && !battery_received_ && attempts < 20)
  {
    RCLCPP_WARN(node_->get_logger(),
                "Waiting for battery data...");
    rclcpp::spin_some(node_);
    std::this_thread::sleep_for(
        std::chrono::milliseconds(200));
    attempts++;
  }

  if (!battery_received_)
  {
    RCLCPP_WARN(node_->get_logger(),
                "No battery data received yet!");
    return BT::NodeStatus::FAILURE;
  }

  double threshold = 30.0;
  if (!getInput("threshold", threshold))
  {
    RCLCPP_WARN(node_->get_logger(),
                "No threshold input, using default = 30%%");
  }

  double percentage = last_msg_->percentage;

  RCLCPP_INFO(node_->get_logger(),
              "Battery = %.2f%% (Threshold = %.2f%%)",
              percentage, threshold);

  if (percentage < threshold)
  {
    RCLCPP_WARN(node_->get_logger(),
                "Battery low!");
    return BT::NodeStatus::FAILURE;
  }

  RCLCPP_INFO(node_->get_logger(),
              "Battery sufficient.");
  return BT::NodeStatus::SUCCESS;
}

void CheckBattery::batteryCallback(
  const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
  last_msg_ = msg;
  battery_received_ = true;
}

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<CheckBattery>("CheckBattery");
}
