// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolo_msgs:msg/DetectionArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "yolo_msgs/msg/detection_array.h"


#ifndef YOLO_MSGS__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_
#define YOLO_MSGS__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'detections'
#include "yolo_msgs/msg/detail/detection__struct.h"

/// Struct defined in msg/DetectionArray in the package yolo_msgs.
/**
  * represents all YOLO detections in one frame
 */
typedef struct yolo_msgs__msg__DetectionArray
{
  std_msgs__msg__Header header;
  yolo_msgs__msg__Detection__Sequence detections;
} yolo_msgs__msg__DetectionArray;

// Struct for a sequence of yolo_msgs__msg__DetectionArray.
typedef struct yolo_msgs__msg__DetectionArray__Sequence
{
  yolo_msgs__msg__DetectionArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolo_msgs__msg__DetectionArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLO_MSGS__MSG__DETAIL__DETECTION_ARRAY__STRUCT_H_
