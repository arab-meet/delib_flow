// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/key_point2_d_array.h"


#ifndef YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "yolo_msgs/msg/detail/key_point2_d__struct.h"

/// Struct defined in msg/KeyPoint2DArray in the package yolo_msgs.
/**
  * represents all the keypoints for human pose estimation
 */
typedef struct yolo_msgs__msg__KeyPoint2DArray
{
  yolo_msgs__msg__KeyPoint2D__Sequence data;
} yolo_msgs__msg__KeyPoint2DArray;

// Struct for a sequence of yolo_msgs__msg__KeyPoint2DArray.
typedef struct yolo_msgs__msg__KeyPoint2DArray__Sequence
{
  yolo_msgs__msg__KeyPoint2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__KeyPoint2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
