// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/msg/motion.hpp"


#ifndef PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_
#define PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "play_motion2_msgs/msg/detail/motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace play_motion2_msgs
{

namespace msg
{

namespace builder
{

class Init_Motion_times_from_start
{
public:
  explicit Init_Motion_times_from_start(::play_motion2_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  ::play_motion2_msgs::msg::Motion times_from_start(::play_motion2_msgs::msg::Motion::_times_from_start_type arg)
  {
    msg_.times_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::play_motion2_msgs::msg::Motion msg_;
};

class Init_Motion_positions
{
public:
  explicit Init_Motion_positions(::play_motion2_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  Init_Motion_times_from_start positions(::play_motion2_msgs::msg::Motion::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return Init_Motion_times_from_start(msg_);
  }

private:
  ::play_motion2_msgs::msg::Motion msg_;
};

class Init_Motion_joints
{
public:
  explicit Init_Motion_joints(::play_motion2_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  Init_Motion_positions joints(::play_motion2_msgs::msg::Motion::_joints_type arg)
  {
    msg_.joints = std::move(arg);
    return Init_Motion_positions(msg_);
  }

private:
  ::play_motion2_msgs::msg::Motion msg_;
};

class Init_Motion_description
{
public:
  explicit Init_Motion_description(::play_motion2_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  Init_Motion_joints description(::play_motion2_msgs::msg::Motion::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_Motion_joints(msg_);
  }

private:
  ::play_motion2_msgs::msg::Motion msg_;
};

class Init_Motion_usage
{
public:
  explicit Init_Motion_usage(::play_motion2_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  Init_Motion_description usage(::play_motion2_msgs::msg::Motion::_usage_type arg)
  {
    msg_.usage = std::move(arg);
    return Init_Motion_description(msg_);
  }

private:
  ::play_motion2_msgs::msg::Motion msg_;
};

class Init_Motion_name
{
public:
  explicit Init_Motion_name(::play_motion2_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  Init_Motion_usage name(::play_motion2_msgs::msg::Motion::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Motion_usage(msg_);
  }

private:
  ::play_motion2_msgs::msg::Motion msg_;
};

class Init_Motion_key
{
public:
  Init_Motion_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motion_name key(::play_motion2_msgs::msg::Motion::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_Motion_name(msg_);
  }

private:
  ::play_motion2_msgs::msg::Motion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::play_motion2_msgs::msg::Motion>()
{
  return play_motion2_msgs::msg::builder::Init_Motion_key();
}

}  // namespace play_motion2_msgs

#endif  // PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_
