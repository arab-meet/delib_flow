// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from btcpp_ros2_interfaces:srv/GetTrees.idl
// generated code does not contain a copyright notice
#include "btcpp_ros2_interfaces/srv/detail/get_trees__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
btcpp_ros2_interfaces__srv__GetTrees_Request__init(btcpp_ros2_interfaces__srv__GetTrees_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Request__fini(btcpp_ros2_interfaces__srv__GetTrees_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Request__are_equal(const btcpp_ros2_interfaces__srv__GetTrees_Request * lhs, const btcpp_ros2_interfaces__srv__GetTrees_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Request__copy(
  const btcpp_ros2_interfaces__srv__GetTrees_Request * input,
  btcpp_ros2_interfaces__srv__GetTrees_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

btcpp_ros2_interfaces__srv__GetTrees_Request *
btcpp_ros2_interfaces__srv__GetTrees_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Request * msg = (btcpp_ros2_interfaces__srv__GetTrees_Request *)allocator.allocate(sizeof(btcpp_ros2_interfaces__srv__GetTrees_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__srv__GetTrees_Request));
  bool success = btcpp_ros2_interfaces__srv__GetTrees_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Request__destroy(btcpp_ros2_interfaces__srv__GetTrees_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__srv__GetTrees_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__init(btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Request * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__srv__GetTrees_Request *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__srv__GetTrees_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__srv__GetTrees_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__srv__GetTrees_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__fini(btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__srv__GetTrees_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence *
btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * array = (btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__destroy(btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__are_equal(const btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * lhs, const btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__srv__GetTrees_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__copy(
  const btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * input,
  btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__srv__GetTrees_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__srv__GetTrees_Request * data =
      (btcpp_ros2_interfaces__srv__GetTrees_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__srv__GetTrees_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__srv__GetTrees_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__srv__GetTrees_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `tree_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
btcpp_ros2_interfaces__srv__GetTrees_Response__init(btcpp_ros2_interfaces__srv__GetTrees_Response * msg)
{
  if (!msg) {
    return false;
  }
  // tree_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->tree_ids, 0)) {
    btcpp_ros2_interfaces__srv__GetTrees_Response__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Response__fini(btcpp_ros2_interfaces__srv__GetTrees_Response * msg)
{
  if (!msg) {
    return;
  }
  // tree_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->tree_ids);
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Response__are_equal(const btcpp_ros2_interfaces__srv__GetTrees_Response * lhs, const btcpp_ros2_interfaces__srv__GetTrees_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tree_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->tree_ids), &(rhs->tree_ids)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Response__copy(
  const btcpp_ros2_interfaces__srv__GetTrees_Response * input,
  btcpp_ros2_interfaces__srv__GetTrees_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // tree_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->tree_ids), &(output->tree_ids)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__srv__GetTrees_Response *
btcpp_ros2_interfaces__srv__GetTrees_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Response * msg = (btcpp_ros2_interfaces__srv__GetTrees_Response *)allocator.allocate(sizeof(btcpp_ros2_interfaces__srv__GetTrees_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__srv__GetTrees_Response));
  bool success = btcpp_ros2_interfaces__srv__GetTrees_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Response__destroy(btcpp_ros2_interfaces__srv__GetTrees_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__srv__GetTrees_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__init(btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Response * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__srv__GetTrees_Response *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__srv__GetTrees_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__srv__GetTrees_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__srv__GetTrees_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__fini(btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__srv__GetTrees_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence *
btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * array = (btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__destroy(btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__are_equal(const btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * lhs, const btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__srv__GetTrees_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__copy(
  const btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * input,
  btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__srv__GetTrees_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__srv__GetTrees_Response * data =
      (btcpp_ros2_interfaces__srv__GetTrees_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__srv__GetTrees_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__srv__GetTrees_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__srv__GetTrees_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "btcpp_ros2_interfaces/srv/detail/get_trees__functions.h"

bool
btcpp_ros2_interfaces__srv__GetTrees_Event__init(btcpp_ros2_interfaces__srv__GetTrees_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    btcpp_ros2_interfaces__srv__GetTrees_Event__fini(msg);
    return false;
  }
  // request
  if (!btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__init(&msg->request, 0)) {
    btcpp_ros2_interfaces__srv__GetTrees_Event__fini(msg);
    return false;
  }
  // response
  if (!btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__init(&msg->response, 0)) {
    btcpp_ros2_interfaces__srv__GetTrees_Event__fini(msg);
    return false;
  }
  return true;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Event__fini(btcpp_ros2_interfaces__srv__GetTrees_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__fini(&msg->request);
  // response
  btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__fini(&msg->response);
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Event__are_equal(const btcpp_ros2_interfaces__srv__GetTrees_Event * lhs, const btcpp_ros2_interfaces__srv__GetTrees_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Event__copy(
  const btcpp_ros2_interfaces__srv__GetTrees_Event * input,
  btcpp_ros2_interfaces__srv__GetTrees_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!btcpp_ros2_interfaces__srv__GetTrees_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!btcpp_ros2_interfaces__srv__GetTrees_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

btcpp_ros2_interfaces__srv__GetTrees_Event *
btcpp_ros2_interfaces__srv__GetTrees_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Event * msg = (btcpp_ros2_interfaces__srv__GetTrees_Event *)allocator.allocate(sizeof(btcpp_ros2_interfaces__srv__GetTrees_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(btcpp_ros2_interfaces__srv__GetTrees_Event));
  bool success = btcpp_ros2_interfaces__srv__GetTrees_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Event__destroy(btcpp_ros2_interfaces__srv__GetTrees_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    btcpp_ros2_interfaces__srv__GetTrees_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__init(btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Event * data = NULL;

  if (size) {
    data = (btcpp_ros2_interfaces__srv__GetTrees_Event *)allocator.zero_allocate(size, sizeof(btcpp_ros2_interfaces__srv__GetTrees_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = btcpp_ros2_interfaces__srv__GetTrees_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        btcpp_ros2_interfaces__srv__GetTrees_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__fini(btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      btcpp_ros2_interfaces__srv__GetTrees_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence *
btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * array = (btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence *)allocator.allocate(sizeof(btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__destroy(btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__are_equal(const btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * lhs, const btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!btcpp_ros2_interfaces__srv__GetTrees_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence__copy(
  const btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * input,
  btcpp_ros2_interfaces__srv__GetTrees_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(btcpp_ros2_interfaces__srv__GetTrees_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    btcpp_ros2_interfaces__srv__GetTrees_Event * data =
      (btcpp_ros2_interfaces__srv__GetTrees_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!btcpp_ros2_interfaces__srv__GetTrees_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          btcpp_ros2_interfaces__srv__GetTrees_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!btcpp_ros2_interfaces__srv__GetTrees_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
