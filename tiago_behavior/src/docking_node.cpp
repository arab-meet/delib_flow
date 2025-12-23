// DockAndRecharge.cpp
#include "tiago_behavior/DockAndRecharge.hpp"

#include <rclcpp/rclcpp.hpp>

DockAndRecharge::DockAndRecharge(const std::string& name,
                                 const BT::NodeConfig& config,
                                 const BT::RosNodeParams& params)
: BT::RosActionNode<nav2_msgs::action::DockRobot>(name, config, params)
{
    if (auto node = node_.lock())
    {
        recharge_pub_ = node->create_publisher<std_msgs::msg::Bool>(
            "/battery/recharge/start", 10);
    }
}

BT::PortsList DockAndRecharge::providedPorts()
{
    return providedBasicPorts({
        BT::InputPort<std::string>("dock_id", "home_dock", "Dock station ID")
    });
}

bool DockAndRecharge::setGoal(Goal& goal)
{
    std::string dock_id = "home_dock";
    getInput("dock_id", dock_id);
    goal.dock_id = dock_id;

    RCLCPP_INFO(logger(), "Sending dock goal: [%s]", dock_id.c_str());
    return true;
}

BT::NodeStatus DockAndRecharge::onResultReceived(const WrappedResult& result)
{
    if (result.code == rclcpp_action::ResultCode::SUCCEEDED)
    {
        RCLCPP_INFO(logger(), "Docking succeeded! Sending start recharge ...");

        if (recharge_pub_)
        {
            std_msgs::msg::Bool msg;
            msg.data = true;
            recharge_pub_->publish(msg);
        }

        return BT::NodeStatus::SUCCESS;
    }

    RCLCPP_WARN(logger(), "Docking failed or aborted");
    return BT::NodeStatus::FAILURE;
}

BT::NodeStatus DockAndRecharge::onFailure(BT::ActionNodeErrorCode error)
{
    RCLCPP_ERROR(logger(),
                 "DockAndRecharge failed with error: %s",
                 toStr(error));
    return BT::NodeStatus::FAILURE;
}

#include "behaviortree_cpp/bt_factory.h"

BT_REGISTER_NODES(factory)
{
    factory.registerBuilder<DockAndRecharge>(
        "DockAndRecharge",
        [](const std::string& name, const BT::NodeConfig& config) -> std::unique_ptr<BT::TreeNode>
        {
            BT::RosNodeParams params;
            params.nh = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
            params.default_port_value = "dock_robot";
            return std::make_unique<DockAndRecharge>(name, config, params);
        });
}
