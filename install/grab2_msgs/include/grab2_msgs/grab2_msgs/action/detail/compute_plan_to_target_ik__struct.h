// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grab2_msgs:action/ComputePlanToTargetIK.idl
// generated code does not contain a copyright notice

#ifndef GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_TARGET_IK__STRUCT_H_
#define GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_TARGET_IK__STRUCT_H_

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

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_Goal
{
  geometry_msgs__msg__PoseStamped target_pose;
  /// Optional (Seconds): used while forming trajectory msg
  double interpolation_dt;
} grab2_msgs__action__ComputePlanToTargetIK_Goal;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_Goal.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_Goal__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESSFUL'.
enum
{
  grab2_msgs__action__ComputePlanToTargetIK_Result__SUCCESSFUL = 0l
};

/// Constant 'INVALID_GOAL'.
enum
{
  grab2_msgs__action__ComputePlanToTargetIK_Result__INVALID_GOAL = -1l
};

/// Constant 'INVALID_JOINTS'.
enum
{
  grab2_msgs__action__ComputePlanToTargetIK_Result__INVALID_JOINTS = -2l
};

/// Constant 'OLD_HEADER_TIMESTAMP'.
enum
{
  grab2_msgs__action__ComputePlanToTargetIK_Result__OLD_HEADER_TIMESTAMP = -3l
};

// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.h"
// Member 'error_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_Result
{
  trajectory_msgs__msg__JointTrajectory trajectory;
  int32_t error_code;
  /// Human readable description of the error code. Contains complementary
  /// information that is especially useful when execution fails, for instance:
  /// - INVALID_GOAL: The reason for the invalid goal (e.g., the requested
  ///   trajectory is in the past).
  /// - INVALID_JOINTS: The mismatch between the expected controller joints
  ///   and those provided in the goal.
  rosidl_runtime_c__String error_string;
} grab2_msgs__action__ComputePlanToTargetIK_Result;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_Result.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_Result__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} grab2_msgs__action__ComputePlanToTargetIK_Feedback;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_Feedback.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_Feedback__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "grab2_msgs/action/detail/compute_plan_to_target_ik__struct.h"

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__ComputePlanToTargetIK_Goal goal;
} grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "grab2_msgs/action/detail/compute_plan_to_target_ik__struct.h"

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response
{
  int8_t status;
  grab2_msgs__action__ComputePlanToTargetIK_Result result;
} grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "grab2_msgs/action/detail/compute_plan_to_target_ik__struct.h"

/// Struct defined in action/ComputePlanToTargetIK in the package grab2_msgs.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  grab2_msgs__action__ComputePlanToTargetIK_Feedback feedback;
} grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage;

// Struct for a sequence of grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage.
typedef struct grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage__Sequence
{
  grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grab2_msgs__action__ComputePlanToTargetIK_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRAB2_MSGS__ACTION__DETAIL__COMPUTE_PLAN_TO_TARGET_IK__STRUCT_H_
