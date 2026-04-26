// CheckBattery.hpp
#ifndef CHECK_BATTERY_HPP_
#define CHECK_BATTERY_HPP_

#include <behaviortree_cpp/action_node.h>
#include <behaviortree_ros2/ros_node_params.hpp>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/battery_state.hpp>

class CheckBattery : public BT::StatefulActionNode
{
public:
    CheckBattery(const std::string& name,
                 const BT::NodeConfig& config,
                 const BT::RosNodeParams& params);

    static BT::PortsList providedPorts();

    BT::NodeStatus onStart() override;
    BT::NodeStatus onRunning() override;
    void onHalted() override;

private:
    void batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg);
    rclcpp::Logger logger() const;

    std::weak_ptr<rclcpp::Node> node_;
    rclcpp::Subscription<sensor_msgs::msg::BatteryState>::SharedPtr battery_sub_;
    sensor_msgs::msg::BatteryState::SharedPtr last_msg_;
    bool battery_received_;
};

#endif  // CHECK_BATTERY_HPP_
