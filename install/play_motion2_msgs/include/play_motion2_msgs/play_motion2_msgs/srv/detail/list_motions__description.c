// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from play_motion2_msgs:srv/ListMotions.idl
// generated code does not contain a copyright notice

#include "play_motion2_msgs/srv/detail/list_motions__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__ListMotions__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1d, 0x7a, 0x4a, 0xe5, 0x31, 0x6b, 0xd8, 0x6a,
      0xf1, 0x64, 0x14, 0xbf, 0xa4, 0x23, 0x80, 0x37,
      0x8b, 0xde, 0x1c, 0x08, 0xf4, 0x42, 0x88, 0x94,
      0xff, 0x8f, 0x19, 0x2f, 0x26, 0x7e, 0xe7, 0xf4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__ListMotions_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0xfb, 0x95, 0xed, 0x7a, 0xa1, 0x95, 0xb2,
      0x98, 0x5f, 0x64, 0x38, 0xe0, 0x7f, 0xb7, 0xa4,
      0xf8, 0xcd, 0x7f, 0x67, 0x62, 0x12, 0x01, 0xe2,
      0x1a, 0xd2, 0x37, 0x88, 0x23, 0x2c, 0xd4, 0xc4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__ListMotions_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x54, 0x20, 0x6c, 0xc1, 0x77, 0x10, 0x90,
      0x3f, 0xb4, 0x7d, 0x64, 0xac, 0x92, 0x98, 0xa5,
      0x85, 0xe2, 0x7a, 0x7d, 0x68, 0xaf, 0x9f, 0x69,
      0xab, 0x4c, 0x99, 0x52, 0xf3, 0xe0, 0x0b, 0x5d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__ListMotions_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0x83, 0xea, 0xe6, 0x1e, 0x35, 0x28, 0xd7,
      0xcb, 0xef, 0x37, 0x4e, 0xf8, 0x5e, 0x03, 0x13,
      0x9a, 0xd0, 0x33, 0x94, 0x54, 0x66, 0x81, 0xdb,
      0x55, 0xbd, 0xc3, 0x53, 0x75, 0x12, 0xa8, 0xee,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char play_motion2_msgs__srv__ListMotions__TYPE_NAME[] = "play_motion2_msgs/srv/ListMotions";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char play_motion2_msgs__srv__ListMotions_Event__TYPE_NAME[] = "play_motion2_msgs/srv/ListMotions_Event";
static char play_motion2_msgs__srv__ListMotions_Request__TYPE_NAME[] = "play_motion2_msgs/srv/ListMotions_Request";
static char play_motion2_msgs__srv__ListMotions_Response__TYPE_NAME[] = "play_motion2_msgs/srv/ListMotions_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char play_motion2_msgs__srv__ListMotions__FIELD_NAME__request_message[] = "request_message";
static char play_motion2_msgs__srv__ListMotions__FIELD_NAME__response_message[] = "response_message";
static char play_motion2_msgs__srv__ListMotions__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__ListMotions__FIELDS[] = {
  {
    {play_motion2_msgs__srv__ListMotions__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__ListMotions_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__ListMotions_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__ListMotions_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__ListMotions__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__ListMotions__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__ListMotions__TYPE_NAME, 33, 33},
      {play_motion2_msgs__srv__ListMotions__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__ListMotions__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__srv__ListMotions_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__ListMotions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = play_motion2_msgs__srv__ListMotions_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__ListMotions_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__ListMotions_Request__FIELDS[] = {
  {
    {play_motion2_msgs__srv__ListMotions_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
play_motion2_msgs__srv__ListMotions_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__ListMotions_Request__TYPE_NAME, 41, 41},
      {play_motion2_msgs__srv__ListMotions_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__ListMotions_Response__FIELD_NAME__motion_keys[] = "motion_keys";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__ListMotions_Response__FIELDS[] = {
  {
    {play_motion2_msgs__srv__ListMotions_Response__FIELD_NAME__motion_keys, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__ListMotions_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__ListMotions_Response__TYPE_NAME, 42, 42},
      {play_motion2_msgs__srv__ListMotions_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__ListMotions_Event__FIELD_NAME__info[] = "info";
static char play_motion2_msgs__srv__ListMotions_Event__FIELD_NAME__request[] = "request";
static char play_motion2_msgs__srv__ListMotions_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__ListMotions_Event__FIELDS[] = {
  {
    {play_motion2_msgs__srv__ListMotions_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__ListMotions_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__ListMotions_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__ListMotions_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__ListMotions_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__ListMotions_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__ListMotions_Event__TYPE_NAME, 39, 39},
      {play_motion2_msgs__srv__ListMotions_Event__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__ListMotions_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__srv__ListMotions_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__ListMotions_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Show the list of motions availables\n"
  "\n"
  "---\n"
  "\n"
  "string[] motion_keys";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__ListMotions__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__ListMotions__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 65, 65},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__ListMotions_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__ListMotions_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__ListMotions_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__ListMotions_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__ListMotions_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__ListMotions_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__ListMotions__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__ListMotions__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__srv__ListMotions_Event__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__ListMotions_Request__get_individual_type_description_source(NULL);
    sources[4] = *play_motion2_msgs__srv__ListMotions_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__ListMotions_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__ListMotions_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__ListMotions_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__ListMotions_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__ListMotions_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__ListMotions_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__srv__ListMotions_Request__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__ListMotions_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
