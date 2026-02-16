// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/mask.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/msg/detail/mask__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_Mask_data
{
public:
  explicit Init_Mask_data(::yolo_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::msg::Mask data(::yolo_msgs::msg::Mask::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::Mask msg_;
};

class Init_Mask_width
{
public:
  explicit Init_Mask_width(::yolo_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_data width(::yolo_msgs::msg::Mask::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Mask_data(msg_);
  }

private:
  ::yolo_msgs::msg::Mask msg_;
};

class Init_Mask_height
{
public:
  Init_Mask_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mask_width height(::yolo_msgs::msg::Mask::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Mask_width(msg_);
  }

private:
  ::yolo_msgs::msg::Mask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::Mask>()
{
  return yolo_msgs::msg::builder::Init_Mask_height();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
