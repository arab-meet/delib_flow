#include "tiago_behavior/DockAndRecharge.hpp"

DockAndRecharge::DockAndRecharge(const std::string& name,
                                 const BT::NodeConfiguration& config)
: BT::CoroActionNode(name, config)
{
  node_ = config.blackboard->get<rclcpp::Node::SharedPtr>("node");

  client_ = rclcpp_action::create_client<DockRobot>(
      node_, "/dock_robot");

  recharge_pub_ = node_->create_publisher<std_msgs::msg::Bool>(
      "/battery/recharge/start", 10);
}

BT::PortsList DockAndRecharge::providedPorts()
{
  return {
    BT::InputPort<std::string>("dock_id", "home_dock")
  };
}

BT::NodeStatus DockAndRecharge::tick()
{
  std::string dock_id = "home_dock";
  getInput("dock_id", dock_id);

  if (!client_->wait_for_action_server(std::chrono::seconds(5)))
  {
    RCLCPP_ERROR(node_->get_logger(),
                 "Dock action server not available!");
    return BT::NodeStatus::FAILURE;
  }

  auto goal_msg = DockRobot::Goal();
  goal_msg.dock_id = dock_id;

  RCLCPP_INFO(node_->get_logger(),
              "Sending dock goal: [%s]", dock_id.c_str());

  auto goal_handle_future = client_->async_send_goal(goal_msg);

  // Wait for goal handle
  while (rclcpp::ok())
  {
    rclcpp::spin_some(node_);
    if (goal_handle_future.wait_for(
          std::chrono::milliseconds(50)) ==
        std::future_status::ready)
      break;

    setStatusRunningAndYield();
  }

  auto goal_handle = goal_handle_future.get();
  if (!goal_handle)
  {
    RCLCPP_ERROR(node_->get_logger(), "Dock goal rejected");
    return BT::NodeStatus::FAILURE;
  }

  // Wait for result
  auto result_future = client_->async_get_result(goal_handle);

  RCLCPP_INFO(node_->get_logger(),
              "Waiting for docking result...");

  while (rclcpp::ok())
  {
    rclcpp::spin_some(node_);
    if (result_future.wait_for(
          std::chrono::milliseconds(100)) ==
        std::future_status::ready)
      break;

    setStatusRunningAndYield();
  }

  auto result = result_future.get();

  if (result.code == rclcpp_action::ResultCode::SUCCEEDED)
  {
    RCLCPP_INFO(node_->get_logger(),
                "Docking succeeded! Sending recharge signal...");

    std_msgs::msg::Bool msg;
    msg.data = true;
    recharge_pub_->publish(msg);

    RCLCPP_INFO(node_->get_logger(), "Recharge signal sent ✔");
    return BT::NodeStatus::SUCCESS;
  }

  RCLCPP_WARN(node_->get_logger(),
              "Docking failed or aborted");
  return BT::NodeStatus::FAILURE;
}

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<DockAndRecharge>("DockAndRecharge");
}
