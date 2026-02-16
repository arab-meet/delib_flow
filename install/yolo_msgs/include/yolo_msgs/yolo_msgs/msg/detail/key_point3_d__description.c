// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/msg/detail/key_point3_d__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__msg__KeyPoint3D__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe3, 0x8f, 0xe4, 0x67, 0x54, 0xb9, 0x08, 0x61,
      0xff, 0x48, 0xe0, 0x08, 0x56, 0x5d, 0xe4, 0x18,
      0xab, 0xcf, 0x0b, 0xc6, 0xdf, 0x44, 0xe5, 0xba,
      0x14, 0x74, 0xaa, 0x8c, 0xdb, 0x37, 0xbb, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char yolo_msgs__msg__KeyPoint3D__TYPE_NAME[] = "yolo_msgs/msg/KeyPoint3D";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char yolo_msgs__msg__KeyPoint3D__FIELD_NAME__id[] = "id";
static char yolo_msgs__msg__KeyPoint3D__FIELD_NAME__point[] = "point";
static char yolo_msgs__msg__KeyPoint3D__FIELD_NAME__score[] = "score";

static rosidl_runtime_c__type_description__Field yolo_msgs__msg__KeyPoint3D__FIELDS[] = {
  {
    {yolo_msgs__msg__KeyPoint3D__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint3D__FIELD_NAME__point, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint3D__FIELD_NAME__score, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription yolo_msgs__msg__KeyPoint3D__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__msg__KeyPoint3D__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__msg__KeyPoint3D__TYPE_NAME, 24, 24},
      {yolo_msgs__msg__KeyPoint3D__FIELDS, 3, 3},
    },
    {yolo_msgs__msg__KeyPoint3D__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
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
  "# 3D point in meters\n"
  "geometry_msgs/Point point\n"
  "\n"
  "# conf of the keypoint\n"
  "float64 score";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__msg__KeyPoint3D__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__msg__KeyPoint3D__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 157, 157},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__msg__KeyPoint3D__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__msg__KeyPoint3D__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
