// UndockRobot.hpp
#ifndef UNDOCK_ROBOT_HPP_
#define UNDOCK_ROBOT_HPP_

#include <behaviortree_ros2/bt_action_node.hpp>
#include <nav2_msgs/action/undock_robot.hpp>

class UndockRobot : public BT::RosActionNode<nav2_msgs::action::UndockRobot>
{
public:
    UndockRobot(const std::string& name,
                const BT::NodeConfig& config,
                const BT::RosNodeParams& params);

    static BT::PortsList providedPorts();

    bool setGoal(Goal& goal) override;

    BT::NodeStatus onResultReceived(const WrappedResult& result) override;

    virtual BT::NodeStatus onFailure(BT::ActionNodeErrorCode error) override;
};

#endif  // UNDOCK_ROBOT_HPP_
