// Copyright 2026 Arabian Robotics
#include "tiago_behavior_tree/check_grasp_from_fingers.hpp"
#include "behaviortree_cpp/bt_factory.h"

BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<tiago_behavior_tree::CheckGraspFromFingers>("CheckGraspFromFingers");
}
