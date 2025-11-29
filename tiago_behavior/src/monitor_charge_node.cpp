#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/condition_node.h>

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/battery_state.hpp>
#include <std_msgs/msg/bool.hpp>

class MonitorCharge : public BT::ConditionNode
{
public:
  MonitorCharge(const std::string& name, const BT::NodeConfiguration& config)
  : BT::ConditionNode(name, config)
  {
    // Get node from blackboard
    node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
    battery_received_ = false;

    // Subscribe to battery state
    battery_sub_ = node_->create_subscription<sensor_msgs::msg::BatteryState>(
        "/battery/state", 10,
        std::bind(&MonitorCharge::batteryCallback, this, std::placeholders::_1));

    // Publisher to stop recharge
    recharge_pub_ = node_->create_publisher<std_msgs::msg::Bool>(
        "/battery/recharge/stop", 10);
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

    double threshold = 80.0;
    getInput("threshold", threshold);

    double percentage = last_msg_->percentage ;

    RCLCPP_INFO(node_->get_logger(),
                "Battery = %.2f%% (Threshold = %.2f%%)",
                percentage, threshold);

    if (percentage >= threshold)
    {
      RCLCPP_INFO(node_->get_logger(),
                  "Battery sufficiently charged. Stopping recharge...");

      std_msgs::msg::Bool msg;
      msg.data = true;
      recharge_pub_->publish(msg);

      return BT::NodeStatus::SUCCESS;
    }

    return BT::NodeStatus::RUNNING;
  }

private:
  void batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
  {
    last_msg_ = msg;
    battery_received_ = true;
  }

  rclcpp::Node::SharedPtr node_;
  rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
  rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr recharge_pub_;
  sensor_msgs::msg::BatteryState::SharedPtr last_msg_;

  bool battery_received_;
};
