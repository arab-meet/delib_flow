// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from play_motion2_msgs:srv/AddMotion.idl
// generated code does not contain a copyright notice

#include "play_motion2_msgs/srv/detail/add_motion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__AddMotion__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0x25, 0x87, 0xbf, 0x7f, 0x46, 0xd3, 0x26,
      0xbf, 0xe6, 0xb8, 0x85, 0x7a, 0x2b, 0x68, 0xd4,
      0xe6, 0xcd, 0x08, 0x63, 0xb6, 0x8c, 0xb7, 0x4b,
      0x3e, 0x7d, 0x1b, 0xf9, 0x5f, 0x8f, 0x2c, 0x36,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__AddMotion_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0xdd, 0x04, 0x12, 0x58, 0xa8, 0x7d, 0xb1,
      0xfc, 0x4d, 0x19, 0x88, 0x5f, 0x26, 0xcf, 0x78,
      0x87, 0xea, 0x36, 0x5b, 0xe1, 0x4c, 0xa7, 0x34,
      0xc1, 0x7e, 0x7d, 0xef, 0x97, 0xf0, 0x93, 0x65,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__AddMotion_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x5d, 0xbc, 0x63, 0xcb, 0xd0, 0xaf, 0x27,
      0x2d, 0xae, 0x64, 0x99, 0x72, 0x23, 0x16, 0xc6,
      0x15, 0x0a, 0xf4, 0xfc, 0x03, 0xb6, 0x20, 0xd1,
      0x57, 0x4c, 0x59, 0x72, 0x20, 0x47, 0x34, 0x30,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_play_motion2_msgs
const rosidl_type_hash_t *
play_motion2_msgs__srv__AddMotion_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x52, 0x20, 0x98, 0x78, 0xd2, 0xbf, 0xa9, 0xc6,
      0xd4, 0x65, 0x11, 0x98, 0xa1, 0x2c, 0x84, 0x77,
      0x4f, 0xdf, 0x66, 0xfb, 0x7b, 0x6a, 0x7a, 0xd4,
      0xe2, 0x3e, 0x5b, 0x6f, 0x1f, 0xb2, 0x15, 0x54,
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

static char play_motion2_msgs__srv__AddMotion__TYPE_NAME[] = "play_motion2_msgs/srv/AddMotion";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char play_motion2_msgs__msg__Motion__TYPE_NAME[] = "play_motion2_msgs/msg/Motion";
static char play_motion2_msgs__srv__AddMotion_Event__TYPE_NAME[] = "play_motion2_msgs/srv/AddMotion_Event";
static char play_motion2_msgs__srv__AddMotion_Request__TYPE_NAME[] = "play_motion2_msgs/srv/AddMotion_Request";
static char play_motion2_msgs__srv__AddMotion_Response__TYPE_NAME[] = "play_motion2_msgs/srv/AddMotion_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char play_motion2_msgs__srv__AddMotion__FIELD_NAME__request_message[] = "request_message";
static char play_motion2_msgs__srv__AddMotion__FIELD_NAME__response_message[] = "response_message";
static char play_motion2_msgs__srv__AddMotion__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__AddMotion__FIELDS[] = {
  {
    {play_motion2_msgs__srv__AddMotion__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__AddMotion_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__AddMotion_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__srv__AddMotion_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__AddMotion__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__AddMotion__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__AddMotion__TYPE_NAME, 31, 31},
      {play_motion2_msgs__srv__AddMotion__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__AddMotion__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&play_motion2_msgs__msg__Motion__EXPECTED_HASH, play_motion2_msgs__msg__Motion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__msg__Motion__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__AddMotion_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = play_motion2_msgs__srv__AddMotion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = play_motion2_msgs__srv__AddMotion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__AddMotion_Request__FIELD_NAME__motion[] = "motion";
static char play_motion2_msgs__srv__AddMotion_Request__FIELD_NAME__overwrite[] = "overwrite";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__AddMotion_Request__FIELDS[] = {
  {
    {play_motion2_msgs__srv__AddMotion_Request__FIELD_NAME__motion, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Request__FIELD_NAME__overwrite, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__AddMotion_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__AddMotion_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__AddMotion_Request__TYPE_NAME, 39, 39},
      {play_motion2_msgs__srv__AddMotion_Request__FIELDS, 2, 2},
    },
    {play_motion2_msgs__srv__AddMotion_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&play_motion2_msgs__msg__Motion__EXPECTED_HASH, play_motion2_msgs__msg__Motion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = play_motion2_msgs__msg__Motion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__AddMotion_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__AddMotion_Response__FIELDS[] = {
  {
    {play_motion2_msgs__srv__AddMotion_Response__FIELD_NAME__success, 7, 7},
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
play_motion2_msgs__srv__AddMotion_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__AddMotion_Response__TYPE_NAME, 40, 40},
      {play_motion2_msgs__srv__AddMotion_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char play_motion2_msgs__srv__AddMotion_Event__FIELD_NAME__info[] = "info";
static char play_motion2_msgs__srv__AddMotion_Event__FIELD_NAME__request[] = "request";
static char play_motion2_msgs__srv__AddMotion_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field play_motion2_msgs__srv__AddMotion_Event__FIELDS[] = {
  {
    {play_motion2_msgs__srv__AddMotion_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__AddMotion_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {play_motion2_msgs__srv__AddMotion_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription play_motion2_msgs__srv__AddMotion_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__msg__Motion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {play_motion2_msgs__srv__AddMotion_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
play_motion2_msgs__srv__AddMotion_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {play_motion2_msgs__srv__AddMotion_Event__TYPE_NAME, 37, 37},
      {play_motion2_msgs__srv__AddMotion_Event__FIELDS, 3, 3},
    },
    {play_motion2_msgs__srv__AddMotion_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&play_motion2_msgs__msg__Motion__EXPECTED_HASH, play_motion2_msgs__msg__Motion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = play_motion2_msgs__msg__Motion__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = play_motion2_msgs__srv__AddMotion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = play_motion2_msgs__srv__AddMotion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Add a motion\n"
  "\n"
  "play_motion2_msgs/Motion motion\n"
  "bool overwrite\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__AddMotion__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__AddMotion__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__AddMotion_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__AddMotion_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__AddMotion_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__AddMotion_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
play_motion2_msgs__srv__AddMotion_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {play_motion2_msgs__srv__AddMotion_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__AddMotion__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__AddMotion__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__msg__Motion__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__AddMotion_Event__get_individual_type_description_source(NULL);
    sources[4] = *play_motion2_msgs__srv__AddMotion_Request__get_individual_type_description_source(NULL);
    sources[5] = *play_motion2_msgs__srv__AddMotion_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__AddMotion_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__AddMotion_Request__get_individual_type_description_source(NULL),
    sources[1] = *play_motion2_msgs__msg__Motion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__AddMotion_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__AddMotion_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
play_motion2_msgs__srv__AddMotion_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *play_motion2_msgs__srv__AddMotion_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *play_motion2_msgs__msg__Motion__get_individual_type_description_source(NULL);
    sources[3] = *play_motion2_msgs__srv__AddMotion_Request__get_individual_type_description_source(NULL);
    sources[4] = *play_motion2_msgs__srv__AddMotion_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
