// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from play_motion2_msgs:srv/RemoveMotion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/srv/remove_motion.hpp"


#ifndef PLAY_MOTION2_MSGS__SRV__DETAIL__REMOVE_MOTION__BUILDER_HPP_
#define PLAY_MOTION2_MSGS__SRV__DETAIL__REMOVE_MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "play_motion2_msgs/srv/detail/remove_motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace play_motion2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveMotion_Request_motion_key
{
public:
  Init_RemoveMotion_Request_motion_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::play_motion2_msgs::srv::RemoveMotion_Request motion_key(::play_motion2_msgs::srv::RemoveMotion_Request::_motion_key_type arg)
  {
    msg_.motion_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::srv::RemoveMotion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::srv::RemoveMotion_Request>()
{
  return play_motion2_msgs::srv::builder::Init_RemoveMotion_Request_motion_key();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveMotion_Response_success
{
public:
  Init_RemoveMotion_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::play_motion2_msgs::srv::RemoveMotion_Response success(::play_motion2_msgs::srv::RemoveMotion_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::srv::RemoveMotion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::srv::RemoveMotion_Response>()
{
  return play_motion2_msgs::srv::builder::Init_RemoveMotion_Response_success();
}

}  // namespace play_motion2_msgs


namespace play_motion2_msgs
{

namespace srv
{

namespace builder
{

class Init_RemoveMotion_Event_response
{
public:
  explicit Init_RemoveMotion_Event_response(::play_motion2_msgs::srv::RemoveMotion_Event & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::srv::RemoveMotion_Event response(::play_motion2_msgs::srv::RemoveMotion_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::srv::RemoveMotion_Event msg_;
};

class Init_RemoveMotion_Event_request
{
public:
  explicit Init_RemoveMotion_Event_request(::play_motion2_msgs::srv::RemoveMotion_Event & msg)
  : msg_(msg)
  {}
  Init_RemoveMotion_Event_response request(::play_motion2_msgs::srv::RemoveMotion_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RemoveMotion_Event_response(msg_);
  }

private:
  ::play_motion2_msgs::srv::RemoveMotion_Event msg_;
};

class Init_RemoveMotion_Event_info
{
public:
  Init_RemoveMotion_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoveMotion_Event_request info(::play_motion2_msgs::srv::RemoveMotion_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RemoveMotion_Event_request(msg_);
  }

private:
  ::play_motion2_msgs::srv::RemoveMotion_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::srv::RemoveMotion_Event>()
{
  return play_motion2_msgs::srv::builder::Init_RemoveMotion_Event_info();
}

}  // namespace play_motion2_msgs

#endif  // PLAY_MOTION2_MSGS__SRV__DETAIL__REMOVE_MOTION__BUILDER_HPP_
