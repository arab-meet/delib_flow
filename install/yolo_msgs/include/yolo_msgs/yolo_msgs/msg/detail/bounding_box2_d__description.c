// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/msg/detail/bounding_box2_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__msg__BoundingBox2D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7f, 0x1d, 0xea, 0x86, 0x35, 0x10, 0xb8, 0x27,
      0x21, 0x3c, 0xc4, 0x07, 0x56, 0x5a, 0x68, 0x6a,
      0xb8, 0xbd, 0x16, 0x70, 0x9b, 0x7c, 0xe8, 0x5c,
      0x1a, 0x3e, 0x49, 0xd4, 0xdf, 0x0d, 0x4e, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "yolo_msgs/msg/detail/point2_d__functions.h"
#include "yolo_msgs/msg/detail/vector2__functions.h"
#include "yolo_msgs/msg/detail/pose2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t yolo_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0x62, 0x4b, 0xc0, 0xed, 0xc3, 0x21, 0x3f, 0x5e,
    0x4b, 0x5f, 0xf7, 0x65, 0x29, 0x6c, 0x38, 0x44,
    0x06, 0x1c, 0x67, 0x5d, 0x4d, 0x61, 0x22, 0xbc,
    0xe8, 0x55, 0xcb, 0x7b, 0xe3, 0xba, 0x3d, 0x9c,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xa4, 0x3c, 0xf2, 0xc8, 0x22, 0x38, 0x59, 0x91,
    0x0b, 0x22, 0xdf, 0x97, 0x62, 0x4b, 0xc9, 0xcc,
    0xc8, 0x61, 0xb3, 0x50, 0x62, 0xa4, 0xe5, 0x31,
    0x3c, 0x03, 0xba, 0xa4, 0x93, 0x9a, 0xe4, 0xe8,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__Vector2__EXPECTED_HASH = {1, {
    0xcd, 0xbd, 0x29, 0x99, 0x50, 0xb0, 0x71, 0x69,
    0x05, 0xad, 0x2c, 0x13, 0x35, 0xfe, 0x1e, 0x36,
    0x27, 0x16, 0x3c, 0xcc, 0x25, 0x09, 0x1a, 0x15,
    0xad, 0x2a, 0x9e, 0x86, 0x2c, 0xb0, 0xe8, 0x63,
  }};
#endif

static char yolo_msgs__msg__BoundingBox2D__TYPE_NAME[] = "yolo_msgs/msg/BoundingBox2D";
static char yolo_msgs__msg__Point2D__TYPE_NAME[] = "yolo_msgs/msg/Point2D";
static char yolo_msgs__msg__Pose2D__TYPE_NAME[] = "yolo_msgs/msg/Pose2D";
static char yolo_msgs__msg__Vector2__TYPE_NAME[] = "yolo_msgs/msg/Vector2";

// Define type names, field names, and default values
static char yolo_msgs__msg__BoundingBox2D__FIELD_NAME__center[] = "center";
static char yolo_msgs__msg__BoundingBox2D__FIELD_NAME__size[] = "size";

static rosidl_runtime_c__type_description__Field yolo_msgs__msg__BoundingBox2D__FIELDS[] = {
  {
    {yolo_msgs__msg__BoundingBox2D__FIELD_NAME__center, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {yolo_msgs__msg__Pose2D__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__BoundingBox2D__FIELD_NAME__size, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {yolo_msgs__msg__Vector2__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription yolo_msgs__msg__BoundingBox2D__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Pose2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Vector2__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__msg__BoundingBox2D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__msg__BoundingBox2D__TYPE_NAME, 27, 27},
      {yolo_msgs__msg__BoundingBox2D__FIELDS, 2, 2},
    },
    {yolo_msgs__msg__BoundingBox2D__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&yolo_msgs__msg__Point2D__EXPECTED_HASH, yolo_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = yolo_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__Pose2D__EXPECTED_HASH, yolo_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = yolo_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__Vector2__EXPECTED_HASH, yolo_msgs__msg__Vector2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = yolo_msgs__msg__Vector2__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# 2D position and orientation of the bounding box center\n"
  "yolo_msgs/Pose2D center\n"
  "\n"
  "# total size of the bounding box, in pixels, surrounding the object's center\n"
  "yolo_msgs/Vector2 size";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__msg__BoundingBox2D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__msg__BoundingBox2D__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 181, 181},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__msg__BoundingBox2D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__msg__BoundingBox2D__get_individual_type_description_source(NULL),
    sources[1] = *yolo_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[2] = *yolo_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[3] = *yolo_msgs__msg__Vector2__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
