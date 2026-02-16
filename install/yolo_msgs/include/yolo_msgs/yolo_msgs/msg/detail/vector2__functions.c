// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolo_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/vector2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
yolo_msgs__msg__Vector2__init(yolo_msgs__msg__Vector2 * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
yolo_msgs__msg__Vector2__fini(yolo_msgs__msg__Vector2 * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
yolo_msgs__msg__Vector2__are_equal(const yolo_msgs__msg__Vector2 * lhs, const yolo_msgs__msg__Vector2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
yolo_msgs__msg__Vector2__copy(
  const yolo_msgs__msg__Vector2 * input,
  yolo_msgs__msg__Vector2 * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

yolo_msgs__msg__Vector2 *
yolo_msgs__msg__Vector2__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__Vector2 * msg = (yolo_msgs__msg__Vector2 *)allocator.allocate(sizeof(yolo_msgs__msg__Vector2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo_msgs__msg__Vector2));
  bool success = yolo_msgs__msg__Vector2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo_msgs__msg__Vector2__destroy(yolo_msgs__msg__Vector2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo_msgs__msg__Vector2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo_msgs__msg__Vector2__Sequence__init(yolo_msgs__msg__Vector2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__Vector2 * data = NULL;

  if (size) {
    data = (yolo_msgs__msg__Vector2 *)allocator.zero_allocate(size, sizeof(yolo_msgs__msg__Vector2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo_msgs__msg__Vector2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo_msgs__msg__Vector2__fini(&data[i - 1]);
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
yolo_msgs__msg__Vector2__Sequence__fini(yolo_msgs__msg__Vector2__Sequence * array)
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
      yolo_msgs__msg__Vector2__fini(&array->data[i]);
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

yolo_msgs__msg__Vector2__Sequence *
yolo_msgs__msg__Vector2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__Vector2__Sequence * array = (yolo_msgs__msg__Vector2__Sequence *)allocator.allocate(sizeof(yolo_msgs__msg__Vector2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo_msgs__msg__Vector2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo_msgs__msg__Vector2__Sequence__destroy(yolo_msgs__msg__Vector2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo_msgs__msg__Vector2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo_msgs__msg__Vector2__Sequence__are_equal(const yolo_msgs__msg__Vector2__Sequence * lhs, const yolo_msgs__msg__Vector2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo_msgs__msg__Vector2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo_msgs__msg__Vector2__Sequence__copy(
  const yolo_msgs__msg__Vector2__Sequence * input,
  yolo_msgs__msg__Vector2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo_msgs__msg__Vector2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo_msgs__msg__Vector2 * data =
      (yolo_msgs__msg__Vector2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo_msgs__msg__Vector2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo_msgs__msg__Vector2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo_msgs__msg__Vector2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
