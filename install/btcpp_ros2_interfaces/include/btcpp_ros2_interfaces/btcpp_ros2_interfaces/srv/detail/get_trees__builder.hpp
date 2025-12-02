// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

#ifndef BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__BUILDER_HPP_
#define BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "btcpp_ros2_interfaces/srv/detail/get_trees__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace btcpp_ros2_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::srv::GetTrees_Request>()
{
  return ::btcpp_ros2_interfaces::srv::GetTrees_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace btcpp_ros2_interfaces


namespace btcpp_ros2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetTrees_Response_tree_ids
{
public:
  Init_GetTrees_Response_tree_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::btcpp_ros2_interfaces::srv::GetTrees_Response tree_ids(::btcpp_ros2_interfaces::srv::GetTrees_Response::_tree_ids_type arg)
  {
    msg_.tree_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::srv::GetTrees_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::srv::GetTrees_Response>()
{
  return btcpp_ros2_interfaces::srv::builder::Init_GetTrees_Response_tree_ids();
}

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__BUILDER_HPP_
