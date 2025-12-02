// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grab2_msgs:action/ReachObject.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__REACH_OBJECT__STRUCT_H_
#define GRAB2_MSGS__ACTION__DETAIL__REACH_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'target_tree'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
  rosidl_runtime_c__String target_tree;
} grab2_msgs__action__ReachObject_Goal;

// Struct for a sequence of grab2_msgs__action__ReachObject_Goal.
typedef struct grab2_msgs__action__ReachObject_Goal__Sequence
{
  grab2_msgs__action__ReachObject_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'node_status'
#include "btcpp_ros2_interfaces/msg/detail/node_status__struct.h"
// Member 'error_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_Result
{
  btcpp_ros2_interfaces__msg__NodeStatus node_status;
  rosidl_runtime_c__String error_message;
} grab2_msgs__action__ReachObject_Result;

// Struct for a sequence of grab2_msgs__action__ReachObject_Result.
typedef struct grab2_msgs__action__ReachObject_Result__Sequence
{
  grab2_msgs__action__ReachObject_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} grab2_msgs__action__ReachObject_Feedback;

// Struct for a sequence of grab2_msgs__action__ReachObject_Feedback.
typedef struct grab2_msgs__action__ReachObject_Feedback__Sequence
{
  grab2_msgs__action__ReachObject_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "grab2_msgs/action/detail/reach_object__struct.h"

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__ReachObject_Goal goal;
} grab2_msgs__action__ReachObject_SendGoal_Request;

// Struct for a sequence of grab2_msgs__action__ReachObject_SendGoal_Request.
typedef struct grab2_msgs__action__ReachObject_SendGoal_Request__Sequence
{
  grab2_msgs__action__ReachObject_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} grab2_msgs__action__ReachObject_SendGoal_Response;

// Struct for a sequence of grab2_msgs__action__ReachObject_SendGoal_Response.
typedef struct grab2_msgs__action__ReachObject_SendGoal_Response__Sequence
{
  grab2_msgs__action__ReachObject_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} grab2_msgs__action__ReachObject_GetResult_Request;

// Struct for a sequence of grab2_msgs__action__ReachObject_GetResult_Request.
typedef struct grab2_msgs__action__ReachObject_GetResult_Request__Sequence
{
  grab2_msgs__action__ReachObject_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/reach_object__struct.h"

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_GetResult_Response
{
  int8_t status;
  grab2_msgs__action__ReachObject_Result result;
} grab2_msgs__action__ReachObject_GetResult_Response;

// Struct for a sequence of grab2_msgs__action__ReachObject_GetResult_Response.
typedef struct grab2_msgs__action__ReachObject_GetResult_Response__Sequence
{
  grab2_msgs__action__ReachObject_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "grab2_msgs/action/detail/reach_object__struct.h"

/// Struct defined in action/ReachObject in the package grab2_msgs.
typedef struct grab2_msgs__action__ReachObject_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__ReachObject_Feedback feedback;
} grab2_msgs__action__ReachObject_FeedbackMessage;

// Struct for a sequence of grab2_msgs__action__ReachObject_FeedbackMessage.
typedef struct grab2_msgs__action__ReachObject_FeedbackMessage__Sequence
{
  grab2_msgs__action__ReachObject_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ReachObject_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAB2_MSGS__ACTION__DETAIL__REACH_OBJECT__STRUCT_H_
