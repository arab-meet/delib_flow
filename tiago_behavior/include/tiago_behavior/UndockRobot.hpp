#ifndef UNDOCK_ROBOT_HPP_
#define UNDOCK_ROBOT_HPP_

#include <behaviortree_cpp/bt_factory.h>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <nav2_msgs/action/undock_robot.hpp>

class UndockRobot : public BT::CoroActionNode
{
public:
    using Undock = nav2_msgs::action::UndockRobot;

    UndockRobot(const std::string& name,
                const BT::NodeConfiguration& config);

    static BT::PortsList providedPorts();

    BT::NodeStatus tick() override;

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<Undock>::SharedPtr client_;
};

#endif  // UNDOCK_ROBOT_HPP_
