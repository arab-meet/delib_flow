// DockAndRecharge.hpp
#ifndef DOCK_AND_RECHARGE_HPP_
#define DOCK_AND_RECHARGE_HPP_

#include <behaviortree_ros2/bt_action_node.hpp>
#include <nav2_msgs/action/dock_robot.hpp>
#include <std_msgs/msg/bool.hpp>

class DockAndRecharge : public BT::RosActionNode<nav2_msgs::action::DockRobot>
{
public:
    DockAndRecharge(const std::string& name,
                    const BT::NodeConfig& config,
                    const BT::RosNodeParams& params);

    static BT::PortsList providedPorts();

    bool setGoal(Goal& goal) override;
    BT::NodeStatus onResultReceived(const WrappedResult& result) override;
    BT::NodeStatus onFailure(BT::ActionNodeErrorCode error) override;

private:
    rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr recharge_pub_;
};

#endif  // DOCK_AND_RECHARGE_HPP_
