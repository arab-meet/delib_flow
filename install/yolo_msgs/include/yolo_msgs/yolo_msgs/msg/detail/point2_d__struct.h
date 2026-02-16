// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/point2_d.h"


#ifndef YOLO_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Point2D in the package yolo_msgs.
/**
  * 2D point in pixel coordinates
 */
typedef struct yolo_msgs__msg__Point2D
{
  double x;
  double y;
} yolo_msgs__msg__Point2D;

// Struct for a sequence of yolo_msgs__msg__Point2D.
typedef struct yolo_msgs__msg__Point2D__Sequence
{
  yolo_msgs__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
