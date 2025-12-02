// Copyright (c) 2025, Zaynap Ahmed
#pragma once

#include "grab2_ros_common/bt_execution_server.hpp"
#include "grab2_msgs/action/tree_action_server.hpp"
#include <string>

namespace grab2_bt_testing
{

class PickAndNavigate
  : public BT::TreeExecutionServer<grab2_msgs::action::TreeActionServer>
{
public:
  using ActionType = grab2_msgs::action::TreeActionServer;
  using GoalType   = ActionType::Goal;

  PickAndNavigate(const rclcpp::NodeOptions & options);

protected:
  void configure();
  std::string getTreeName(const GoalType & goal) override;
  void onTreeCreated(BT::Tree & tree, const GoalType & goal) override;
};

} // namespace grab2_bt_testing
