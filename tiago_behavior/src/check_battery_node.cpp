#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/condition_node.h>

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/battery_state.hpp>

class CheckBattery : public BT::ConditionNode
{
public:
  CheckBattery(const std::string& name, const BT::NodeConfiguration& config)
  : BT::ConditionNode(name, config)
  {
    node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");

    battery_received_ = false;

    battery_sub_ = node_->create_subscription<sensor_msgs::msg::BatteryState>(
        "/battery/state", 10,
        std::bind(&CheckBattery::batteryCallback, this, std::placeholders::_1));
  }

  static BT::PortsList providedPorts()
  {
    return { BT::InputPort<double>("threshold") };
  }

  BT::NodeStatus tick() override
  {
    rclcpp::spin_some(node_);

    int attempts = 0;
    while (rclcpp::ok() && !battery_received_ && attempts < 20)
    {
      RCLCPP_WARN(node_->get_logger(), "Waiting for battery data...");
      rclcpp::spin_some(node_);
      std::this_thread::sleep_for(std::chrono::milliseconds(200));
      attempts++;
    }

    if (!battery_received_)
    {
      RCLCPP_WARN(node_->get_logger(), "No battery data received yet!");
      return BT::NodeStatus::FAILURE;
    }

    double threshold = 30.0;

    if (!getInput("threshold", threshold))
    {
      RCLCPP_WARN(node_->get_logger(), "No threshold input, using default = 30%%");
    }

    double percentage = last_msg_->percentage;

    RCLCPP_INFO(node_->get_logger(),
                "Battery = %.2f%% (Threshold = %.2f%%)", percentage, threshold);

    if (percentage < threshold)
    {
      RCLCPP_WARN(node_->get_logger(), "Battery low!");
      return BT::NodeStatus::FAILURE;
    }

    RCLCPP_INFO(node_->get_logger(), "Battery sufficient.");
    return BT::NodeStatus::SUCCESS;
  }

private:
  void batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
  {
    last_msg_ = msg;
    battery_received_ = true;
  }

  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
  sensor_msgs::msg::BatteryState::SharedPtr last_msg_;

  bool battery_received_;
};
