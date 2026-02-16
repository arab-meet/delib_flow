// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from play_motion2_msgs:srv/ListMotions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/srv/list_motions.hpp"


#ifndef PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__BUILDER_HPP_
#define PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "play_motion2_msgs/srv/detail/list_motions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace play_motion2_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::srv::ListMotions_Request>()
{
  return ::play_motion2_msgs::srv::ListMotions_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace srv
{

namespace builder
{

class Init_ListMotions_Response_motion_keys
{
public:
  Init_ListMotions_Response_motion_keys()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::play_motion2_msgs::srv::ListMotions_Response motion_keys(::play_motion2_msgs::srv::ListMotions_Response::_motion_keys_type arg)
  {
    msg_.motion_keys = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::srv::ListMotions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::srv::ListMotions_Response>()
{
  return play_motion2_msgs::srv::builder::Init_ListMotions_Response_motion_keys();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace srv
{

namespace builder
{

class Init_ListMotions_Event_response
{
public:
  explicit Init_ListMotions_Event_response(::play_motion2_msgs::srv::ListMotions_Event & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::srv::ListMotions_Event response(::play_motion2_msgs::srv::ListMotions_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::srv::ListMotions_Event msg_;
};

class Init_ListMotions_Event_request
{
public:
  explicit Init_ListMotions_Event_request(::play_motion2_msgs::srv::ListMotions_Event & msg)
  : msg_(msg)
  {}
  Init_ListMotions_Event_response request(::play_motion2_msgs::srv::ListMotions_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListMotions_Event_response(msg_);
  }

private:
  ::play_motion2_msgs::srv::ListMotions_Event msg_;
};

class Init_ListMotions_Event_info
{
public:
  Init_ListMotions_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListMotions_Event_request info(::play_motion2_msgs::srv::ListMotions_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListMotions_Event_request(msg_);
  }

private:
  ::play_motion2_msgs::srv::ListMotions_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::srv::ListMotions_Event>()
{
  return play_motion2_msgs::srv::builder::Init_ListMotions_Event_info();
}

}  // namespace play_motion2_msgs

#endif  // PLAY_MOTION2_MSGS__SRV__DETAIL__LIST_MOTIONS__BUILDER_HPP_
