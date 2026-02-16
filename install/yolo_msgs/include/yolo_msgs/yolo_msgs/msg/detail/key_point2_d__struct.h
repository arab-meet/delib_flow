// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/key_point2_d.h"


#ifndef YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "yolo_msgs/msg/detail/point2_d__struct.h"

/// Struct defined in msg/KeyPoint2D in the package yolo_msgs.
/**
  * one keypoint for human pose estimation
 */
typedef struct yolo_msgs__msg__KeyPoint2D
{
  /// id of the keypoint
  int32_t id;
  /// 2D point in pixels
  yolo_msgs__msg__Point2D point;
  /// conf of the keypoint
  double score;
} yolo_msgs__msg__KeyPoint2D;

// Struct for a sequence of yolo_msgs__msg__KeyPoint2D.
typedef struct yolo_msgs__msg__KeyPoint2D__Sequence
{
  yolo_msgs__msg__KeyPoint2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__KeyPoint2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D__STRUCT_H_
