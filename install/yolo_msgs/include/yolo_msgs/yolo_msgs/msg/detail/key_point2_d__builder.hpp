// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/key_point2_d.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/msg/detail/key_point2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint2D_score
{
public:
  explicit Init_KeyPoint2D_score(::yolo_msgs::msg::KeyPoint2D & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::msg::KeyPoint2D score(::yolo_msgs::msg::KeyPoint2D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::KeyPoint2D msg_;
};

class Init_KeyPoint2D_point
{
public:
  explicit Init_KeyPoint2D_point(::yolo_msgs::msg::KeyPoint2D & msg)
  : msg_(msg)
  {}
  Init_KeyPoint2D_score point(::yolo_msgs::msg::KeyPoint2D::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_KeyPoint2D_score(msg_);
  }

private:
  ::yolo_msgs::msg::KeyPoint2D msg_;
};

class Init_KeyPoint2D_id
{
public:
  Init_KeyPoint2D_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint2D_point id(::yolo_msgs::msg::KeyPoint2D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyPoint2D_point(msg_);
  }

private:
  ::yolo_msgs::msg::KeyPoint2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::KeyPoint2D>()
{
  return yolo_msgs::msg::builder::Init_KeyPoint2D_id();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D__BUILDER_HPP_
