// UndockRobot.cpp
#include "tiago_behavior/UndockRobot.hpp"
#include "behaviortree_cpp/bt_factory.h"
#include <rclcpp/rclcpp.hpp>

UndockRobot::UndockRobot(const std::string& name,
                         const BT::NodeConfig& config,
                         const BT::RosNodeParams& params)
: BT::RosActionNode<nav2_msgs::action::UndockRobot>(name, config, params)
{
}

BT::PortsList UndockRobot::providedPorts()
{
    return {};
}

bool UndockRobot::setGoal(Goal& /*goal*/)
{
    RCLCPP_INFO(logger(), "Sending Undock goal...");
    return true;
}

BT::NodeStatus UndockRobot::onResultReceived(const WrappedResult& result)
{
    if (result.code == rclcpp_action::ResultCode::SUCCEEDED)
    {
        RCLCPP_INFO(logger(), "Undocking succeeded!");
        return BT::NodeStatus::SUCCESS;
    }

    RCLCPP_WARN(logger(), "Undocking failed or aborted");
    return BT::NodeStatus::FAILURE;
}

BT::NodeStatus UndockRobot::onFailure(BT::ActionNodeErrorCode error)
{
    RCLCPP_ERROR(logger(), "UndockRobot failed with error: %s", toStr(error));
    return BT::NodeStatus::FAILURE;
}

#include "behaviortree_cpp/bt_factory.h"

BT_REGISTER_NODES(factory)
{
    factory.registerBuilder<UndockRobot>(
        "UndockRobot",
        [](const std::string& name, const BT::NodeConfig& config) -> std::unique_ptr<BT::TreeNode>
        {
            BT::RosNodeParams params;
            params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
            params.default_port_value = "undock_robot";
            return std::make_unique<UndockRobot>(name, config, params);
        });
}
