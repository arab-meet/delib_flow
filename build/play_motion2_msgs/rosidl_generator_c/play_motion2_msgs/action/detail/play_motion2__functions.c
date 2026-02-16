// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from play_motion2_msgs:action/PlayMotion2.idl
// generated code does not contain a copyright notice
#include "play_motion2_msgs/action/detail/play_motion2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `motion_name`
#include "rosidl_runtime_c/string_functions.h"

bool
play_motion2_msgs__action__PlayMotion2_Goal__init(play_motion2_msgs__action__PlayMotion2_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // motion_name
  if (!rosidl_runtime_c__String__init(&msg->motion_name)) {
    play_motion2_msgs__action__PlayMotion2_Goal__fini(msg);
    return false;
  }
  // skip_planning
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_Goal__fini(play_motion2_msgs__action__PlayMotion2_Goal * msg)
{
  if (!msg) {
    return;
  }
  // motion_name
  rosidl_runtime_c__String__fini(&msg->motion_name);
  // skip_planning
}

bool
play_motion2_msgs__action__PlayMotion2_Goal__are_equal(const play_motion2_msgs__action__PlayMotion2_Goal * lhs, const play_motion2_msgs__action__PlayMotion2_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motion_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->motion_name), &(rhs->motion_name)))
  {
    return false;
  }
  // skip_planning
  if (lhs->skip_planning != rhs->skip_planning) {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_Goal__copy(
  const play_motion2_msgs__action__PlayMotion2_Goal * input,
  play_motion2_msgs__action__PlayMotion2_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // motion_name
  if (!rosidl_runtime_c__String__copy(
      &(input->motion_name), &(output->motion_name)))
  {
    return false;
  }
  // skip_planning
  output->skip_planning = input->skip_planning;
  return true;
}

play_motion2_msgs__action__PlayMotion2_Goal *
play_motion2_msgs__action__PlayMotion2_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Goal * msg = (play_motion2_msgs__action__PlayMotion2_Goal *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_Goal));
  bool success = play_motion2_msgs__action__PlayMotion2_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_Goal__destroy(play_motion2_msgs__action__PlayMotion2_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_Goal__Sequence__init(play_motion2_msgs__action__PlayMotion2_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Goal * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_Goal *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_Goal__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_Goal__Sequence__fini(play_motion2_msgs__action__PlayMotion2_Goal__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_Goal__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_Goal__Sequence *
play_motion2_msgs__action__PlayMotion2_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Goal__Sequence * array = (play_motion2_msgs__action__PlayMotion2_Goal__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_Goal__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_Goal__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_Goal__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_Goal__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_Goal__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_Goal * data =
      (play_motion2_msgs__action__PlayMotion2_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
play_motion2_msgs__action__PlayMotion2_Result__init(play_motion2_msgs__action__PlayMotion2_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    play_motion2_msgs__action__PlayMotion2_Result__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_Result__fini(play_motion2_msgs__action__PlayMotion2_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
play_motion2_msgs__action__PlayMotion2_Result__are_equal(const play_motion2_msgs__action__PlayMotion2_Result * lhs, const play_motion2_msgs__action__PlayMotion2_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_Result__copy(
  const play_motion2_msgs__action__PlayMotion2_Result * input,
  play_motion2_msgs__action__PlayMotion2_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_Result *
play_motion2_msgs__action__PlayMotion2_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Result * msg = (play_motion2_msgs__action__PlayMotion2_Result *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_Result));
  bool success = play_motion2_msgs__action__PlayMotion2_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_Result__destroy(play_motion2_msgs__action__PlayMotion2_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_Result__Sequence__init(play_motion2_msgs__action__PlayMotion2_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Result * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_Result *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_Result__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_Result__Sequence__fini(play_motion2_msgs__action__PlayMotion2_Result__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_Result__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_Result__Sequence *
play_motion2_msgs__action__PlayMotion2_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Result__Sequence * array = (play_motion2_msgs__action__PlayMotion2_Result__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_Result__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_Result__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_Result__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_Result__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_Result__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_Result * data =
      (play_motion2_msgs__action__PlayMotion2_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_Feedback__init(play_motion2_msgs__action__PlayMotion2_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_time
  if (!builtin_interfaces__msg__Time__init(&msg->current_time)) {
    play_motion2_msgs__action__PlayMotion2_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_Feedback__fini(play_motion2_msgs__action__PlayMotion2_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_time
  builtin_interfaces__msg__Time__fini(&msg->current_time);
}

bool
play_motion2_msgs__action__PlayMotion2_Feedback__are_equal(const play_motion2_msgs__action__PlayMotion2_Feedback * lhs, const play_motion2_msgs__action__PlayMotion2_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->current_time), &(rhs->current_time)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_Feedback__copy(
  const play_motion2_msgs__action__PlayMotion2_Feedback * input,
  play_motion2_msgs__action__PlayMotion2_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->current_time), &(output->current_time)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_Feedback *
play_motion2_msgs__action__PlayMotion2_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Feedback * msg = (play_motion2_msgs__action__PlayMotion2_Feedback *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_Feedback));
  bool success = play_motion2_msgs__action__PlayMotion2_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_Feedback__destroy(play_motion2_msgs__action__PlayMotion2_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__init(play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Feedback * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_Feedback *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_Feedback__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__fini(play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_Feedback__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_Feedback__Sequence *
play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * array = (play_motion2_msgs__action__PlayMotion2_Feedback__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_Feedback__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_Feedback * data =
      (play_motion2_msgs__action__PlayMotion2_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__init(play_motion2_msgs__action__PlayMotion2_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!play_motion2_msgs__action__PlayMotion2_Goal__init(&msg->goal)) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__fini(play_motion2_msgs__action__PlayMotion2_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  play_motion2_msgs__action__PlayMotion2_Goal__fini(&msg->goal);
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__are_equal(const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * lhs, const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!play_motion2_msgs__action__PlayMotion2_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__copy(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Request * input,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!play_motion2_msgs__action__PlayMotion2_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_SendGoal_Request *
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request * msg = (play_motion2_msgs__action__PlayMotion2_SendGoal_Request *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Request));
  bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__destroy(play_motion2_msgs__action__PlayMotion2_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__init(play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_SendGoal_Request *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_SendGoal_Request__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__fini(play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_SendGoal_Request__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence *
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * array = (play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_SendGoal_Request * data =
      (play_motion2_msgs__action__PlayMotion2_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
// already included above
// #include "builtin_interfaces/msg/detail/time__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__init(play_motion2_msgs__action__PlayMotion2_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__fini(play_motion2_msgs__action__PlayMotion2_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__are_equal(const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * lhs, const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__copy(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Response * input,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_SendGoal_Response *
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response * msg = (play_motion2_msgs__action__PlayMotion2_SendGoal_Response *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Response));
  bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__destroy(play_motion2_msgs__action__PlayMotion2_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__init(play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_SendGoal_Response *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_SendGoal_Response__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__fini(play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_SendGoal_Response__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence *
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * array = (play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_SendGoal_Response * data =
      (play_motion2_msgs__action__PlayMotion2_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Response__copy(
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
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__init(play_motion2_msgs__action__PlayMotion2_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(play_motion2_msgs__action__PlayMotion2_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__are_equal(const play_motion2_msgs__action__PlayMotion2_SendGoal_Event * lhs, const play_motion2_msgs__action__PlayMotion2_SendGoal_Event * rhs)
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
  if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__copy(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Event * input,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event * output)
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
  if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_SendGoal_Event *
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event * msg = (play_motion2_msgs__action__PlayMotion2_SendGoal_Event *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Event));
  bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__destroy(play_motion2_msgs__action__PlayMotion2_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__init(play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_SendGoal_Event *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__fini(play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence *
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * array = (play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_SendGoal_Event * data =
      (play_motion2_msgs__action__PlayMotion2_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Request__init(play_motion2_msgs__action__PlayMotion2_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Request__fini(play_motion2_msgs__action__PlayMotion2_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Request__are_equal(const play_motion2_msgs__action__PlayMotion2_GetResult_Request * lhs, const play_motion2_msgs__action__PlayMotion2_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Request__copy(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Request * input,
  play_motion2_msgs__action__PlayMotion2_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_GetResult_Request *
play_motion2_msgs__action__PlayMotion2_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Request * msg = (play_motion2_msgs__action__PlayMotion2_GetResult_Request *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Request));
  bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Request__destroy(play_motion2_msgs__action__PlayMotion2_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__init(play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Request * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_GetResult_Request *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_GetResult_Request__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__fini(play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_GetResult_Request__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence *
play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * array = (play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_GetResult_Request * data =
      (play_motion2_msgs__action__PlayMotion2_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Response__init(play_motion2_msgs__action__PlayMotion2_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!play_motion2_msgs__action__PlayMotion2_Result__init(&msg->result)) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Response__fini(play_motion2_msgs__action__PlayMotion2_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  play_motion2_msgs__action__PlayMotion2_Result__fini(&msg->result);
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Response__are_equal(const play_motion2_msgs__action__PlayMotion2_GetResult_Response * lhs, const play_motion2_msgs__action__PlayMotion2_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!play_motion2_msgs__action__PlayMotion2_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Response__copy(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Response * input,
  play_motion2_msgs__action__PlayMotion2_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!play_motion2_msgs__action__PlayMotion2_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_GetResult_Response *
play_motion2_msgs__action__PlayMotion2_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Response * msg = (play_motion2_msgs__action__PlayMotion2_GetResult_Response *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Response));
  bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Response__destroy(play_motion2_msgs__action__PlayMotion2_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__init(play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Response * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_GetResult_Response *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_GetResult_Response__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__fini(play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_GetResult_Response__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence *
play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * array = (play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_GetResult_Response * data =
      (play_motion2_msgs__action__PlayMotion2_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Event__init(play_motion2_msgs__action__PlayMotion2_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__init(&msg->request, 0)) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__init(&msg->response, 0)) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(play_motion2_msgs__action__PlayMotion2_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__fini(&msg->request);
  // response
  play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__fini(&msg->response);
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Event__are_equal(const play_motion2_msgs__action__PlayMotion2_GetResult_Event * lhs, const play_motion2_msgs__action__PlayMotion2_GetResult_Event * rhs)
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
  if (!play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Event__copy(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Event * input,
  play_motion2_msgs__action__PlayMotion2_GetResult_Event * output)
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
  if (!play_motion2_msgs__action__PlayMotion2_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!play_motion2_msgs__action__PlayMotion2_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_GetResult_Event *
play_motion2_msgs__action__PlayMotion2_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Event * msg = (play_motion2_msgs__action__PlayMotion2_GetResult_Event *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Event));
  bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Event__destroy(play_motion2_msgs__action__PlayMotion2_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__init(play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Event * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_GetResult_Event *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__fini(play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence *
play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * array = (play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_GetResult_Event * data =
      (play_motion2_msgs__action__PlayMotion2_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__functions.h"

bool
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__init(play_motion2_msgs__action__PlayMotion2_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    play_motion2_msgs__action__PlayMotion2_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!play_motion2_msgs__action__PlayMotion2_Feedback__init(&msg->feedback)) {
    play_motion2_msgs__action__PlayMotion2_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__fini(play_motion2_msgs__action__PlayMotion2_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  play_motion2_msgs__action__PlayMotion2_Feedback__fini(&msg->feedback);
}

bool
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__are_equal(const play_motion2_msgs__action__PlayMotion2_FeedbackMessage * lhs, const play_motion2_msgs__action__PlayMotion2_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!play_motion2_msgs__action__PlayMotion2_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__copy(
  const play_motion2_msgs__action__PlayMotion2_FeedbackMessage * input,
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!play_motion2_msgs__action__PlayMotion2_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__action__PlayMotion2_FeedbackMessage *
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage * msg = (play_motion2_msgs__action__PlayMotion2_FeedbackMessage *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__action__PlayMotion2_FeedbackMessage));
  bool success = play_motion2_msgs__action__PlayMotion2_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__destroy(play_motion2_msgs__action__PlayMotion2_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__action__PlayMotion2_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__init(play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage * data = NULL;

  if (size) {
    data = (play_motion2_msgs__action__PlayMotion2_FeedbackMessage *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__action__PlayMotion2_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__action__PlayMotion2_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__action__PlayMotion2_FeedbackMessage__fini(&data[i - 1]);
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
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__fini(play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * array)
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
      play_motion2_msgs__action__PlayMotion2_FeedbackMessage__fini(&array->data[i]);
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

play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence *
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * array = (play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__destroy(play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__are_equal(const play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * lhs, const play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence__copy(
  const play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * input,
  play_motion2_msgs__action__PlayMotion2_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__action__PlayMotion2_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__action__PlayMotion2_FeedbackMessage * data =
      (play_motion2_msgs__action__PlayMotion2_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__action__PlayMotion2_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__action__PlayMotion2_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__action__PlayMotion2_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
