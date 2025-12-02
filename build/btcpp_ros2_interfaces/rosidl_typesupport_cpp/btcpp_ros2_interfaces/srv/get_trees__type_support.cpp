// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "btcpp_ros2_interfaces/srv/detail/get_trees__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetTrees_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetTrees_Request_type_support_ids_t;

static const _GetTrees_Request_type_support_ids_t _GetTrees_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetTrees_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetTrees_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTrees_Request_type_support_symbol_names_t _GetTrees_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, btcpp_ros2_interfaces, srv, GetTrees_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, srv, GetTrees_Request)),
  }
};

typedef struct _GetTrees_Request_type_support_data_t
{
  void * data[2];
} _GetTrees_Request_type_support_data_t;

static _GetTrees_Request_type_support_data_t _GetTrees_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetTrees_Request_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_GetTrees_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetTrees_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetTrees_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetTrees_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTrees_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace btcpp_ros2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::srv::GetTrees_Request>()
{
  return &::btcpp_ros2_interfaces::srv::rosidl_typesupport_cpp::GetTrees_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, btcpp_ros2_interfaces, srv, GetTrees_Request)() {
  return get_message_type_support_handle<btcpp_ros2_interfaces::srv::GetTrees_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/srv/detail/get_trees__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetTrees_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetTrees_Response_type_support_ids_t;

static const _GetTrees_Response_type_support_ids_t _GetTrees_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetTrees_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetTrees_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTrees_Response_type_support_symbol_names_t _GetTrees_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, btcpp_ros2_interfaces, srv, GetTrees_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, srv, GetTrees_Response)),
  }
};

typedef struct _GetTrees_Response_type_support_data_t
{
  void * data[2];
} _GetTrees_Response_type_support_data_t;

static _GetTrees_Response_type_support_data_t _GetTrees_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetTrees_Response_message_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_GetTrees_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetTrees_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetTrees_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetTrees_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTrees_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace btcpp_ros2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<btcpp_ros2_interfaces::srv::GetTrees_Response>()
{
  return &::btcpp_ros2_interfaces::srv::rosidl_typesupport_cpp::GetTrees_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, btcpp_ros2_interfaces, srv, GetTrees_Response)() {
  return get_message_type_support_handle<btcpp_ros2_interfaces::srv::GetTrees_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "btcpp_ros2_interfaces/srv/detail/get_trees__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace btcpp_ros2_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetTrees_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetTrees_type_support_ids_t;

static const _GetTrees_type_support_ids_t _GetTrees_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetTrees_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetTrees_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetTrees_type_support_symbol_names_t _GetTrees_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, btcpp_ros2_interfaces, srv, GetTrees)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, btcpp_ros2_interfaces, srv, GetTrees)),
  }
};

typedef struct _GetTrees_type_support_data_t
{
  void * data[2];
} _GetTrees_type_support_data_t;

static _GetTrees_type_support_data_t _GetTrees_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetTrees_service_typesupport_map = {
  2,
  "btcpp_ros2_interfaces",
  &_GetTrees_service_typesupport_ids.typesupport_identifier[0],
  &_GetTrees_service_typesupport_symbol_names.symbol_name[0],
  &_GetTrees_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetTrees_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetTrees_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace btcpp_ros2_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<btcpp_ros2_interfaces::srv::GetTrees>()
{
  return &::btcpp_ros2_interfaces::srv::rosidl_typesupport_cpp::GetTrees_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, btcpp_ros2_interfaces, srv, GetTrees)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<btcpp_ros2_interfaces::srv::GetTrees>();
}

#ifdef __cplusplus
}
#endif
