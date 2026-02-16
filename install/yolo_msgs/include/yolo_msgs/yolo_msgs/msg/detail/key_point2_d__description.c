// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/msg/detail/key_point2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__msg__KeyPoint2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x54, 0xcf, 0xc0, 0xee, 0xe2, 0xc9, 0x9b,
      0x65, 0x98, 0x25, 0x11, 0xd6, 0xbd, 0xb3, 0x86,
      0xc4, 0xe9, 0x3f, 0x61, 0x9c, 0x10, 0xed, 0x81,
      0xf2, 0xb8, 0x5f, 0x5e, 0x1f, 0x31, 0x33, 0x73,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "yolo_msgs/msg/detail/point2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t yolo_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0x62, 0x4b, 0xc0, 0xed, 0xc3, 0x21, 0x3f, 0x5e,
    0x4b, 0x5f, 0xf7, 0x65, 0x29, 0x6c, 0x38, 0x44,
    0x06, 0x1c, 0x67, 0x5d, 0x4d, 0x61, 0x22, 0xbc,
    0xe8, 0x55, 0xcb, 0x7b, 0xe3, 0xba, 0x3d, 0x9c,
  }};
#endif

static char yolo_msgs__msg__KeyPoint2D__TYPE_NAME[] = "yolo_msgs/msg/KeyPoint2D";
static char yolo_msgs__msg__Point2D__TYPE_NAME[] = "yolo_msgs/msg/Point2D";

// Define type names, field names, and default values
static char yolo_msgs__msg__KeyPoint2D__FIELD_NAME__id[] = "id";
static char yolo_msgs__msg__KeyPoint2D__FIELD_NAME__point[] = "point";
static char yolo_msgs__msg__KeyPoint2D__FIELD_NAME__score[] = "score";

static rosidl_runtime_c__type_description__Field yolo_msgs__msg__KeyPoint2D__FIELDS[] = {
  {
    {yolo_msgs__msg__KeyPoint2D__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint2D__FIELD_NAME__point, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint2D__FIELD_NAME__score, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription yolo_msgs__msg__KeyPoint2D__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__msg__KeyPoint2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__msg__KeyPoint2D__TYPE_NAME, 24, 24},
      {yolo_msgs__msg__KeyPoint2D__FIELDS, 3, 3},
    },
    {yolo_msgs__msg__KeyPoint2D__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&yolo_msgs__msg__Point2D__EXPECTED_HASH, yolo_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = yolo_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# one keypoint for human pose estimation\n"
  "\n"
  "# id of the keypoint\n"
  "int32 id\n"
  "\n"
  "# 2D point in pixels\n"
  "yolo_msgs/Point2D point\n"
  "\n"
  "# conf of the keypoint\n"
  "float64 score";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__msg__KeyPoint2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__msg__KeyPoint2D__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 155, 155},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__msg__KeyPoint2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__msg__KeyPoint2D__get_individual_type_description_source(NULL),
    sources[1] = *yolo_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
