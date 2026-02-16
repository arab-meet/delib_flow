// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/vector2.h"


#ifndef YOLO_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Vector2 in the package yolo_msgs.
/**
  * 2D size in pixel
 */
typedef struct yolo_msgs__msg__Vector2
{
  double x;
  double y;
} yolo_msgs__msg__Vector2;

// Struct for a sequence of yolo_msgs__msg__Vector2.
typedef struct yolo_msgs__msg__Vector2__Sequence
{
  yolo_msgs__msg__Vector2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__Vector2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__VECTOR2__STRUCT_H_
