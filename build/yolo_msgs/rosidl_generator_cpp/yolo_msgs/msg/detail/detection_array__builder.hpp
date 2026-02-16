// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/DetectionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/detection_array.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/msg/detail/detection_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectionArray_detections
{
public:
  explicit Init_DetectionArray_detections(::yolo_msgs::msg::DetectionArray & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::msg::DetectionArray detections(::yolo_msgs::msg::DetectionArray::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::DetectionArray msg_;
};

class Init_DetectionArray_header
{
public:
  Init_DetectionArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionArray_detections header(::yolo_msgs::msg::DetectionArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectionArray_detections(msg_);
  }

private:
  ::yolo_msgs::msg::DetectionArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::DetectionArray>()
{
  return yolo_msgs::msg::builder::Init_DetectionArray_header();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__DETECTION_ARRAY__BUILDER_HPP_
