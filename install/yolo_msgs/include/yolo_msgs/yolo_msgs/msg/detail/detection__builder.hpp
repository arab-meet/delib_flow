// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolo_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/detection.hpp"


#ifndef YOLO_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define YOLO_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yolo_msgs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yolo_msgs
{

namespace msg
{

namespace builder
{

class Init_Detection_keypoints3d
{
public:
  explicit Init_Detection_keypoints3d(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  ::yolo_msgs::msg::Detection keypoints3d(::yolo_msgs::msg::Detection::_keypoints3d_type arg)
  {
    msg_.keypoints3d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_keypoints
{
public:
  explicit Init_Detection_keypoints(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_keypoints3d keypoints(::yolo_msgs::msg::Detection::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return Init_Detection_keypoints3d(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_mask
{
public:
  explicit Init_Detection_mask(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_keypoints mask(::yolo_msgs::msg::Detection::_mask_type arg)
  {
    msg_.mask = std::move(arg);
    return Init_Detection_keypoints(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_bbox3d
{
public:
  explicit Init_Detection_bbox3d(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_mask bbox3d(::yolo_msgs::msg::Detection::_bbox3d_type arg)
  {
    msg_.bbox3d = std::move(arg);
    return Init_Detection_mask(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_bbox
{
public:
  explicit Init_Detection_bbox(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_bbox3d bbox(::yolo_msgs::msg::Detection::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_Detection_bbox3d(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_id
{
public:
  explicit Init_Detection_id(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_bbox id(::yolo_msgs::msg::Detection::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Detection_bbox(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_score
{
public:
  explicit Init_Detection_score(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_id score(::yolo_msgs::msg::Detection::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Detection_id(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_class_name
{
public:
  explicit Init_Detection_class_name(::yolo_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_score class_name(::yolo_msgs::msg::Detection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_Detection_score(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

class Init_Detection_class_id
{
public:
  Init_Detection_class_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_class_name class_id(::yolo_msgs::msg::Detection::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return Init_Detection_class_name(msg_);
  }

private:
  ::yolo_msgs::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolo_msgs::msg::Detection>()
{
  return yolo_msgs::msg::builder::Init_Detection_class_id();
}

}  // namespace yolo_msgs

#endif  // YOLO_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
