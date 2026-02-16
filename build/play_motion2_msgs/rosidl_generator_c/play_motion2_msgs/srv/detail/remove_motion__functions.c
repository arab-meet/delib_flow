// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from play_motion2_msgs:srv/RemoveMotion.idl
// generated code does not contain a copyright notice
#include "play_motion2_msgs/srv/detail/remove_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `motion_key`
#include "rosidl_runtime_c/string_functions.h"

bool
play_motion2_msgs__srv__RemoveMotion_Request__init(play_motion2_msgs__srv__RemoveMotion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // motion_key
  if (!rosidl_runtime_c__String__init(&msg->motion_key)) {
    play_motion2_msgs__srv__RemoveMotion_Request__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__srv__RemoveMotion_Request__fini(play_motion2_msgs__srv__RemoveMotion_Request * msg)
{
  if (!msg) {
    return;
  }
  // motion_key
  rosidl_runtime_c__String__fini(&msg->motion_key);
}

bool
play_motion2_msgs__srv__RemoveMotion_Request__are_equal(const play_motion2_msgs__srv__RemoveMotion_Request * lhs, const play_motion2_msgs__srv__RemoveMotion_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motion_key), &(rhs->motion_key)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__srv__RemoveMotion_Request__copy(
  const play_motion2_msgs__srv__RemoveMotion_Request * input,
  play_motion2_msgs__srv__RemoveMotion_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_key
  if (!rosidl_runtime_c__String__copy(
      &(input->motion_key), &(output->motion_key)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__srv__RemoveMotion_Request *
play_motion2_msgs__srv__RemoveMotion_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Request * msg = (play_motion2_msgs__srv__RemoveMotion_Request *)allocator.allocate(sizeof(play_motion2_msgs__srv__RemoveMotion_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__srv__RemoveMotion_Request));
  bool success = play_motion2_msgs__srv__RemoveMotion_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__srv__RemoveMotion_Request__destroy(play_motion2_msgs__srv__RemoveMotion_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__srv__RemoveMotion_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__srv__RemoveMotion_Request__Sequence__init(play_motion2_msgs__srv__RemoveMotion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Request * data = NULL;

  if (size) {
    data = (play_motion2_msgs__srv__RemoveMotion_Request *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__srv__RemoveMotion_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__srv__RemoveMotion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__srv__RemoveMotion_Request__fini(&data[i - 1]);
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
play_motion2_msgs__srv__RemoveMotion_Request__Sequence__fini(play_motion2_msgs__srv__RemoveMotion_Request__Sequence * array)
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
      play_motion2_msgs__srv__RemoveMotion_Request__fini(&array->data[i]);
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

play_motion2_msgs__srv__RemoveMotion_Request__Sequence *
play_motion2_msgs__srv__RemoveMotion_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Request__Sequence * array = (play_motion2_msgs__srv__RemoveMotion_Request__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__srv__RemoveMotion_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__srv__RemoveMotion_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__srv__RemoveMotion_Request__Sequence__destroy(play_motion2_msgs__srv__RemoveMotion_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__srv__RemoveMotion_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__srv__RemoveMotion_Request__Sequence__are_equal(const play_motion2_msgs__srv__RemoveMotion_Request__Sequence * lhs, const play_motion2_msgs__srv__RemoveMotion_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__srv__RemoveMotion_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__srv__RemoveMotion_Request__Sequence__copy(
  const play_motion2_msgs__srv__RemoveMotion_Request__Sequence * input,
  play_motion2_msgs__srv__RemoveMotion_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__srv__RemoveMotion_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__srv__RemoveMotion_Request * data =
      (play_motion2_msgs__srv__RemoveMotion_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__srv__RemoveMotion_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__srv__RemoveMotion_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__srv__RemoveMotion_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
play_motion2_msgs__srv__RemoveMotion_Response__init(play_motion2_msgs__srv__RemoveMotion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
play_motion2_msgs__srv__RemoveMotion_Response__fini(play_motion2_msgs__srv__RemoveMotion_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
play_motion2_msgs__srv__RemoveMotion_Response__are_equal(const play_motion2_msgs__srv__RemoveMotion_Response * lhs, const play_motion2_msgs__srv__RemoveMotion_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__srv__RemoveMotion_Response__copy(
  const play_motion2_msgs__srv__RemoveMotion_Response * input,
  play_motion2_msgs__srv__RemoveMotion_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

play_motion2_msgs__srv__RemoveMotion_Response *
play_motion2_msgs__srv__RemoveMotion_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Response * msg = (play_motion2_msgs__srv__RemoveMotion_Response *)allocator.allocate(sizeof(play_motion2_msgs__srv__RemoveMotion_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__srv__RemoveMotion_Response));
  bool success = play_motion2_msgs__srv__RemoveMotion_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__srv__RemoveMotion_Response__destroy(play_motion2_msgs__srv__RemoveMotion_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__srv__RemoveMotion_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__srv__RemoveMotion_Response__Sequence__init(play_motion2_msgs__srv__RemoveMotion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Response * data = NULL;

  if (size) {
    data = (play_motion2_msgs__srv__RemoveMotion_Response *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__srv__RemoveMotion_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__srv__RemoveMotion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__srv__RemoveMotion_Response__fini(&data[i - 1]);
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
play_motion2_msgs__srv__RemoveMotion_Response__Sequence__fini(play_motion2_msgs__srv__RemoveMotion_Response__Sequence * array)
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
      play_motion2_msgs__srv__RemoveMotion_Response__fini(&array->data[i]);
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

play_motion2_msgs__srv__RemoveMotion_Response__Sequence *
play_motion2_msgs__srv__RemoveMotion_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Response__Sequence * array = (play_motion2_msgs__srv__RemoveMotion_Response__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__srv__RemoveMotion_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__srv__RemoveMotion_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__srv__RemoveMotion_Response__Sequence__destroy(play_motion2_msgs__srv__RemoveMotion_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__srv__RemoveMotion_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__srv__RemoveMotion_Response__Sequence__are_equal(const play_motion2_msgs__srv__RemoveMotion_Response__Sequence * lhs, const play_motion2_msgs__srv__RemoveMotion_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__srv__RemoveMotion_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__srv__RemoveMotion_Response__Sequence__copy(
  const play_motion2_msgs__srv__RemoveMotion_Response__Sequence * input,
  play_motion2_msgs__srv__RemoveMotion_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__srv__RemoveMotion_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__srv__RemoveMotion_Response * data =
      (play_motion2_msgs__srv__RemoveMotion_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__srv__RemoveMotion_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__srv__RemoveMotion_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__srv__RemoveMotion_Response__copy(
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
// #include "play_motion2_msgs/srv/detail/remove_motion__functions.h"

bool
play_motion2_msgs__srv__RemoveMotion_Event__init(play_motion2_msgs__srv__RemoveMotion_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    play_motion2_msgs__srv__RemoveMotion_Event__fini(msg);
    return false;
  }
  // request
  if (!play_motion2_msgs__srv__RemoveMotion_Request__Sequence__init(&msg->request, 0)) {
    play_motion2_msgs__srv__RemoveMotion_Event__fini(msg);
    return false;
  }
  // response
  if (!play_motion2_msgs__srv__RemoveMotion_Response__Sequence__init(&msg->response, 0)) {
    play_motion2_msgs__srv__RemoveMotion_Event__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__srv__RemoveMotion_Event__fini(play_motion2_msgs__srv__RemoveMotion_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  play_motion2_msgs__srv__RemoveMotion_Request__Sequence__fini(&msg->request);
  // response
  play_motion2_msgs__srv__RemoveMotion_Response__Sequence__fini(&msg->response);
}

bool
play_motion2_msgs__srv__RemoveMotion_Event__are_equal(const play_motion2_msgs__srv__RemoveMotion_Event * lhs, const play_motion2_msgs__srv__RemoveMotion_Event * rhs)
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
  if (!play_motion2_msgs__srv__RemoveMotion_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!play_motion2_msgs__srv__RemoveMotion_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__srv__RemoveMotion_Event__copy(
  const play_motion2_msgs__srv__RemoveMotion_Event * input,
  play_motion2_msgs__srv__RemoveMotion_Event * output)
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
  if (!play_motion2_msgs__srv__RemoveMotion_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!play_motion2_msgs__srv__RemoveMotion_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__srv__RemoveMotion_Event *
play_motion2_msgs__srv__RemoveMotion_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Event * msg = (play_motion2_msgs__srv__RemoveMotion_Event *)allocator.allocate(sizeof(play_motion2_msgs__srv__RemoveMotion_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__srv__RemoveMotion_Event));
  bool success = play_motion2_msgs__srv__RemoveMotion_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__srv__RemoveMotion_Event__destroy(play_motion2_msgs__srv__RemoveMotion_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__srv__RemoveMotion_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__srv__RemoveMotion_Event__Sequence__init(play_motion2_msgs__srv__RemoveMotion_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Event * data = NULL;

  if (size) {
    data = (play_motion2_msgs__srv__RemoveMotion_Event *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__srv__RemoveMotion_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__srv__RemoveMotion_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__srv__RemoveMotion_Event__fini(&data[i - 1]);
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
play_motion2_msgs__srv__RemoveMotion_Event__Sequence__fini(play_motion2_msgs__srv__RemoveMotion_Event__Sequence * array)
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
      play_motion2_msgs__srv__RemoveMotion_Event__fini(&array->data[i]);
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

play_motion2_msgs__srv__RemoveMotion_Event__Sequence *
play_motion2_msgs__srv__RemoveMotion_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__srv__RemoveMotion_Event__Sequence * array = (play_motion2_msgs__srv__RemoveMotion_Event__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__srv__RemoveMotion_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__srv__RemoveMotion_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__srv__RemoveMotion_Event__Sequence__destroy(play_motion2_msgs__srv__RemoveMotion_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__srv__RemoveMotion_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__srv__RemoveMotion_Event__Sequence__are_equal(const play_motion2_msgs__srv__RemoveMotion_Event__Sequence * lhs, const play_motion2_msgs__srv__RemoveMotion_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__srv__RemoveMotion_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__srv__RemoveMotion_Event__Sequence__copy(
  const play_motion2_msgs__srv__RemoveMotion_Event__Sequence * input,
  play_motion2_msgs__srv__RemoveMotion_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__srv__RemoveMotion_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__srv__RemoveMotion_Event * data =
      (play_motion2_msgs__srv__RemoveMotion_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__srv__RemoveMotion_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__srv__RemoveMotion_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__srv__RemoveMotion_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
