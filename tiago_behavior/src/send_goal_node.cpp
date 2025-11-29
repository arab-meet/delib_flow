#include <behaviortree_cpp/bt_factory.h>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>

#include <geometry_msgs/msg/pose_stamped.hpp>
#include <nav2_msgs/action/navigate_to_pose.hpp>
#include <tf2/LinearMath/Quaternion.h>

class SendGoalNode : public BT::CoroActionNode
{
public:
    using NavigateToPose = nav2_msgs::action::NavigateToPose;

    SendGoalNode(const std::string &name, const BT::NodeConfiguration &config)
        : BT::CoroActionNode(name, config)
    {
        node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");

        // Create the action client one time only
        action_client_ =
            rclcpp_action::create_client<NavigateToPose>(
                node_, "/navigate_to_pose");
    }

    static BT::PortsList providedPorts()
    {
        return {
            BT::InputPort<double>("x"),
            BT::InputPort<double>("y"),
            BT::InputPort<double>("yaw")
        };
    }

    BT::NodeStatus tick() override
    {
        double x, y, yaw;

        if (!getInput("x", x) || !getInput("y", y) || !getInput("yaw", yaw))
        {
            throw BT::RuntimeError("SendGoalNode: Missing input ports [x,y,yaw]");
        }

        // Wait for action server
        if (!action_client_->wait_for_action_server(std::chrono::seconds(5)))
        {
            RCLCPP_ERROR(node_->get_logger(),
                         "NavigateToPose action server not available");
            return BT::NodeStatus::FAILURE;
        }

        // Build goal
        NavigateToPose::Goal goal_msg;
        goal_msg.pose.header.frame_id = "map";
        goal_msg.pose.header.stamp = node_->now();
        goal_msg.pose.pose.position.x = x;
        goal_msg.pose.pose.position.y = y;

        tf2::Quaternion q;
        q.setRPY(0, 0, yaw);
        goal_msg.pose.pose.orientation.x = q.x();
        goal_msg.pose.pose.orientation.y = q.y();
        goal_msg.pose.pose.orientation.z = q.z();
        goal_msg.pose.pose.orientation.w = q.w();

        RCLCPP_INFO(node_->get_logger(),
                    "Sending goal: [%.2f , %.2f , %.2f]", x, y, yaw);

        auto goal_handle_future = action_client_->async_send_goal(goal_msg);

        // Wait for goal acceptance
        while (rclcpp::ok())
        {
            rclcpp::spin_some(node_);
            if (goal_handle_future.wait_for(std::chrono::milliseconds(50)) == std::future_status::ready)
                break;

            setStatusRunningAndYield();
        }

        auto goal_handle = goal_handle_future.get();
        if (!goal_handle)
        {
            RCLCPP_ERROR(node_->get_logger(), "Goal rejected by server!");
            return BT::NodeStatus::FAILURE;
        }

        // Now wait for result
        auto result_future = action_client_->async_get_result(goal_handle);

        while (rclcpp::ok())
        {
            rclcpp::spin_some(node_);
            if (result_future.wait_for(std::chrono::milliseconds(200)) == std::future_status::ready)
                break;

            setStatusRunningAndYield();
        }

        auto result = result_future.get();

        if (result.code == rclcpp_action::ResultCode::SUCCEEDED)
        {
            RCLCPP_INFO(node_->get_logger(), "Goal reached successfully!");
            return BT::NodeStatus::SUCCESS;
        }
        else
        {
            RCLCPP_ERROR(node_->get_logger(), "NavigateToPose failed!");
            return BT::NodeStatus::FAILURE;
        }
    }

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<NavigateToPose>::SharedPtr action_client_;
};
