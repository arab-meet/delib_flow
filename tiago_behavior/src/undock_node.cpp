#include <behaviortree_cpp/bt_factory.h>

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <nav2_msgs/action/undock_robot.hpp>

class UndockRobot : public BT::CoroActionNode
{
public:
    using Undock = nav2_msgs::action::UndockRobot;

    UndockRobot(const std::string& name, const BT::NodeConfiguration& config)
    : BT::CoroActionNode(name, config)
    {
        node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");
        client_ = rclcpp_action::create_client<Undock>(node_, "/undock_robot");
    }

    static BT::PortsList providedPorts()
    {
        return {};
    }

    BT::NodeStatus tick() override
    {
        if (!client_->wait_for_action_server(std::chrono::seconds(5))) {
            RCLCPP_ERROR(node_->get_logger(), "Undock action server not available!");
            return BT::NodeStatus::FAILURE;
        }

        auto goal_msg = Undock::Goal();
        auto goal_handle_future = client_->async_send_goal(goal_msg);

        RCLCPP_INFO(node_->get_logger(), "Sending Undock goal...");

        // Wait for goal acceptance
        while (rclcpp::ok()) {
            rclcpp::spin_some(node_);
            if (goal_handle_future.wait_for(std::chrono::milliseconds(50)) == std::future_status::ready)
                break;
            setStatusRunningAndYield();
        }

        auto goal_handle = goal_handle_future.get();
        if (!goal_handle) {
            RCLCPP_ERROR(node_->get_logger(), "Undock goal rejected by server");
            return BT::NodeStatus::FAILURE;
        }

        // Wait for result
        auto result_future = client_->async_get_result(goal_handle);
        RCLCPP_INFO(node_->get_logger(), "Waiting for undocking result...");

        while (rclcpp::ok()) {
            rclcpp::spin_some(node_);
            if (result_future.wait_for(std::chrono::milliseconds(50)) == std::future_status::ready)
                break;
            setStatusRunningAndYield();
        }

        auto result = result_future.get();

        if (result.code == rclcpp_action::ResultCode::SUCCEEDED) {
            RCLCPP_INFO(node_->get_logger(), "Undocking succeeded!");
            return BT::NodeStatus::SUCCESS;
        } else {
            RCLCPP_WARN(node_->get_logger(), "Undocking failed or aborted");
            return BT::NodeStatus::FAILURE;
        }
    }

private:
    rclcpp::Node::SharedPtr node_;
    rclcpp_action::Client<Undock>::SharedPtr client_;
};
