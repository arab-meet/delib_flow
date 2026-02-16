// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/pose2_d.h"


#ifndef YOLO_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "yolo_msgs/msg/detail/point2_d__struct.h"

/// Struct defined in msg/Pose2D in the package yolo_msgs.
/**
  * 2D position in pixel coordinates
 */
typedef struct yolo_msgs__msg__Pose2D
{
  yolo_msgs__msg__Point2D position;
  double theta;
} yolo_msgs__msg__Pose2D;

// Struct for a sequence of yolo_msgs__msg__Pose2D.
typedef struct yolo_msgs__msg__Pose2D__Sequence
{
  yolo_msgs__msg__Pose2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__Pose2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
