// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#include "play_motion2_msgs/msg/detail/motion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__msg__Motion__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x90, 0xdb, 0xac, 0x33, 0x04, 0x1a, 0x0d, 0xc0,
      0xbf, 0xb6, 0x0e, 0x61, 0x0f, 0xa1, 0x5b, 0x29,
      0x7e, 0xd1, 0xbc, 0x31, 0x6d, 0x17, 0xa0, 0xb9,
      0xe7, 0x21, 0x00, 0x7a, 0x3d, 0x27, 0x70, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char play_motion2_msgs__msg__Motion__TYPE_NAME[] = "play_motion2_msgs/msg/Motion";

// Define type names, field names, and default values
static char play_motion2_msgs__msg__Motion__FIELD_NAME__key[] = "key";
static char play_motion2_msgs__msg__Motion__FIELD_NAME__name[] = "name";
static char play_motion2_msgs__msg__Motion__FIELD_NAME__usage[] = "usage";
static char play_motion2_msgs__msg__Motion__FIELD_NAME__description[] = "description";
static char play_motion2_msgs__msg__Motion__FIELD_NAME__joints[] = "joints";
static char play_motion2_msgs__msg__Motion__FIELD_NAME__positions[] = "positions";
static char play_motion2_msgs__msg__Motion__FIELD_NAME__times_from_start[] = "times_from_start";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__msg__Motion__FIELDS[] = {
  {
    {play_motion2_msgs__msg__Motion__FIELD_NAME__key, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__FIELD_NAME__usage, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__FIELD_NAME__joints, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__FIELD_NAME__positions, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__FIELD_NAME__times_from_start, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__msg__Motion__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
      {play_motion2_msgs__msg__Motion__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string key\n"
  "\n"
  "# meta\n"
  "string name\n"
  "string usage\n"
  "string description\n"
  "\n"
  "string[] joints\n"
  "float64[] positions\n"
  "float64[] times_from_start";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__msg__Motion__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 127, 127},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__msg__Motion__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__msg__Motion__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
