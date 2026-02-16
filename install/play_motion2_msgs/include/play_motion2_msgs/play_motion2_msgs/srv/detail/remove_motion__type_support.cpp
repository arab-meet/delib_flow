// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from play_motion2_msgs:srv/RemoveMotion.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "play_motion2_msgs/srv/detail/remove_motion__functions.h"
#include "play_motion2_msgs/srv/detail/remove_motion__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace play_motion2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RemoveMotion_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) play_motion2_msgs::srv::RemoveMotion_Request(_init);
}

void RemoveMotion_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<play_motion2_msgs::srv::RemoveMotion_Request *>(message_memory);
  typed_message->~RemoveMotion_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RemoveMotion_Request_message_member_array[1] = {
  {
    "motion_key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs::srv::RemoveMotion_Request, motion_key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RemoveMotion_Request_message_members = {
  "play_motion2_msgs::srv",  // message namespace
  "RemoveMotion_Request",  // message name
  1,  // number of fields
  sizeof(play_motion2_msgs::srv::RemoveMotion_Request),
  false,  // has_any_key_member_
  RemoveMotion_Request_message_member_array,  // message members
  RemoveMotion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RemoveMotion_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RemoveMotion_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RemoveMotion_Request_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__RemoveMotion_Request__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion_Request__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Request>()
{
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::RemoveMotion_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, RemoveMotion_Request)() {
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::RemoveMotion_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace play_motion2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RemoveMotion_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) play_motion2_msgs::srv::RemoveMotion_Response(_init);
}

void RemoveMotion_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<play_motion2_msgs::srv::RemoveMotion_Response *>(message_memory);
  typed_message->~RemoveMotion_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RemoveMotion_Response_message_member_array[1] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs::srv::RemoveMotion_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RemoveMotion_Response_message_members = {
  "play_motion2_msgs::srv",  // message namespace
  "RemoveMotion_Response",  // message name
  1,  // number of fields
  sizeof(play_motion2_msgs::srv::RemoveMotion_Response),
  false,  // has_any_key_member_
  RemoveMotion_Response_message_member_array,  // message members
  RemoveMotion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RemoveMotion_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RemoveMotion_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RemoveMotion_Response_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__RemoveMotion_Response__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion_Response__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Response>()
{
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::RemoveMotion_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, RemoveMotion_Response)() {
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::RemoveMotion_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace play_motion2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RemoveMotion_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) play_motion2_msgs::srv::RemoveMotion_Event(_init);
}

void RemoveMotion_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<play_motion2_msgs::srv::RemoveMotion_Event *>(message_memory);
  typed_message->~RemoveMotion_Event();
}

size_t size_function__RemoveMotion_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<play_motion2_msgs::srv::RemoveMotion_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RemoveMotion_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<play_motion2_msgs::srv::RemoveMotion_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__RemoveMotion_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<play_motion2_msgs::srv::RemoveMotion_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__RemoveMotion_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const play_motion2_msgs::srv::RemoveMotion_Request *>(
    get_const_function__RemoveMotion_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<play_motion2_msgs::srv::RemoveMotion_Request *>(untyped_value);
  value = item;
}

void assign_function__RemoveMotion_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<play_motion2_msgs::srv::RemoveMotion_Request *>(
    get_function__RemoveMotion_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const play_motion2_msgs::srv::RemoveMotion_Request *>(untyped_value);
  item = value;
}

void resize_function__RemoveMotion_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<play_motion2_msgs::srv::RemoveMotion_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RemoveMotion_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<play_motion2_msgs::srv::RemoveMotion_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RemoveMotion_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<play_motion2_msgs::srv::RemoveMotion_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__RemoveMotion_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<play_motion2_msgs::srv::RemoveMotion_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__RemoveMotion_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const play_motion2_msgs::srv::RemoveMotion_Response *>(
    get_const_function__RemoveMotion_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<play_motion2_msgs::srv::RemoveMotion_Response *>(untyped_value);
  value = item;
}

void assign_function__RemoveMotion_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<play_motion2_msgs::srv::RemoveMotion_Response *>(
    get_function__RemoveMotion_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const play_motion2_msgs::srv::RemoveMotion_Response *>(untyped_value);
  item = value;
}

void resize_function__RemoveMotion_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<play_motion2_msgs::srv::RemoveMotion_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RemoveMotion_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs::srv::RemoveMotion_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(play_motion2_msgs::srv::RemoveMotion_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__RemoveMotion_Event__request,  // size() function pointer
    get_const_function__RemoveMotion_Event__request,  // get_const(index) function pointer
    get_function__RemoveMotion_Event__request,  // get(index) function pointer
    fetch_function__RemoveMotion_Event__request,  // fetch(index, &value) function pointer
    assign_function__RemoveMotion_Event__request,  // assign(index, value) function pointer
    resize_function__RemoveMotion_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(play_motion2_msgs::srv::RemoveMotion_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__RemoveMotion_Event__response,  // size() function pointer
    get_const_function__RemoveMotion_Event__response,  // get_const(index) function pointer
    get_function__RemoveMotion_Event__response,  // get(index) function pointer
    fetch_function__RemoveMotion_Event__response,  // fetch(index, &value) function pointer
    assign_function__RemoveMotion_Event__response,  // assign(index, value) function pointer
    resize_function__RemoveMotion_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RemoveMotion_Event_message_members = {
  "play_motion2_msgs::srv",  // message namespace
  "RemoveMotion_Event",  // message name
  3,  // number of fields
  sizeof(play_motion2_msgs::srv::RemoveMotion_Event),
  false,  // has_any_key_member_
  RemoveMotion_Event_message_member_array,  // message members
  RemoveMotion_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  RemoveMotion_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RemoveMotion_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RemoveMotion_Event_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__RemoveMotion_Event__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion_Event__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Event>()
{
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::RemoveMotion_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, RemoveMotion_Event)() {
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::RemoveMotion_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/remove_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace play_motion2_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RemoveMotion_service_members = {
  "play_motion2_msgs::srv",  // service namespace
  "RemoveMotion",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<play_motion2_msgs::srv::RemoveMotion>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t RemoveMotion_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RemoveMotion_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::RemoveMotion_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<play_motion2_msgs::srv::RemoveMotion>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<play_motion2_msgs::srv::RemoveMotion>,
  &play_motion2_msgs__srv__RemoveMotion__get_type_hash,
  &play_motion2_msgs__srv__RemoveMotion__get_type_description,
  &play_motion2_msgs__srv__RemoveMotion__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<play_motion2_msgs::srv::RemoveMotion>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::RemoveMotion_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::play_motion2_msgs::srv::RemoveMotion_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::play_motion2_msgs::srv::RemoveMotion_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::play_motion2_msgs::srv::RemoveMotion_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, RemoveMotion)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<play_motion2_msgs::srv::RemoveMotion>();
}

#ifdef __cplusplus
}
#endif
