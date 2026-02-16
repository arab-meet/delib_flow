// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/KeyPoint3DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/key_point3_d_array.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/msg/detail/key_point3_d_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint3DArray_frame_id
{
public:
  explicit Init_KeyPoint3DArray_frame_id(::yolo_msgs::msg::KeyPoint3DArray & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::msg::KeyPoint3DArray frame_id(::yolo_msgs::msg::KeyPoint3DArray::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::KeyPoint3DArray msg_;
};

class Init_KeyPoint3DArray_data
{
public:
  Init_KeyPoint3DArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint3DArray_frame_id data(::yolo_msgs::msg::KeyPoint3DArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_KeyPoint3DArray_frame_id(msg_);
  }

private:
  ::yolo_msgs::msg::KeyPoint3DArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::KeyPoint3DArray>()
{
  return yolo_msgs::msg::builder::Init_KeyPoint3DArray_data();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__BUILDER_HPP_
