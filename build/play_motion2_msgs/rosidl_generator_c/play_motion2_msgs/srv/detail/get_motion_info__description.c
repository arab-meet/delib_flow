// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from play_motion2_msgs:srv/GetMotionInfo.idl
// generated code does not contain a copyright notice

#include "play_motion2_msgs/srv/detail/get_motion_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__GetMotionInfo__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x9a, 0x4e, 0x13, 0x31, 0x3d, 0xfa, 0x86,
      0x39, 0xbf, 0x9b, 0x97, 0x4c, 0x8e, 0x17, 0x93,
      0x3d, 0x33, 0xa0, 0x7b, 0x91, 0xbf, 0x9c, 0xb2,
      0x2a, 0xde, 0x78, 0x1e, 0x25, 0x71, 0x12, 0x2f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__GetMotionInfo_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0xaf, 0xc5, 0x94, 0x9d, 0x98, 0xc1, 0x08,
      0x35, 0x21, 0xc8, 0x06, 0xad, 0xed, 0x1f, 0xac,
      0xea, 0x2b, 0x3a, 0xdc, 0x0b, 0x90, 0xc2, 0xfe,
      0x1f, 0xbb, 0xe2, 0x04, 0xe4, 0x71, 0x59, 0xa0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__GetMotionInfo_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x12, 0x5f, 0xb2, 0xb7, 0x35, 0x3a, 0xae,
      0x2e, 0x47, 0x20, 0x91, 0x6e, 0x12, 0x92, 0x80,
      0x1b, 0x0c, 0xba, 0x81, 0x28, 0x93, 0x41, 0x84,
      0xce, 0xfa, 0x29, 0x5b, 0xa2, 0x24, 0x2b, 0x06,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__GetMotionInfo_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0xed, 0xe0, 0x91, 0x12, 0x34, 0x5e, 0x42,
      0x64, 0x38, 0x9c, 0xf9, 0x83, 0x70, 0x4a, 0xf6,
      0x5b, 0x6a, 0x39, 0xac, 0x31, 0x66, 0x4a, 0x00,
      0x82, 0xeb, 0x6c, 0x5c, 0x6f, 0x90, 0x2b, 0xd8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "play_motion2_msgs/msg/detail/motion__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t play_motion2_msgs__msg__Motion__EXPECTED_HASH = {1, {
    0x90, 0xdb, 0xac, 0x33, 0x04, 0x1a, 0x0d, 0xc0,
    0xbf, 0xb6, 0x0e, 0x61, 0x0f, 0xa1, 0x5b, 0x29,
    0x7e, 0xd1, 0xbc, 0x31, 0x6d, 0x17, 0xa0, 0xb9,
    0xe7, 0x21, 0x00, 0x7a, 0x3d, 0x27, 0x70, 0xac,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char play_motion2_msgs__srv__GetMotionInfo__TYPE_NAME[] = "play_motion2_msgs/srv/GetMotionInfo";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char play_motion2_msgs__msg__Motion__TYPE_NAME[] = "play_motion2_msgs/msg/Motion";
static char play_motion2_msgs__srv__GetMotionInfo_Event__TYPE_NAME[] = "play_motion2_msgs/srv/GetMotionInfo_Event";
static char play_motion2_msgs__srv__GetMotionInfo_Request__TYPE_NAME[] = "play_motion2_msgs/srv/GetMotionInfo_Request";
static char play_motion2_msgs__srv__GetMotionInfo_Response__TYPE_NAME[] = "play_motion2_msgs/srv/GetMotionInfo_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char play_motion2_msgs__srv__GetMotionInfo__FIELD_NAME__request_message[] = "request_message";
static char play_motion2_msgs__srv__GetMotionInfo__FIELD_NAME__response_message[] = "response_message";
static char play_motion2_msgs__srv__GetMotionInfo__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__GetMotionInfo__FIELDS[] = {
  {
    {play_motion2_msgs__srv__GetMotionInfo__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__GetMotionInfo_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__GetMotionInfo_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__GetMotionInfo_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__GetMotionInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__GetMotionInfo__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__GetMotionInfo__TYPE_NAME, 35, 35},
      {play_motion2_msgs__srv__GetMotionInfo__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__GetMotionInfo__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&play_motion2_msgs__msg__Motion__EXPECTED_HASH, play_motion2_msgs__msg__Motion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__msg__Motion__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__GetMotionInfo_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = play_motion2_msgs__srv__GetMotionInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = play_motion2_msgs__srv__GetMotionInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__GetMotionInfo_Request__FIELD_NAME__motion_key[] = "motion_key";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__GetMotionInfo_Request__FIELDS[] = {
  {
    {play_motion2_msgs__srv__GetMotionInfo_Request__FIELD_NAME__motion_key, 10, 10},
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
play_motion2_msgs__srv__GetMotionInfo_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__GetMotionInfo_Request__TYPE_NAME, 43, 43},
      {play_motion2_msgs__srv__GetMotionInfo_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__GetMotionInfo_Response__FIELD_NAME__motion[] = "motion";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__GetMotionInfo_Response__FIELDS[] = {
  {
    {play_motion2_msgs__srv__GetMotionInfo_Response__FIELD_NAME__motion, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__GetMotionInfo_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__GetMotionInfo_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__GetMotionInfo_Response__TYPE_NAME, 44, 44},
      {play_motion2_msgs__srv__GetMotionInfo_Response__FIELDS, 1, 1},
    },
    {play_motion2_msgs__srv__GetMotionInfo_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&play_motion2_msgs__msg__Motion__EXPECTED_HASH, play_motion2_msgs__msg__Motion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = play_motion2_msgs__msg__Motion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__GetMotionInfo_Event__FIELD_NAME__info[] = "info";
static char play_motion2_msgs__srv__GetMotionInfo_Event__FIELD_NAME__request[] = "request";
static char play_motion2_msgs__srv__GetMotionInfo_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__GetMotionInfo_Event__FIELDS[] = {
  {
    {play_motion2_msgs__srv__GetMotionInfo_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__GetMotionInfo_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__GetMotionInfo_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__GetMotionInfo_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__GetMotionInfo_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__GetMotionInfo_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__GetMotionInfo_Event__TYPE_NAME, 41, 41},
      {play_motion2_msgs__srv__GetMotionInfo_Event__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__GetMotionInfo_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&play_motion2_msgs__msg__Motion__EXPECTED_HASH, play_motion2_msgs__msg__Motion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__msg__Motion__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__GetMotionInfo_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = play_motion2_msgs__srv__GetMotionInfo_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Get the information of a motion\n"
  "\n"
  "string motion_key\n"
  "\n"
  "---\n"
  "\n"
  "play_motion2_msgs/Motion motion";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__GetMotionInfo__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__GetMotionInfo__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 91, 91},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__GetMotionInfo_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__GetMotionInfo_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__GetMotionInfo_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__GetMotionInfo_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__GetMotionInfo_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__GetMotionInfo_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__GetMotionInfo__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__GetMotionInfo__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__msg__Motion__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__GetMotionInfo_Event__get_individual_type_description_source(NULL);
    sources[4] = *play_motion2_msgs__srv__GetMotionInfo_Request__get_individual_type_description_source(NULL);
    sources[5] = *play_motion2_msgs__srv__GetMotionInfo_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__GetMotionInfo_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__GetMotionInfo_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__GetMotionInfo_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__GetMotionInfo_Response__get_individual_type_description_source(NULL),
    sources[1] = *play_motion2_msgs__msg__Motion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__GetMotionInfo_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__GetMotionInfo_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__msg__Motion__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__GetMotionInfo_Request__get_individual_type_description_source(NULL);
    sources[4] = *play_motion2_msgs__srv__GetMotionInfo_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
