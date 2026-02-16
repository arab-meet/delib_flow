// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

#include "btcpp_ros2_interfaces/srv/detail/get_trees__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
const rosidl_type_hash_t *
btcpp_ros2_interfaces__srv__GetTrees__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x68, 0x0c, 0x22, 0xe9, 0xfa, 0xaa, 0x7a, 0x63,
      0x53, 0x9f, 0x1a, 0x87, 0xb6, 0xe8, 0x0f, 0x78,
      0xf1, 0x53, 0x32, 0x43, 0x06, 0x4e, 0x9d, 0xfd,
      0xef, 0xb8, 0x94, 0x3a, 0xcb, 0xb2, 0xac, 0x40,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
const rosidl_type_hash_t *
btcpp_ros2_interfaces__srv__GetTrees_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd4, 0x99, 0xe4, 0x39, 0x0c, 0x73, 0x13, 0x98,
      0x10, 0x76, 0x36, 0xda, 0x7b, 0x27, 0xee, 0x6a,
      0xbf, 0xe6, 0x3a, 0x7f, 0x73, 0x75, 0x9f, 0x66,
      0x78, 0x9e, 0x7b, 0x73, 0x51, 0xbb, 0x71, 0x02,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
const rosidl_type_hash_t *
btcpp_ros2_interfaces__srv__GetTrees_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x49, 0xc6, 0x83, 0xa4, 0x51, 0x2f, 0x2b, 0x39,
      0x8a, 0x1a, 0xe5, 0xd6, 0xab, 0x9a, 0x32, 0x04,
      0xc3, 0x16, 0x4a, 0xf9, 0x0e, 0xf8, 0x57, 0x47,
      0x19, 0xc4, 0xdd, 0x12, 0x81, 0x28, 0x7f, 0x00,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_btcpp_ros2_interfaces
const rosidl_type_hash_t *
btcpp_ros2_interfaces__srv__GetTrees_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xdb, 0xe0, 0x3f, 0xca, 0xd4, 0x63, 0x74,
      0x6d, 0xb7, 0xb9, 0xbd, 0x2f, 0xf9, 0x7f, 0x1a,
      0xae, 0xdf, 0xfe, 0xc6, 0x08, 0xab, 0x52, 0x61,
      0x03, 0x3e, 0xca, 0x97, 0x8b, 0x4a, 0x34, 0xa0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char btcpp_ros2_interfaces__srv__GetTrees__TYPE_NAME[] = "btcpp_ros2_interfaces/srv/GetTrees";
static char btcpp_ros2_interfaces__srv__GetTrees_Event__TYPE_NAME[] = "btcpp_ros2_interfaces/srv/GetTrees_Event";
static char btcpp_ros2_interfaces__srv__GetTrees_Request__TYPE_NAME[] = "btcpp_ros2_interfaces/srv/GetTrees_Request";
static char btcpp_ros2_interfaces__srv__GetTrees_Response__TYPE_NAME[] = "btcpp_ros2_interfaces/srv/GetTrees_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char btcpp_ros2_interfaces__srv__GetTrees__FIELD_NAME__request_message[] = "request_message";
static char btcpp_ros2_interfaces__srv__GetTrees__FIELD_NAME__response_message[] = "response_message";
static char btcpp_ros2_interfaces__srv__GetTrees__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field btcpp_ros2_interfaces__srv__GetTrees__FIELDS[] = {
  {
    {btcpp_ros2_interfaces__srv__GetTrees__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {btcpp_ros2_interfaces__srv__GetTrees_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {btcpp_ros2_interfaces__srv__GetTrees__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {btcpp_ros2_interfaces__srv__GetTrees_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {btcpp_ros2_interfaces__srv__GetTrees__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {btcpp_ros2_interfaces__srv__GetTrees_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription btcpp_ros2_interfaces__srv__GetTrees__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
btcpp_ros2_interfaces__srv__GetTrees__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {btcpp_ros2_interfaces__srv__GetTrees__TYPE_NAME, 34, 34},
      {btcpp_ros2_interfaces__srv__GetTrees__FIELDS, 3, 3},
    },
    {btcpp_ros2_interfaces__srv__GetTrees__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = btcpp_ros2_interfaces__srv__GetTrees_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = btcpp_ros2_interfaces__srv__GetTrees_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = btcpp_ros2_interfaces__srv__GetTrees_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char btcpp_ros2_interfaces__srv__GetTrees_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field btcpp_ros2_interfaces__srv__GetTrees_Request__FIELDS[] = {
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
btcpp_ros2_interfaces__srv__GetTrees_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {btcpp_ros2_interfaces__srv__GetTrees_Request__TYPE_NAME, 42, 42},
      {btcpp_ros2_interfaces__srv__GetTrees_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char btcpp_ros2_interfaces__srv__GetTrees_Response__FIELD_NAME__tree_ids[] = "tree_ids";

static rosidl_runtime_c__type_description__Field btcpp_ros2_interfaces__srv__GetTrees_Response__FIELDS[] = {
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Response__FIELD_NAME__tree_ids, 8, 8},
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
btcpp_ros2_interfaces__srv__GetTrees_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {btcpp_ros2_interfaces__srv__GetTrees_Response__TYPE_NAME, 43, 43},
      {btcpp_ros2_interfaces__srv__GetTrees_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char btcpp_ros2_interfaces__srv__GetTrees_Event__FIELD_NAME__info[] = "info";
static char btcpp_ros2_interfaces__srv__GetTrees_Event__FIELD_NAME__request[] = "request";
static char btcpp_ros2_interfaces__srv__GetTrees_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field btcpp_ros2_interfaces__srv__GetTrees_Event__FIELDS[] = {
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {btcpp_ros2_interfaces__srv__GetTrees_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {btcpp_ros2_interfaces__srv__GetTrees_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription btcpp_ros2_interfaces__srv__GetTrees_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {btcpp_ros2_interfaces__srv__GetTrees_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
btcpp_ros2_interfaces__srv__GetTrees_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {btcpp_ros2_interfaces__srv__GetTrees_Event__TYPE_NAME, 40, 40},
      {btcpp_ros2_interfaces__srv__GetTrees_Event__FIELDS, 3, 3},
    },
    {btcpp_ros2_interfaces__srv__GetTrees_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = btcpp_ros2_interfaces__srv__GetTrees_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = btcpp_ros2_interfaces__srv__GetTrees_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#### Request ####\n"
  "# Empty\n"
  "\n"
  "---\n"
  "#### Result ####\n"
  "\n"
  "# Ids of the available trees\n"
  "string[] tree_ids";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
btcpp_ros2_interfaces__srv__GetTrees__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {btcpp_ros2_interfaces__srv__GetTrees__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 96, 96},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
btcpp_ros2_interfaces__srv__GetTrees_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {btcpp_ros2_interfaces__srv__GetTrees_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
btcpp_ros2_interfaces__srv__GetTrees_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {btcpp_ros2_interfaces__srv__GetTrees_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
btcpp_ros2_interfaces__srv__GetTrees_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {btcpp_ros2_interfaces__srv__GetTrees_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
btcpp_ros2_interfaces__srv__GetTrees__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *btcpp_ros2_interfaces__srv__GetTrees__get_individual_type_description_source(NULL),
    sources[1] = *btcpp_ros2_interfaces__srv__GetTrees_Event__get_individual_type_description_source(NULL);
    sources[2] = *btcpp_ros2_interfaces__srv__GetTrees_Request__get_individual_type_description_source(NULL);
    sources[3] = *btcpp_ros2_interfaces__srv__GetTrees_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
btcpp_ros2_interfaces__srv__GetTrees_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *btcpp_ros2_interfaces__srv__GetTrees_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
btcpp_ros2_interfaces__srv__GetTrees_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *btcpp_ros2_interfaces__srv__GetTrees_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
btcpp_ros2_interfaces__srv__GetTrees_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *btcpp_ros2_interfaces__srv__GetTrees_Event__get_individual_type_description_source(NULL),
    sources[1] = *btcpp_ros2_interfaces__srv__GetTrees_Request__get_individual_type_description_source(NULL);
    sources[2] = *btcpp_ros2_interfaces__srv__GetTrees_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
