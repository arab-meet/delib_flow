// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from btcpp_ros2_interfaces:msg/NodeStatus.idl
// generated code does not contain a copyright notice

#include "btcpp_ros2_interfaces/msg/detail/node_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
const rosidl_type_hash_t *
btcpp_ros2_interfaces__msg__NodeStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x75, 0x32, 0x58, 0x0f, 0xcb, 0xed, 0x91,
      0x7d, 0x24, 0x50, 0x5c, 0x58, 0x09, 0x99, 0x05,
      0x0a, 0x56, 0xc2, 0x0f, 0xce, 0xc7, 0xf7, 0x7c,
      0x22, 0x81, 0x71, 0x86, 0x44, 0x18, 0xc2, 0x61,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char btcpp_ros2_interfaces__msg__NodeStatus__TYPE_NAME[] = "btcpp_ros2_interfaces/msg/NodeStatus";

// Define type names, field names, and default values
static char btcpp_ros2_interfaces__msg__NodeStatus__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field btcpp_ros2_interfaces__msg__NodeStatus__FIELDS[] = {
  {
    {btcpp_ros2_interfaces__msg__NodeStatus__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
btcpp_ros2_interfaces__msg__NodeStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {btcpp_ros2_interfaces__msg__NodeStatus__TYPE_NAME, 36, 36},
      {btcpp_ros2_interfaces__msg__NodeStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# NodeStatus Enums\n"
  "uint8 IDLE = 0\n"
  "uint8 RUNNING = 1\n"
  "uint8 SUCCESS = 2\n"
  "uint8 FAILURE = 3\n"
  "uint8 SKIPPED = 4\n"
  "\n"
  "uint8 status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
btcpp_ros2_interfaces__msg__NodeStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {btcpp_ros2_interfaces__msg__NodeStatus__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 120, 120},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
btcpp_ros2_interfaces__msg__NodeStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *btcpp_ros2_interfaces__msg__NodeStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
