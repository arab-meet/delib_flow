// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from play_motion2_msgs:msg/Motion.idl
// generated code does not contain a copyright notice
#include "play_motion2_msgs/msg/detail/motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key`
// Member `name`
// Member `usage`
// Member `description`
// Member `joints`
#include "rosidl_runtime_c/string_functions.h"
// Member `positions`
// Member `times_from_start`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
play_motion2_msgs__msg__Motion__init(play_motion2_msgs__msg__Motion * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    play_motion2_msgs__msg__Motion__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    play_motion2_msgs__msg__Motion__fini(msg);
    return false;
  }
  // usage
  if (!rosidl_runtime_c__String__init(&msg->usage)) {
    play_motion2_msgs__msg__Motion__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    play_motion2_msgs__msg__Motion__fini(msg);
    return false;
  }
  // joints
  if (!rosidl_runtime_c__String__Sequence__init(&msg->joints, 0)) {
    play_motion2_msgs__msg__Motion__fini(msg);
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->positions, 0)) {
    play_motion2_msgs__msg__Motion__fini(msg);
    return false;
  }
  // times_from_start
  if (!rosidl_runtime_c__double__Sequence__init(&msg->times_from_start, 0)) {
    play_motion2_msgs__msg__Motion__fini(msg);
    return false;
  }
  return true;
}

void
play_motion2_msgs__msg__Motion__fini(play_motion2_msgs__msg__Motion * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // usage
  rosidl_runtime_c__String__fini(&msg->usage);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // joints
  rosidl_runtime_c__String__Sequence__fini(&msg->joints);
  // positions
  rosidl_runtime_c__double__Sequence__fini(&msg->positions);
  // times_from_start
  rosidl_runtime_c__double__Sequence__fini(&msg->times_from_start);
}

bool
play_motion2_msgs__msg__Motion__are_equal(const play_motion2_msgs__msg__Motion * lhs, const play_motion2_msgs__msg__Motion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // usage
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->usage), &(rhs->usage)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // joints
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->joints), &(rhs->joints)))
  {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->positions), &(rhs->positions)))
  {
    return false;
  }
  // times_from_start
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->times_from_start), &(rhs->times_from_start)))
  {
    return false;
  }
  return true;
}

bool
play_motion2_msgs__msg__Motion__copy(
  const play_motion2_msgs__msg__Motion * input,
  play_motion2_msgs__msg__Motion * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // usage
  if (!rosidl_runtime_c__String__copy(
      &(input->usage), &(output->usage)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // joints
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->joints), &(output->joints)))
  {
    return false;
  }
  // positions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->positions), &(output->positions)))
  {
    return false;
  }
  // times_from_start
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->times_from_start), &(output->times_from_start)))
  {
    return false;
  }
  return true;
}

play_motion2_msgs__msg__Motion *
play_motion2_msgs__msg__Motion__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__msg__Motion * msg = (play_motion2_msgs__msg__Motion *)allocator.allocate(sizeof(play_motion2_msgs__msg__Motion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(play_motion2_msgs__msg__Motion));
  bool success = play_motion2_msgs__msg__Motion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
play_motion2_msgs__msg__Motion__destroy(play_motion2_msgs__msg__Motion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    play_motion2_msgs__msg__Motion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
play_motion2_msgs__msg__Motion__Sequence__init(play_motion2_msgs__msg__Motion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__msg__Motion * data = NULL;

  if (size) {
    data = (play_motion2_msgs__msg__Motion *)allocator.zero_allocate(size, sizeof(play_motion2_msgs__msg__Motion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = play_motion2_msgs__msg__Motion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        play_motion2_msgs__msg__Motion__fini(&data[i - 1]);
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
play_motion2_msgs__msg__Motion__Sequence__fini(play_motion2_msgs__msg__Motion__Sequence * array)
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
      play_motion2_msgs__msg__Motion__fini(&array->data[i]);
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

play_motion2_msgs__msg__Motion__Sequence *
play_motion2_msgs__msg__Motion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  play_motion2_msgs__msg__Motion__Sequence * array = (play_motion2_msgs__msg__Motion__Sequence *)allocator.allocate(sizeof(play_motion2_msgs__msg__Motion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = play_motion2_msgs__msg__Motion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
play_motion2_msgs__msg__Motion__Sequence__destroy(play_motion2_msgs__msg__Motion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    play_motion2_msgs__msg__Motion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
play_motion2_msgs__msg__Motion__Sequence__are_equal(const play_motion2_msgs__msg__Motion__Sequence * lhs, const play_motion2_msgs__msg__Motion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!play_motion2_msgs__msg__Motion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
play_motion2_msgs__msg__Motion__Sequence__copy(
  const play_motion2_msgs__msg__Motion__Sequence * input,
  play_motion2_msgs__msg__Motion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(play_motion2_msgs__msg__Motion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    play_motion2_msgs__msg__Motion * data =
      (play_motion2_msgs__msg__Motion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!play_motion2_msgs__msg__Motion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          play_motion2_msgs__msg__Motion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!play_motion2_msgs__msg__Motion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
