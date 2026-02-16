// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/bounding_box2_d.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox2D_size
{
public:
  explicit Init_BoundingBox2D_size(::yolo_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::msg::BoundingBox2D size(::yolo_msgs::msg::BoundingBox2D::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_center
{
public:
  Init_BoundingBox2D_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox2D_size center(::yolo_msgs::msg::BoundingBox2D::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_BoundingBox2D_size(msg_);
  }

private:
  ::yolo_msgs::msg::BoundingBox2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::BoundingBox2D>()
{
  return yolo_msgs::msg::builder::Init_BoundingBox2D_center();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
