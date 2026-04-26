#include "tiago_behavior/CheckBattery.hpp"
#include "behaviortree_cpp/bt_factory.h"
#include <rclcpp/rclcpp.hpp>

CheckBattery::CheckBattery(const std::string& name,
                           const BT::NodeConfig& config,
                           const BT::RosNodeParams& params)
: BT::StatefulActionNode(name, config),
  node_(params.nh),
  battery_received_(false)
{
    auto node = node_.lock();
    if (!node)
    {
        throw BT::RuntimeError("ROS node expired");
    }

    std::string topic_name = "/battery/state";
    getInput("topic_name", topic_name);

    battery_sub_ = node->create_subscription<sensor_msgs::msg::BatteryState>(
        topic_name,
        10,
        std::bind(&CheckBattery::batteryCallback, this, std::placeholders::_1));

    RCLCPP_INFO(logger(), "Subscribed to battery topic: %s", topic_name.c_str());
}

BT::PortsList CheckBattery::providedPorts()
{
    return {
        BT::InputPort<double>("threshold", 30.0, "Battery threshold percentage"),
        BT::InputPort<std::string>("topic_name", "/battery/state", "Battery topic name")
    };
}

BT::NodeStatus CheckBattery::onStart()
{
    battery_received_ = false;
    RCLCPP_INFO(logger(), "CheckBattery started, waiting for data...");
    return BT::NodeStatus::RUNNING;
}

BT::NodeStatus CheckBattery::onRunning()
{
    if (!battery_received_ || !last_msg_)
    {
        RCLCPP_WARN_THROTTLE(logger(),
                             *node_.lock()->get_clock(),
                             2000,
                             "Waiting for battery data...");
        return BT::NodeStatus::RUNNING;
    }

    double threshold = 30.0;
    getInput("threshold", threshold);

    double percentage = last_msg_->percentage ;

    RCLCPP_INFO(logger(),
                "Battery = %.2f%% (Threshold = %.2f%%)",
                percentage, threshold);

    if (percentage < threshold)
    {
        RCLCPP_WARN(logger(), "Battery low!");
        return BT::NodeStatus::FAILURE;
    }

    RCLCPP_INFO(logger(), "Battery sufficient.");
    return BT::NodeStatus::SUCCESS;
}

void CheckBattery::onHalted()
{
    RCLCPP_WARN(logger(), "CheckBattery halted");
}

void CheckBattery::batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
    last_msg_ = msg;
    battery_received_ = true;
}

rclcpp::Logger CheckBattery::logger() const
{
    if (auto node = node_.lock())
    {
        return node->get_logger();
    }
    return rclcpp::get_logger("CheckBattery");
}

BT_REGISTER_NODES(factory)
{
    factory.registerBuilder<CheckBattery>(
        "CheckBattery",
        [](const std::string& name, const BT::NodeConfig& config) -> std::unique_ptr<BT::TreeNode>
        {
            BT::RosNodeParams params;
            params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
            return std::make_unique<CheckBattery>(name, config, params);
        });
}
