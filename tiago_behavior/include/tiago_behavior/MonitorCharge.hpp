// MonitorCharge.hpp
#ifndef MONITOR_CHARGE_HPP_
#define MONITOR_CHARGE_HPP_

#include <behaviortree_cpp/action_node.h>
#include <behaviortree_ros2/ros_node_params.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/executors/single_threaded_executor.hpp>
#include <sensor_msgs/msg/battery_state.hpp>
#include <std_msgs/msg/bool.hpp>

class MonitorCharge : public BT::ActionNodeBase
{
public:
    MonitorCharge(const std::string& name,
                  const BT::NodeConfig& config,
                  const BT::RosNodeParams& params);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;
    void halt() override;

private:
    void batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg);
    rclcpp::Logger logger() const;

    std::weak_ptr<rclcpp::Node> node_;
    rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr recharge_stop_pub_;
    rclcpp::CallbackGroup::SharedPtr callback_group_;
    rclcpp::executors::SingleThreadedExecutor executor_;
    sensor_msgs::msg::BatteryState::SharedPtr last_msg_;
    bool battery_received_;
};

#endif  // MONITOR_CHARGE_HPP_
