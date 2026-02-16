// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "btcpp_ros2_interfaces/srv/get_trees.hpp"


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


namespace btcpp_ros2_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetTrees_Event_response
{
public:
  explicit Init_GetTrees_Event_response(::btcpp_ros2_interfaces::srv::GetTrees_Event & msg)
  : msg_(msg)
  {}
  ::btcpp_ros2_interfaces::srv::GetTrees_Event response(::btcpp_ros2_interfaces::srv::GetTrees_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::btcpp_ros2_interfaces::srv::GetTrees_Event msg_;
};

class Init_GetTrees_Event_request
{
public:
  explicit Init_GetTrees_Event_request(::btcpp_ros2_interfaces::srv::GetTrees_Event & msg)
  : msg_(msg)
  {}
  Init_GetTrees_Event_response request(::btcpp_ros2_interfaces::srv::GetTrees_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetTrees_Event_response(msg_);
  }

private:
  ::btcpp_ros2_interfaces::srv::GetTrees_Event msg_;
};

class Init_GetTrees_Event_info
{
public:
  Init_GetTrees_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTrees_Event_request info(::btcpp_ros2_interfaces::srv::GetTrees_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetTrees_Event_request(msg_);
  }

private:
  ::btcpp_ros2_interfaces::srv::GetTrees_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::btcpp_ros2_interfaces::srv::GetTrees_Event>()
{
  return btcpp_ros2_interfaces::srv::builder::Init_GetTrees_Event_info();
}

}  // namespace btcpp_ros2_interfaces

#endif  // BTCPP_ROS2_INTERFACES__SRV__DETAIL__GET_TREES__BUILDER_HPP_
