// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice
#ifndef PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "play_motion2_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "play_motion2_msgs/msg/detail/motion__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_play_motion2_msgs__msg__Motion(
  const play_motion2_msgs__msg__Motion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_deserialize_play_motion2_msgs__msg__Motion(
  eprosima::fastcdr::Cdr &,
  play_motion2_msgs__msg__Motion * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_play_motion2_msgs__msg__Motion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_play_motion2_msgs__msg__Motion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
bool cdr_serialize_key_play_motion2_msgs__msg__Motion(
  const play_motion2_msgs__msg__Motion * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t get_serialized_size_key_play_motion2_msgs__msg__Motion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
size_t max_serialized_size_key_play_motion2_msgs__msg__Motion(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_play_motion2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, play_motion2_msgs, msg, Motion)();

#ifdef __cplusplus
}
#endif

#endif  // PLAY_MOTION2_MSGS__MSG__DETAIL__MOTION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
