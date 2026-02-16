// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from play_motion2_msgs:srv/IsMotionReady.idl
// generated code does not contain a copyright notice

#include "play_motion2_msgs/srv/detail/is_motion_ready__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__IsMotionReady__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0xaf, 0xa5, 0xf4, 0x7b, 0x21, 0x41, 0x39,
      0x37, 0xda, 0xc5, 0xf7, 0xf8, 0x74, 0x93, 0x6e,
      0xfa, 0x24, 0x96, 0xf4, 0xf9, 0x35, 0xa6, 0x9e,
      0xb9, 0x5d, 0x24, 0xc0, 0x6f, 0xc0, 0x12, 0x60,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__IsMotionReady_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x4f, 0xf9, 0x7f, 0x6d, 0x8e, 0x64, 0xb8,
      0x85, 0xe1, 0x96, 0x96, 0xa5, 0x5e, 0x9a, 0x9b,
      0xd3, 0x7f, 0xc2, 0x09, 0xcd, 0x5d, 0xfd, 0x0c,
      0x81, 0x71, 0x07, 0x38, 0x5b, 0x1c, 0x9a, 0x25,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__IsMotionReady_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0x79, 0x61, 0x1c, 0xb0, 0xbc, 0xd8, 0x01,
      0x6e, 0x36, 0xf0, 0x6c, 0xc4, 0x9a, 0x60, 0x02,
      0x44, 0x46, 0x10, 0xee, 0x59, 0x81, 0xac, 0xc3,
      0x88, 0x6f, 0x46, 0xb3, 0x3d, 0x69, 0xfd, 0x53,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__IsMotionReady_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x50, 0x40, 0x31, 0xc5, 0xa8, 0x17, 0x41, 0xf0,
      0x80, 0x55, 0xbf, 0x21, 0xf2, 0xe5, 0xfa, 0x02,
      0xc0, 0x44, 0xee, 0xd4, 0x5b, 0xfc, 0x8c, 0x28,
      0x97, 0x3b, 0x12, 0x39, 0xe2, 0xb4, 0xd6, 0xeb,
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

static char play_motion2_msgs__srv__IsMotionReady__TYPE_NAME[] = "play_motion2_msgs/srv/IsMotionReady";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char play_motion2_msgs__srv__IsMotionReady_Event__TYPE_NAME[] = "play_motion2_msgs/srv/IsMotionReady_Event";
static char play_motion2_msgs__srv__IsMotionReady_Request__TYPE_NAME[] = "play_motion2_msgs/srv/IsMotionReady_Request";
static char play_motion2_msgs__srv__IsMotionReady_Response__TYPE_NAME[] = "play_motion2_msgs/srv/IsMotionReady_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char play_motion2_msgs__srv__IsMotionReady__FIELD_NAME__request_message[] = "request_message";
static char play_motion2_msgs__srv__IsMotionReady__FIELD_NAME__response_message[] = "response_message";
static char play_motion2_msgs__srv__IsMotionReady__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__IsMotionReady__FIELDS[] = {
  {
    {play_motion2_msgs__srv__IsMotionReady__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__IsMotionReady_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__IsMotionReady_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__IsMotionReady_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__IsMotionReady__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__IsMotionReady__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__IsMotionReady__TYPE_NAME, 35, 35},
      {play_motion2_msgs__srv__IsMotionReady__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__IsMotionReady__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__srv__IsMotionReady_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__IsMotionReady_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = play_motion2_msgs__srv__IsMotionReady_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__IsMotionReady_Request__FIELD_NAME__motion_key[] = "motion_key";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__IsMotionReady_Request__FIELDS[] = {
  {
    {play_motion2_msgs__srv__IsMotionReady_Request__FIELD_NAME__motion_key, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__IsMotionReady_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__IsMotionReady_Request__TYPE_NAME, 43, 43},
      {play_motion2_msgs__srv__IsMotionReady_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__IsMotionReady_Response__FIELD_NAME__is_ready[] = "is_ready";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__IsMotionReady_Response__FIELDS[] = {
  {
    {play_motion2_msgs__srv__IsMotionReady_Response__FIELD_NAME__is_ready, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__IsMotionReady_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__IsMotionReady_Response__TYPE_NAME, 44, 44},
      {play_motion2_msgs__srv__IsMotionReady_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__IsMotionReady_Event__FIELD_NAME__info[] = "info";
static char play_motion2_msgs__srv__IsMotionReady_Event__FIELD_NAME__request[] = "request";
static char play_motion2_msgs__srv__IsMotionReady_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__IsMotionReady_Event__FIELDS[] = {
  {
    {play_motion2_msgs__srv__IsMotionReady_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__IsMotionReady_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__IsMotionReady_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__IsMotionReady_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__IsMotionReady_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__IsMotionReady_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__IsMotionReady_Event__TYPE_NAME, 41, 41},
      {play_motion2_msgs__srv__IsMotionReady_Event__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__IsMotionReady_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__srv__IsMotionReady_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__IsMotionReady_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Shows whether the motion be can executed\n"
  "\n"
  "string motion_key\n"
  "\n"
  "---\n"
  "\n"
  "bool is_ready";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__IsMotionReady__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__IsMotionReady__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__IsMotionReady_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__IsMotionReady_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__IsMotionReady_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__IsMotionReady_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__IsMotionReady_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__IsMotionReady_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__IsMotionReady__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__IsMotionReady__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__srv__IsMotionReady_Event__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__IsMotionReady_Request__get_individual_type_description_source(NULL);
    sources[4] = *play_motion2_msgs__srv__IsMotionReady_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__IsMotionReady_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__IsMotionReady_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__IsMotionReady_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__IsMotionReady_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__IsMotionReady_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__IsMotionReady_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__srv__IsMotionReady_Request__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__IsMotionReady_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
