// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from yolo_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice
#ifndef YOLO_MSGS__MSG__DETAIL__POSE2_D__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define YOLO_MSGS__MSG__DETAIL__POSE2_D__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "yolo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "yolo_msgs/msg/detail/pose2_d__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_yolo_msgs__msg__Pose2D(
  const yolo_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_deserialize_yolo_msgs__msg__Pose2D(
  eprosima::fastcdr::Cdr &,
  yolo_msgs__msg__Pose2D * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_yolo_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_yolo_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
bool cdr_serialize_key_yolo_msgs__msg__Pose2D(
  const yolo_msgs__msg__Pose2D * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t get_serialized_size_key_yolo_msgs__msg__Pose2D(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
size_t max_serialized_size_key_yolo_msgs__msg__Pose2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_yolo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, yolo_msgs, msg, Pose2D)();

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__POSE2_D__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
