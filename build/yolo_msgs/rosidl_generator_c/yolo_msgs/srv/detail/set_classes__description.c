// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:srv/SetClasses.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/srv/detail/set_classes__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__srv__SetClasses__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0x73, 0xf3, 0xde, 0xb4, 0x7f, 0x4e, 0xa2,
      0xb5, 0xad, 0xae, 0x13, 0xc3, 0x0e, 0x2f, 0x9d,
      0x57, 0xfb, 0xa0, 0x76, 0xfc, 0xab, 0xd5, 0xf0,
      0xb8, 0xed, 0x12, 0xe5, 0x97, 0xdc, 0xe3, 0x46,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__srv__SetClasses_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf6, 0x2e, 0xc9, 0xe0, 0x9b, 0x13, 0xdb, 0x4e,
      0x29, 0xbb, 0xe7, 0x1a, 0x7d, 0xf9, 0x18, 0xa7,
      0x8b, 0x0b, 0xab, 0xae, 0x3a, 0x07, 0x33, 0x7b,
      0x5b, 0xc4, 0x46, 0x24, 0x64, 0x18, 0x8b, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__srv__SetClasses_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x12, 0x1b, 0xc9, 0x44, 0xc8, 0x24, 0x8c, 0x86,
      0xaf, 0x80, 0x6c, 0xd4, 0x03, 0xf5, 0xa7, 0x33,
      0xb7, 0xcc, 0x42, 0xa0, 0x97, 0xaa, 0xb2, 0xff,
      0xbc, 0xe1, 0x28, 0x22, 0xe9, 0x61, 0x63, 0x78,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__srv__SetClasses_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa5, 0x6f, 0x9d, 0x9b, 0xc6, 0x07, 0x55, 0x64,
      0xec, 0x48, 0x9a, 0xc5, 0xf5, 0x59, 0x72, 0x34,
      0x16, 0x43, 0xf9, 0x1d, 0xda, 0x70, 0x1a, 0x25,
      0x45, 0x5e, 0x4a, 0x1c, 0x1f, 0x47, 0xac, 0x59,
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

static char yolo_msgs__srv__SetClasses__TYPE_NAME[] = "yolo_msgs/srv/SetClasses";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char yolo_msgs__srv__SetClasses_Event__TYPE_NAME[] = "yolo_msgs/srv/SetClasses_Event";
static char yolo_msgs__srv__SetClasses_Request__TYPE_NAME[] = "yolo_msgs/srv/SetClasses_Request";
static char yolo_msgs__srv__SetClasses_Response__TYPE_NAME[] = "yolo_msgs/srv/SetClasses_Response";

// Define type names, field names, and default values
static char yolo_msgs__srv__SetClasses__FIELD_NAME__request_message[] = "request_message";
static char yolo_msgs__srv__SetClasses__FIELD_NAME__response_message[] = "response_message";
static char yolo_msgs__srv__SetClasses__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field yolo_msgs__srv__SetClasses__FIELDS[] = {
  {
    {yolo_msgs__srv__SetClasses__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {yolo_msgs__srv__SetClasses_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {yolo_msgs__srv__SetClasses_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {yolo_msgs__srv__SetClasses_Event__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription yolo_msgs__srv__SetClasses__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses_Event__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__srv__SetClasses__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__srv__SetClasses__TYPE_NAME, 24, 24},
      {yolo_msgs__srv__SetClasses__FIELDS, 3, 3},
    },
    {yolo_msgs__srv__SetClasses__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = yolo_msgs__srv__SetClasses_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = yolo_msgs__srv__SetClasses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = yolo_msgs__srv__SetClasses_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char yolo_msgs__srv__SetClasses_Request__FIELD_NAME__classes[] = "classes";

static rosidl_runtime_c__type_description__Field yolo_msgs__srv__SetClasses_Request__FIELDS[] = {
  {
    {yolo_msgs__srv__SetClasses_Request__FIELD_NAME__classes, 7, 7},
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
yolo_msgs__srv__SetClasses_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__srv__SetClasses_Request__TYPE_NAME, 32, 32},
      {yolo_msgs__srv__SetClasses_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char yolo_msgs__srv__SetClasses_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field yolo_msgs__srv__SetClasses_Response__FIELDS[] = {
  {
    {yolo_msgs__srv__SetClasses_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
yolo_msgs__srv__SetClasses_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__srv__SetClasses_Response__TYPE_NAME, 33, 33},
      {yolo_msgs__srv__SetClasses_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char yolo_msgs__srv__SetClasses_Event__FIELD_NAME__info[] = "info";
static char yolo_msgs__srv__SetClasses_Event__FIELD_NAME__request[] = "request";
static char yolo_msgs__srv__SetClasses_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field yolo_msgs__srv__SetClasses_Event__FIELDS[] = {
  {
    {yolo_msgs__srv__SetClasses_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {yolo_msgs__srv__SetClasses_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {yolo_msgs__srv__SetClasses_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription yolo_msgs__srv__SetClasses_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__srv__SetClasses_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__srv__SetClasses_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__srv__SetClasses_Event__TYPE_NAME, 30, 30},
      {yolo_msgs__srv__SetClasses_Event__FIELDS, 3, 3},
    },
    {yolo_msgs__srv__SetClasses_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = yolo_msgs__srv__SetClasses_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = yolo_msgs__srv__SetClasses_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string[] classes\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__srv__SetClasses__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__srv__SetClasses__TYPE_NAME, 24, 24},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 21, 21},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__srv__SetClasses_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__srv__SetClasses_Request__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__srv__SetClasses_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__srv__SetClasses_Response__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__srv__SetClasses_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__srv__SetClasses_Event__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__srv__SetClasses__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__srv__SetClasses__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *yolo_msgs__srv__SetClasses_Event__get_individual_type_description_source(NULL);
    sources[4] = *yolo_msgs__srv__SetClasses_Request__get_individual_type_description_source(NULL);
    sources[5] = *yolo_msgs__srv__SetClasses_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__srv__SetClasses_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__srv__SetClasses_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__srv__SetClasses_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__srv__SetClasses_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__srv__SetClasses_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__srv__SetClasses_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *yolo_msgs__srv__SetClasses_Request__get_individual_type_description_source(NULL);
    sources[4] = *yolo_msgs__srv__SetClasses_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
