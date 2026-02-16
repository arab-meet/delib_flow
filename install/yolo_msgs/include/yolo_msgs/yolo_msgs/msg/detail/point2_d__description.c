// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/msg/detail/point2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__msg__Point2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x62, 0x4b, 0xc0, 0xed, 0xc3, 0x21, 0x3f, 0x5e,
      0x4b, 0x5f, 0xf7, 0x65, 0x29, 0x6c, 0x38, 0x44,
      0x06, 0x1c, 0x67, 0x5d, 0x4d, 0x61, 0x22, 0xbc,
      0xe8, 0x55, 0xcb, 0x7b, 0xe3, 0xba, 0x3d, 0x9c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char yolo_msgs__msg__Point2D__TYPE_NAME[] = "yolo_msgs/msg/Point2D";

// Define type names, field names, and default values
static char yolo_msgs__msg__Point2D__FIELD_NAME__x[] = "x";
static char yolo_msgs__msg__Point2D__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field yolo_msgs__msg__Point2D__FIELDS[] = {
  {
    {yolo_msgs__msg__Point2D__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Point2D__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__msg__Point2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
      {yolo_msgs__msg__Point2D__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# 2D point in pixel coordinates\n"
  "\n"
  "float64 x\n"
  "float64 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__msg__Point2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__msg__Point2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__msg__Point2D__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
