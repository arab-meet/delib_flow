// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/key_point2_d_array.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/msg/detail/key_point2_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint2DArray_data
{
public:
  Init_KeyPoint2DArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::yolo_msgs::msg::KeyPoint2DArray data(::yolo_msgs::msg::KeyPoint2DArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::KeyPoint2DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::KeyPoint2DArray>()
{
  return yolo_msgs::msg::builder::Init_KeyPoint2DArray_data();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__BUILDER_HPP_
