// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from yolo_msgs:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#include "yolo_msgs/msg/detail/detection_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_yolo_msgs
const rosidl_type_hash_t *
yolo_msgs__msg__DetectionArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x92, 0x90, 0xb4, 0xe2, 0x01, 0xb2, 0xb6,
      0xf9, 0xaa, 0x59, 0xf0, 0x12, 0x15, 0xbc, 0x15,
      0xb7, 0x74, 0xe7, 0xb8, 0x22, 0xf7, 0xf6, 0xd9,
      0x31, 0xd6, 0x8e, 0x5b, 0xa6, 0x35, 0x4a, 0x6a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "geometry_msgs/msg/detail/vector3__functions.h"
#include "yolo_msgs/msg/detail/vector2__functions.h"
#include "yolo_msgs/msg/detail/key_point2_d__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "yolo_msgs/msg/detail/key_point3_d_array__functions.h"
#include "yolo_msgs/msg/detail/key_point3_d__functions.h"
#include "yolo_msgs/msg/detail/detection__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "yolo_msgs/msg/detail/point2_d__functions.h"
#include "yolo_msgs/msg/detail/pose2_d__functions.h"
#include "yolo_msgs/msg/detail/mask__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "yolo_msgs/msg/detail/bounding_box2_d__functions.h"
#include "yolo_msgs/msg/detail/bounding_box3_d__functions.h"
#include "yolo_msgs/msg/detail/key_point2_d_array__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__BoundingBox2D__EXPECTED_HASH = {1, {
    0x7f, 0x1d, 0xea, 0x86, 0x35, 0x10, 0xb8, 0x27,
    0x21, 0x3c, 0xc4, 0x07, 0x56, 0x5a, 0x68, 0x6a,
    0xb8, 0xbd, 0x16, 0x70, 0x9b, 0x7c, 0xe8, 0x5c,
    0x1a, 0x3e, 0x49, 0xd4, 0xdf, 0x0d, 0x4e, 0x49,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__BoundingBox3D__EXPECTED_HASH = {1, {
    0xb6, 0x23, 0xc1, 0xb5, 0x7c, 0x57, 0x8e, 0xb7,
    0x9c, 0x6c, 0xdf, 0xfd, 0x87, 0xe8, 0x96, 0xde,
    0xdb, 0xbd, 0xe7, 0xa0, 0xbd, 0x1c, 0x00, 0xb5,
    0x43, 0xae, 0x59, 0x88, 0xd4, 0xab, 0x08, 0x8c,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__Detection__EXPECTED_HASH = {1, {
    0x30, 0x3e, 0x88, 0x1e, 0x77, 0xfb, 0xe9, 0x5c,
    0x37, 0xce, 0xf2, 0xbd, 0xc8, 0xc0, 0x47, 0xee,
    0xe9, 0x05, 0x1f, 0x22, 0xe4, 0xf7, 0x18, 0x9f,
    0x64, 0xbd, 0x02, 0x9b, 0xfa, 0xed, 0xfc, 0xa8,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__KeyPoint2D__EXPECTED_HASH = {1, {
    0x38, 0x54, 0xcf, 0xc0, 0xee, 0xe2, 0xc9, 0x9b,
    0x65, 0x98, 0x25, 0x11, 0xd6, 0xbd, 0xb3, 0x86,
    0xc4, 0xe9, 0x3f, 0x61, 0x9c, 0x10, 0xed, 0x81,
    0xf2, 0xb8, 0x5f, 0x5e, 0x1f, 0x31, 0x33, 0x73,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__KeyPoint2DArray__EXPECTED_HASH = {1, {
    0xd3, 0x12, 0x85, 0x36, 0x2c, 0xda, 0xb7, 0x22,
    0x4e, 0x2a, 0xa9, 0x7f, 0x15, 0x49, 0x2a, 0xea,
    0xec, 0x62, 0x85, 0x5c, 0x18, 0x5a, 0x0c, 0x2d,
    0x7e, 0x09, 0x83, 0x92, 0x6c, 0x2b, 0xf9, 0x07,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__KeyPoint3D__EXPECTED_HASH = {1, {
    0xe3, 0x8f, 0xe4, 0x67, 0x54, 0xb9, 0x08, 0x61,
    0xff, 0x48, 0xe0, 0x08, 0x56, 0x5d, 0xe4, 0x18,
    0xab, 0xcf, 0x0b, 0xc6, 0xdf, 0x44, 0xe5, 0xba,
    0x14, 0x74, 0xaa, 0x8c, 0xdb, 0x37, 0xbb, 0xac,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__KeyPoint3DArray__EXPECTED_HASH = {1, {
    0xd7, 0xbc, 0xc5, 0xd5, 0x6a, 0x1f, 0xba, 0x89,
    0x3e, 0xb1, 0xed, 0x1c, 0xc5, 0x8c, 0x22, 0x41,
    0xb7, 0x4c, 0x13, 0x43, 0x19, 0x6c, 0x49, 0x58,
    0xfd, 0x4a, 0x34, 0xb6, 0x5f, 0xbe, 0xc6, 0x79,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__Mask__EXPECTED_HASH = {1, {
    0xc7, 0xd2, 0x1e, 0x5f, 0x0b, 0x23, 0x09, 0xde,
    0xd9, 0x87, 0xb4, 0xd3, 0x3e, 0x9b, 0xcb, 0x52,
    0xa4, 0x6f, 0xfa, 0x2a, 0xd4, 0x3e, 0x88, 0x96,
    0x1e, 0x7f, 0x56, 0x83, 0x94, 0xe8, 0xf5, 0x98,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__Point2D__EXPECTED_HASH = {1, {
    0x62, 0x4b, 0xc0, 0xed, 0xc3, 0x21, 0x3f, 0x5e,
    0x4b, 0x5f, 0xf7, 0x65, 0x29, 0x6c, 0x38, 0x44,
    0x06, 0x1c, 0x67, 0x5d, 0x4d, 0x61, 0x22, 0xbc,
    0xe8, 0x55, 0xcb, 0x7b, 0xe3, 0xba, 0x3d, 0x9c,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xa4, 0x3c, 0xf2, 0xc8, 0x22, 0x38, 0x59, 0x91,
    0x0b, 0x22, 0xdf, 0x97, 0x62, 0x4b, 0xc9, 0xcc,
    0xc8, 0x61, 0xb3, 0x50, 0x62, 0xa4, 0xe5, 0x31,
    0x3c, 0x03, 0xba, 0xa4, 0x93, 0x9a, 0xe4, 0xe8,
  }};
static const rosidl_type_hash_t yolo_msgs__msg__Vector2__EXPECTED_HASH = {1, {
    0xcd, 0xbd, 0x29, 0x99, 0x50, 0xb0, 0x71, 0x69,
    0x05, 0xad, 0x2c, 0x13, 0x35, 0xfe, 0x1e, 0x36,
    0x27, 0x16, 0x3c, 0xcc, 0x25, 0x09, 0x1a, 0x15,
    0xad, 0x2a, 0x9e, 0x86, 0x2c, 0xb0, 0xe8, 0x63,
  }};
#endif

static char yolo_msgs__msg__DetectionArray__TYPE_NAME[] = "yolo_msgs/msg/DetectionArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char yolo_msgs__msg__BoundingBox2D__TYPE_NAME[] = "yolo_msgs/msg/BoundingBox2D";
static char yolo_msgs__msg__BoundingBox3D__TYPE_NAME[] = "yolo_msgs/msg/BoundingBox3D";
static char yolo_msgs__msg__Detection__TYPE_NAME[] = "yolo_msgs/msg/Detection";
static char yolo_msgs__msg__KeyPoint2D__TYPE_NAME[] = "yolo_msgs/msg/KeyPoint2D";
static char yolo_msgs__msg__KeyPoint2DArray__TYPE_NAME[] = "yolo_msgs/msg/KeyPoint2DArray";
static char yolo_msgs__msg__KeyPoint3D__TYPE_NAME[] = "yolo_msgs/msg/KeyPoint3D";
static char yolo_msgs__msg__KeyPoint3DArray__TYPE_NAME[] = "yolo_msgs/msg/KeyPoint3DArray";
static char yolo_msgs__msg__Mask__TYPE_NAME[] = "yolo_msgs/msg/Mask";
static char yolo_msgs__msg__Point2D__TYPE_NAME[] = "yolo_msgs/msg/Point2D";
static char yolo_msgs__msg__Pose2D__TYPE_NAME[] = "yolo_msgs/msg/Pose2D";
static char yolo_msgs__msg__Vector2__TYPE_NAME[] = "yolo_msgs/msg/Vector2";

// Define type names, field names, and default values
static char yolo_msgs__msg__DetectionArray__FIELD_NAME__header[] = "header";
static char yolo_msgs__msg__DetectionArray__FIELD_NAME__detections[] = "detections";

static rosidl_runtime_c__type_description__Field yolo_msgs__msg__DetectionArray__FIELDS[] = {
  {
    {yolo_msgs__msg__DetectionArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__DetectionArray__FIELD_NAME__detections, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {yolo_msgs__msg__Detection__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription yolo_msgs__msg__DetectionArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__BoundingBox2D__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__BoundingBox3D__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Detection__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint2DArray__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint3D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__KeyPoint3DArray__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Mask__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Point2D__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Pose2D__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {yolo_msgs__msg__Vector2__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
yolo_msgs__msg__DetectionArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {yolo_msgs__msg__DetectionArray__TYPE_NAME, 28, 28},
      {yolo_msgs__msg__DetectionArray__FIELDS, 2, 2},
    },
    {yolo_msgs__msg__DetectionArray__REFERENCED_TYPE_DESCRIPTIONS, 17, 17},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__BoundingBox2D__EXPECTED_HASH, yolo_msgs__msg__BoundingBox2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = yolo_msgs__msg__BoundingBox2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__BoundingBox3D__EXPECTED_HASH, yolo_msgs__msg__BoundingBox3D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = yolo_msgs__msg__BoundingBox3D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__Detection__EXPECTED_HASH, yolo_msgs__msg__Detection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = yolo_msgs__msg__Detection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__KeyPoint2D__EXPECTED_HASH, yolo_msgs__msg__KeyPoint2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = yolo_msgs__msg__KeyPoint2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__KeyPoint2DArray__EXPECTED_HASH, yolo_msgs__msg__KeyPoint2DArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = yolo_msgs__msg__KeyPoint2DArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__KeyPoint3D__EXPECTED_HASH, yolo_msgs__msg__KeyPoint3D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = yolo_msgs__msg__KeyPoint3D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__KeyPoint3DArray__EXPECTED_HASH, yolo_msgs__msg__KeyPoint3DArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = yolo_msgs__msg__KeyPoint3DArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__Mask__EXPECTED_HASH, yolo_msgs__msg__Mask__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = yolo_msgs__msg__Mask__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__Point2D__EXPECTED_HASH, yolo_msgs__msg__Point2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = yolo_msgs__msg__Point2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__Pose2D__EXPECTED_HASH, yolo_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = yolo_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&yolo_msgs__msg__Vector2__EXPECTED_HASH, yolo_msgs__msg__Vector2__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = yolo_msgs__msg__Vector2__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# represents all YOLO detections in one frame\n"
  "\n"
  "std_msgs/Header header\n"
  "yolo_msgs/Detection[] detections";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
yolo_msgs__msg__DetectionArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {yolo_msgs__msg__DetectionArray__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 102, 102},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
yolo_msgs__msg__DetectionArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[18];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 18, 18};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *yolo_msgs__msg__DetectionArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[7] = *yolo_msgs__msg__BoundingBox2D__get_individual_type_description_source(NULL);
    sources[8] = *yolo_msgs__msg__BoundingBox3D__get_individual_type_description_source(NULL);
    sources[9] = *yolo_msgs__msg__Detection__get_individual_type_description_source(NULL);
    sources[10] = *yolo_msgs__msg__KeyPoint2D__get_individual_type_description_source(NULL);
    sources[11] = *yolo_msgs__msg__KeyPoint2DArray__get_individual_type_description_source(NULL);
    sources[12] = *yolo_msgs__msg__KeyPoint3D__get_individual_type_description_source(NULL);
    sources[13] = *yolo_msgs__msg__KeyPoint3DArray__get_individual_type_description_source(NULL);
    sources[14] = *yolo_msgs__msg__Mask__get_individual_type_description_source(NULL);
    sources[15] = *yolo_msgs__msg__Point2D__get_individual_type_description_source(NULL);
    sources[16] = *yolo_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[17] = *yolo_msgs__msg__Vector2__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
