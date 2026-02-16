// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from play_motion2_msgs:srv/RemoveMotion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "play_motion2_msgs/srv/detail/remove_motion__rosidl_typesupport_introspection_c.h"
#include "play_motion2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "play_motion2_msgs/srv/detail/remove_motion__functions.h"
#include "play_motion2_msgs/srv/detail/remove_motion__struct.h"


// Include directives for member types
// Member `motion_key`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  play_motion2_msgs__srv__RemoveMotion_Request__init(message_memory);
}

void play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_fini_function(void * message_memory)
{
  play_motion2_msgs__srv__RemoveMotion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_member_array[1] = {
  {
    "motion_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__srv__RemoveMotion_Request, motion_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_members = {
  "play_motion2_msgs__srv",  // message namespace
  "RemoveMotion_Request",  // message name
  1,  // number of fields
  sizeof(play_motion2_msgs__srv__RemoveMotion_Request),
  false,  // has_any_key_member_
  play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_member_array,  // message members
  play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_type_support_handle = {
  0,
  &play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__RemoveMotion_Request__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion_Request__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_play_motion2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Request)() {
  if (!play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_type_support_handle.typesupport_identifier) {
    play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  play_motion2_msgs__srv__RemoveMotion_Response__init(message_memory);
}

void play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_fini_function(void * message_memory)
{
  play_motion2_msgs__srv__RemoveMotion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__srv__RemoveMotion_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_members = {
  "play_motion2_msgs__srv",  // message namespace
  "RemoveMotion_Response",  // message name
  1,  // number of fields
  sizeof(play_motion2_msgs__srv__RemoveMotion_Response),
  false,  // has_any_key_member_
  play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_member_array,  // message members
  play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_type_support_handle = {
  0,
  &play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__RemoveMotion_Response__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion_Response__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_play_motion2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Response)() {
  if (!play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_type_support_handle.typesupport_identifier) {
    play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "play_motion2_msgs/srv/remove_motion.h"
// Member `request`
// Member `response`
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  play_motion2_msgs__srv__RemoveMotion_Event__init(message_memory);
}

void play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_fini_function(void * message_memory)
{
  play_motion2_msgs__srv__RemoveMotion_Event__fini(message_memory);
}

size_t play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__size_function__RemoveMotion_Event__request(
  const void * untyped_member)
{
  const play_motion2_msgs__srv__RemoveMotion_Request__Sequence * member =
    (const play_motion2_msgs__srv__RemoveMotion_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_const_function__RemoveMotion_Event__request(
  const void * untyped_member, size_t index)
{
  const play_motion2_msgs__srv__RemoveMotion_Request__Sequence * member =
    (const play_motion2_msgs__srv__RemoveMotion_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_function__RemoveMotion_Event__request(
  void * untyped_member, size_t index)
{
  play_motion2_msgs__srv__RemoveMotion_Request__Sequence * member =
    (play_motion2_msgs__srv__RemoveMotion_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__fetch_function__RemoveMotion_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const play_motion2_msgs__srv__RemoveMotion_Request * item =
    ((const play_motion2_msgs__srv__RemoveMotion_Request *)
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_const_function__RemoveMotion_Event__request(untyped_member, index));
  play_motion2_msgs__srv__RemoveMotion_Request * value =
    (play_motion2_msgs__srv__RemoveMotion_Request *)(untyped_value);
  *value = *item;
}

void play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__assign_function__RemoveMotion_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  play_motion2_msgs__srv__RemoveMotion_Request * item =
    ((play_motion2_msgs__srv__RemoveMotion_Request *)
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_function__RemoveMotion_Event__request(untyped_member, index));
  const play_motion2_msgs__srv__RemoveMotion_Request * value =
    (const play_motion2_msgs__srv__RemoveMotion_Request *)(untyped_value);
  *item = *value;
}

bool play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__resize_function__RemoveMotion_Event__request(
  void * untyped_member, size_t size)
{
  play_motion2_msgs__srv__RemoveMotion_Request__Sequence * member =
    (play_motion2_msgs__srv__RemoveMotion_Request__Sequence *)(untyped_member);
  play_motion2_msgs__srv__RemoveMotion_Request__Sequence__fini(member);
  return play_motion2_msgs__srv__RemoveMotion_Request__Sequence__init(member, size);
}

size_t play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__size_function__RemoveMotion_Event__response(
  const void * untyped_member)
{
  const play_motion2_msgs__srv__RemoveMotion_Response__Sequence * member =
    (const play_motion2_msgs__srv__RemoveMotion_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_const_function__RemoveMotion_Event__response(
  const void * untyped_member, size_t index)
{
  const play_motion2_msgs__srv__RemoveMotion_Response__Sequence * member =
    (const play_motion2_msgs__srv__RemoveMotion_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_function__RemoveMotion_Event__response(
  void * untyped_member, size_t index)
{
  play_motion2_msgs__srv__RemoveMotion_Response__Sequence * member =
    (play_motion2_msgs__srv__RemoveMotion_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__fetch_function__RemoveMotion_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const play_motion2_msgs__srv__RemoveMotion_Response * item =
    ((const play_motion2_msgs__srv__RemoveMotion_Response *)
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_const_function__RemoveMotion_Event__response(untyped_member, index));
  play_motion2_msgs__srv__RemoveMotion_Response * value =
    (play_motion2_msgs__srv__RemoveMotion_Response *)(untyped_value);
  *value = *item;
}

void play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__assign_function__RemoveMotion_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  play_motion2_msgs__srv__RemoveMotion_Response * item =
    ((play_motion2_msgs__srv__RemoveMotion_Response *)
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_function__RemoveMotion_Event__response(untyped_member, index));
  const play_motion2_msgs__srv__RemoveMotion_Response * value =
    (const play_motion2_msgs__srv__RemoveMotion_Response *)(untyped_value);
  *item = *value;
}

bool play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__resize_function__RemoveMotion_Event__response(
  void * untyped_member, size_t size)
{
  play_motion2_msgs__srv__RemoveMotion_Response__Sequence * member =
    (play_motion2_msgs__srv__RemoveMotion_Response__Sequence *)(untyped_member);
  play_motion2_msgs__srv__RemoveMotion_Response__Sequence__fini(member);
  return play_motion2_msgs__srv__RemoveMotion_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs__srv__RemoveMotion_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(play_motion2_msgs__srv__RemoveMotion_Event, request),  // bytes offset in struct
    NULL,  // default value
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__size_function__RemoveMotion_Event__request,  // size() function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_const_function__RemoveMotion_Event__request,  // get_const(index) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_function__RemoveMotion_Event__request,  // get(index) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__fetch_function__RemoveMotion_Event__request,  // fetch(index, &value) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__assign_function__RemoveMotion_Event__request,  // assign(index, value) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__resize_function__RemoveMotion_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(play_motion2_msgs__srv__RemoveMotion_Event, response),  // bytes offset in struct
    NULL,  // default value
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__size_function__RemoveMotion_Event__response,  // size() function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_const_function__RemoveMotion_Event__response,  // get_const(index) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__get_function__RemoveMotion_Event__response,  // get(index) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__fetch_function__RemoveMotion_Event__response,  // fetch(index, &value) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__assign_function__RemoveMotion_Event__response,  // assign(index, value) function pointer
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__resize_function__RemoveMotion_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_members = {
  "play_motion2_msgs__srv",  // message namespace
  "RemoveMotion_Event",  // message name
  3,  // number of fields
  sizeof(play_motion2_msgs__srv__RemoveMotion_Event),
  false,  // has_any_key_member_
  play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_member_array,  // message members
  play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_type_support_handle = {
  0,
  &play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__RemoveMotion_Event__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion_Event__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_play_motion2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Event)() {
  play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Request)();
  play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Response)();
  if (!play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_type_support_handle.typesupport_identifier) {
    play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "play_motion2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_service_members = {
  "play_motion2_msgs__srv",  // service namespace
  "RemoveMotion",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_type_support_handle,
  NULL,  // response message
  // play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_type_support_handle
  NULL  // event_message
  // play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_type_support_handle
};


static rosidl_service_type_support_t play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_service_type_support_handle = {
  0,
  &play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_service_members,
  get_service_typesupport_handle_function,
  &play_motion2_msgs__srv__RemoveMotion_Request__rosidl_typesupport_introspection_c__RemoveMotion_Request_message_type_support_handle,
  &play_motion2_msgs__srv__RemoveMotion_Response__rosidl_typesupport_introspection_c__RemoveMotion_Response_message_type_support_handle,
  &play_motion2_msgs__srv__RemoveMotion_Event__rosidl_typesupport_introspection_c__RemoveMotion_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    play_motion2_msgs,
    srv,
    RemoveMotion
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    play_motion2_msgs,
    srv,
    RemoveMotion
  ),
  &play_motion2_msgs__srv__RemoveMotion__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_play_motion2_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion)(void) {
  if (!play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_service_type_support_handle.typesupport_identifier) {
    play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, play_motion2_msgs, srv, RemoveMotion_Event)()->data;
  }

  return &play_motion2_msgs__srv__detail__remove_motion__rosidl_typesupport_introspection_c__RemoveMotion_service_type_support_handle;
}
