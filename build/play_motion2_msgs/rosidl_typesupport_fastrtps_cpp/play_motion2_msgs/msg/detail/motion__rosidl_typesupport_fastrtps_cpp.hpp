// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "play_motion2_msgs/msg/detail/motion__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace play_motion2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
cdr_serialize(
  const play_motion2_msgs::msg::Motion & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs::msg::Motion & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
get_serialized_size(
  const play_motion2_msgs::msg::Motion & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
max_serialized_size_Motion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
cdr_serialize_key(
  const play_motion2_msgs::msg::Motion & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
get_serialized_size_key(
  const play_motion2_msgs::msg::Motion & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
max_serialized_size_key_Motion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace play_motion2_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, play_motion2_msgs, msg, Motion)();

#ifdef __cplusplus
}
#endif

#endif  // PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
