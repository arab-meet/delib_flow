// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/msg/detail/vector2__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__msg__Vector2__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcd, 0xbd, 0x29, 0x99, 0x50, 0xb0, 0x71, 0x69,
      0x05, 0xad, 0x2c, 0x13, 0x35, 0xfe, 0x1e, 0x36,
      0x27, 0x16, 0x3c, 0xcc, 0x25, 0x09, 0x1a, 0x15,
      0xad, 0x2a, 0x9e, 0x86, 0x2c, 0xb0, 0xe8, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char yolo_msgs__msg__Vector2__TYPE_NAME[] = "yolo_msgs/msg/Vector2";

// Define type names, field names, and default values
static char yolo_msgs__msg__Vector2__FIELD_NAME__x[] = "x";
static char yolo_msgs__msg__Vector2__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field yolo_msgs__msg__Vector2__FIELDS[] = {
  {
    {yolo_msgs__msg__Vector2__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Vector2__FIELD_NAME__y, 1, 1},
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
yolo_msgs__msg__Vector2__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__msg__Vector2__TYPE_NAME, 21, 21},
      {yolo_msgs__msg__Vector2__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# 2D size in pixel\n"
  "\n"
  "float64 x\n"
  "float64 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__msg__Vector2__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__msg__Vector2__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__msg__Vector2__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__msg__Vector2__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
