// MonitorCharge.cpp
#include "tiago_behavior/MonitorCharge.hpp"

MonitorCharge::MonitorCharge(const std::string& name,
                             const BT::NodeConfig& config,
                             const BT::RosNodeParams& params)
: BT::ActionNodeBase(name, config),
  node_(params.nh),
  battery_received_(false)
{
    auto node = node_.lock();
    if (!node)
    {
        throw BT::RuntimeError("ROS node expired");
    }

    callback_group_ = node->create_callback_group(
        rclcpp::CallbackGroupType::MutuallyExclusive);

    executor_.add_callback_group(
        callback_group_,
        node->get_node_base_interface());

    std::string topic_name;
    getInput("topic_name", topic_name);

    rclcpp::SubscriptionOptions sub_options;
    sub_options.callback_group = callback_group_;

    battery_sub_ = node->create_subscription<sensor_msgs::msg::BatteryState>(
        topic_name,
        10,
        std::bind(&MonitorCharge::batteryCallback, this, std::placeholders::_1),
        sub_options);

    recharge_stop_pub_ = node->create_publisher<std_msgs::msg::Bool>(
        "/battery/recharge/stop", 10);
}

BT::PortsList MonitorCharge::providedPorts()
{
    return {
        BT::InputPort<double>("threshold", 80.0, "Battery charge threshold percentage"),
        BT::InputPort<std::string>("topic_name", "/battery/state", "Battery state topic")
    };
}

BT::NodeStatus MonitorCharge::tick()
{
    executor_.spin_some();

    if (!battery_received_ || !last_msg_)
    {
        RCLCPP_WARN_THROTTLE(logger(),
                              *node_.lock()->get_clock(),
                              2000,
                              "Waiting for battery data...");
        return BT::NodeStatus::RUNNING;
    }

    double threshold;
    getInput("threshold", threshold);

    double percentage = last_msg_->percentage ;

    RCLCPP_INFO_THROTTLE(logger(),
                          *node_.lock()->get_clock(),
                          20,
                          "Battery = %.2f%% (Target = %.2f%%)",
                          percentage, threshold);

    if (percentage >= threshold)
    {
        std_msgs::msg::Bool msg;
        msg.data = true;
        recharge_stop_pub_->publish(msg);

        RCLCPP_INFO(logger(), "Battery charged. Stopping recharge.");
        return BT::NodeStatus::SUCCESS;
    }

    return BT::NodeStatus::RUNNING;
}

void MonitorCharge::halt()
{
}

void MonitorCharge::batteryCallback(const sensor_msgs::msg::BatteryState::SharedPtr msg)
{
    last_msg_ = msg;
    battery_received_ = true;
}

rclcpp::Logger MonitorCharge::logger() const
{
    if (auto node = node_.lock())
    {
        return node->get_logger();
    }
    return rclcpp::get_logger("MonitorCharge");
}

#include "behaviortree_cpp/bt_factory.h"

BT_REGISTER_NODES(factory)
{
    factory.registerBuilder<MonitorCharge>(
        "MonitorCharge",
        [](const std::string& name, const BT::NodeConfig& config) -> std::unique_ptr<BT::TreeNode>
        {
            BT::RosNodeParams params;
            params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
            params.default_port_value = "battery_state";
            return std::make_unique<MonitorCharge>(name, config, params);
        });
}
