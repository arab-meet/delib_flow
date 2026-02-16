// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/msg/detail/mask__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__msg__Mask__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc7, 0xd2, 0x1e, 0x5f, 0x0b, 0x23, 0x09, 0xde,
      0xd9, 0x87, 0xb4, 0xd3, 0x3e, 0x9b, 0xcb, 0x52,
      0xa4, 0x6f, 0xfa, 0x2a, 0xd4, 0x3e, 0x88, 0x96,
      0x1e, 0x7f, 0x56, 0x83, 0x94, 0xe8, 0xf5, 0x98,
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

static char yolo_msgs__msg__Mask__TYPE_NAME[] = "yolo_msgs/msg/Mask";
static char yolo_msgs__msg__Point2D__TYPE_NAME[] = "yolo_msgs/msg/Point2D";

// Define type names, field names, and default values
static char yolo_msgs__msg__Mask__FIELD_NAME__height[] = "height";
static char yolo_msgs__msg__Mask__FIELD_NAME__width[] = "width";
static char yolo_msgs__msg__Mask__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field yolo_msgs__msg__Mask__FIELDS[] = {
  {
    {yolo_msgs__msg__Mask__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Mask__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Mask__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription yolo_msgs__msg__Mask__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__msg__Mask__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__msg__Mask__TYPE_NAME, 18, 18},
      {yolo_msgs__msg__Mask__FIELDS, 3, 3},
    },
    {yolo_msgs__msg__Mask__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&yolo_msgs__msg__Point2D__EXPECTED_HASH, yolo_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = yolo_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# segmentation mask for one instance\n"
  "\n"
  "# size of the original image\n"
  "int32 height\n"
  "int32 width\n"
  "\n"
  "# mask data represeted by the points of the border of the mask\n"
  "yolo_msgs/Point2D[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__msg__Mask__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__msg__Mask__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 180, 180},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__msg__Mask__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__msg__Mask__get_individual_type_description_source(NULL),
    sources[1] = *yolo_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
