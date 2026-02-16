// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from play_motion2_msgs:action/PlayMotion2.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "play_motion2_msgs/action/play_motion2.h"


#ifndef PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__STRUCT_H_
#define PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motion_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_Goal
{
  rosidl_runtime_c__String motion_name;
  bool skip_planning;
} play_motion2_msgs__action__PlayMotion2_Goal;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_Goal.
typedef struct play_motion2_msgs__action__PlayMotion2_Goal__Sequence
{
  play_motion2_msgs__action__PlayMotion2_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'error'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_Result
{
  bool success;
  rosidl_runtime_c__String error;
} play_motion2_msgs__action__PlayMotion2_Result;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_Result.
typedef struct play_motion2_msgs__action__PlayMotion2_Result__Sequence
{
  play_motion2_msgs__action__PlayMotion2_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_Feedback
{
  builtin_interfaces__msg__Time current_time;
} play_motion2_msgs__action__PlayMotion2_Feedback;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_Feedback.
typedef struct play_motion2_msgs__action__PlayMotion2_Feedback__Sequence
{
  play_motion2_msgs__action__PlayMotion2_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "play_motion2_msgs/action/detail/play_motion2__struct.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  play_motion2_msgs__action__PlayMotion2_Goal goal;
} play_motion2_msgs__action__PlayMotion2_SendGoal_Request;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_SendGoal_Request.
typedef struct play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence
{
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} play_motion2_msgs__action__PlayMotion2_SendGoal_Response;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_SendGoal_Response.
typedef struct play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence
{
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence request;
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence response;
} play_motion2_msgs__action__PlayMotion2_SendGoal_Event;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_SendGoal_Event.
typedef struct play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence
{
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} play_motion2_msgs__action__PlayMotion2_GetResult_Request;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_GetResult_Request.
typedef struct play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence
{
  play_motion2_msgs__action__PlayMotion2_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_GetResult_Response
{
  int8_t status;
  play_motion2_msgs__action__PlayMotion2_Result result;
} play_motion2_msgs__action__PlayMotion2_GetResult_Response;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_GetResult_Response.
typedef struct play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence
{
  play_motion2_msgs__action__PlayMotion2_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  play_motion2_msgs__action__PlayMotion2_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  play_motion2_msgs__action__PlayMotion2_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence request;
  play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence response;
} play_motion2_msgs__action__PlayMotion2_GetResult_Event;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_GetResult_Event.
typedef struct play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence
{
  play_motion2_msgs__action__PlayMotion2_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__struct.h"

/// Struct defined in action/PlayMotion2 in the package play_motion2_msgs.
typedef struct play_motion2_msgs__action__PlayMotion2_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  play_motion2_msgs__action__PlayMotion2_Feedback feedback;
} play_motion2_msgs__action__PlayMotion2_FeedbackMessage;

// Struct for a sequence of play_motion2_msgs__action__PlayMotion2_FeedbackMessage.
typedef struct play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence
{
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__STRUCT_H_
