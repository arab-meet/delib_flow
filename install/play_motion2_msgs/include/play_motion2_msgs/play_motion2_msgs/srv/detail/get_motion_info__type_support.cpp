// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from play_motion2_msgs:srv/GetMotionInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "play_motion2_msgs/srv/detail/get_motion_info__functions.h"
#include "play_motion2_msgs/srv/detail/get_motion_info__struct.hpp"
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

void GetMotionInfo_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) play_motion2_msgs::srv::GetMotionInfo_Request(_init);
}

void GetMotionInfo_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<play_motion2_msgs::srv::GetMotionInfo_Request *>(message_memory);
  typed_message->~GetMotionInfo_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetMotionInfo_Request_message_member_array[1] = {
  {
    "motion_key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs::srv::GetMotionInfo_Request, motion_key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetMotionInfo_Request_message_members = {
  "play_motion2_msgs::srv",  // message namespace
  "GetMotionInfo_Request",  // message name
  1,  // number of fields
  sizeof(play_motion2_msgs::srv::GetMotionInfo_Request),
  false,  // has_any_key_member_
  GetMotionInfo_Request_message_member_array,  // message members
  GetMotionInfo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMotionInfo_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetMotionInfo_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetMotionInfo_Request_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__GetMotionInfo_Request__get_type_hash,
  &play_motion2_msgs__srv__GetMotionInfo_Request__get_type_description,
  &play_motion2_msgs__srv__GetMotionInfo_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Request>()
{
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::GetMotionInfo_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, GetMotionInfo_Request)() {
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::GetMotionInfo_Request_message_type_support_handle;
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
// #include "play_motion2_msgs/srv/detail/get_motion_info__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/get_motion_info__struct.hpp"
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

void GetMotionInfo_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) play_motion2_msgs::srv::GetMotionInfo_Response(_init);
}

void GetMotionInfo_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<play_motion2_msgs::srv::GetMotionInfo_Response *>(message_memory);
  typed_message->~GetMotionInfo_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetMotionInfo_Response_message_member_array[1] = {
  {
    "motion",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::msg::Motion>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs::srv::GetMotionInfo_Response, motion),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetMotionInfo_Response_message_members = {
  "play_motion2_msgs::srv",  // message namespace
  "GetMotionInfo_Response",  // message name
  1,  // number of fields
  sizeof(play_motion2_msgs::srv::GetMotionInfo_Response),
  false,  // has_any_key_member_
  GetMotionInfo_Response_message_member_array,  // message members
  GetMotionInfo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMotionInfo_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetMotionInfo_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetMotionInfo_Response_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__GetMotionInfo_Response__get_type_hash,
  &play_motion2_msgs__srv__GetMotionInfo_Response__get_type_description,
  &play_motion2_msgs__srv__GetMotionInfo_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Response>()
{
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::GetMotionInfo_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, GetMotionInfo_Response)() {
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::GetMotionInfo_Response_message_type_support_handle;
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
// #include "play_motion2_msgs/srv/detail/get_motion_info__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/get_motion_info__struct.hpp"
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

void GetMotionInfo_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) play_motion2_msgs::srv::GetMotionInfo_Event(_init);
}

void GetMotionInfo_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<play_motion2_msgs::srv::GetMotionInfo_Event *>(message_memory);
  typed_message->~GetMotionInfo_Event();
}

size_t size_function__GetMotionInfo_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<play_motion2_msgs::srv::GetMotionInfo_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetMotionInfo_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<play_motion2_msgs::srv::GetMotionInfo_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetMotionInfo_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<play_motion2_msgs::srv::GetMotionInfo_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetMotionInfo_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const play_motion2_msgs::srv::GetMotionInfo_Request *>(
    get_const_function__GetMotionInfo_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<play_motion2_msgs::srv::GetMotionInfo_Request *>(untyped_value);
  value = item;
}

void assign_function__GetMotionInfo_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<play_motion2_msgs::srv::GetMotionInfo_Request *>(
    get_function__GetMotionInfo_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const play_motion2_msgs::srv::GetMotionInfo_Request *>(untyped_value);
  item = value;
}

void resize_function__GetMotionInfo_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<play_motion2_msgs::srv::GetMotionInfo_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetMotionInfo_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<play_motion2_msgs::srv::GetMotionInfo_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetMotionInfo_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<play_motion2_msgs::srv::GetMotionInfo_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetMotionInfo_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<play_motion2_msgs::srv::GetMotionInfo_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetMotionInfo_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const play_motion2_msgs::srv::GetMotionInfo_Response *>(
    get_const_function__GetMotionInfo_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<play_motion2_msgs::srv::GetMotionInfo_Response *>(untyped_value);
  value = item;
}

void assign_function__GetMotionInfo_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<play_motion2_msgs::srv::GetMotionInfo_Response *>(
    get_function__GetMotionInfo_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const play_motion2_msgs::srv::GetMotionInfo_Response *>(untyped_value);
  item = value;
}

void resize_function__GetMotionInfo_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<play_motion2_msgs::srv::GetMotionInfo_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetMotionInfo_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(play_motion2_msgs::srv::GetMotionInfo_Event, info),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(play_motion2_msgs::srv::GetMotionInfo_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetMotionInfo_Event__request,  // size() function pointer
    get_const_function__GetMotionInfo_Event__request,  // get_const(index) function pointer
    get_function__GetMotionInfo_Event__request,  // get(index) function pointer
    fetch_function__GetMotionInfo_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetMotionInfo_Event__request,  // assign(index, value) function pointer
    resize_function__GetMotionInfo_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(play_motion2_msgs::srv::GetMotionInfo_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetMotionInfo_Event__response,  // size() function pointer
    get_const_function__GetMotionInfo_Event__response,  // get_const(index) function pointer
    get_function__GetMotionInfo_Event__response,  // get(index) function pointer
    fetch_function__GetMotionInfo_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetMotionInfo_Event__response,  // assign(index, value) function pointer
    resize_function__GetMotionInfo_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetMotionInfo_Event_message_members = {
  "play_motion2_msgs::srv",  // message namespace
  "GetMotionInfo_Event",  // message name
  3,  // number of fields
  sizeof(play_motion2_msgs::srv::GetMotionInfo_Event),
  false,  // has_any_key_member_
  GetMotionInfo_Event_message_member_array,  // message members
  GetMotionInfo_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMotionInfo_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetMotionInfo_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetMotionInfo_Event_message_members,
  get_message_typesupport_handle_function,
  &play_motion2_msgs__srv__GetMotionInfo_Event__get_type_hash,
  &play_motion2_msgs__srv__GetMotionInfo_Event__get_type_description,
  &play_motion2_msgs__srv__GetMotionInfo_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Event>()
{
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::GetMotionInfo_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, GetMotionInfo_Event)() {
  return &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::GetMotionInfo_Event_message_type_support_handle;
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
// #include "play_motion2_msgs/srv/detail/get_motion_info__functions.h"
// already included above
// #include "play_motion2_msgs/srv/detail/get_motion_info__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetMotionInfo_service_members = {
  "play_motion2_msgs::srv",  // service namespace
  "GetMotionInfo",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<play_motion2_msgs::srv::GetMotionInfo>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetMotionInfo_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetMotionInfo_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<play_motion2_msgs::srv::GetMotionInfo_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<play_motion2_msgs::srv::GetMotionInfo>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<play_motion2_msgs::srv::GetMotionInfo>,
  &play_motion2_msgs__srv__GetMotionInfo__get_type_hash,
  &play_motion2_msgs__srv__GetMotionInfo__get_type_description,
  &play_motion2_msgs__srv__GetMotionInfo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace play_motion2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<play_motion2_msgs::srv::GetMotionInfo>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::play_motion2_msgs::srv::rosidl_typesupport_introspection_cpp::GetMotionInfo_service_type_support_handle;
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
        ::play_motion2_msgs::srv::GetMotionInfo_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::play_motion2_msgs::srv::GetMotionInfo_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::play_motion2_msgs::srv::GetMotionInfo_Event
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, play_motion2_msgs, srv, GetMotionInfo)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<play_motion2_msgs::srv::GetMotionInfo>();
}

#ifdef __cplusplus
}
#endif
