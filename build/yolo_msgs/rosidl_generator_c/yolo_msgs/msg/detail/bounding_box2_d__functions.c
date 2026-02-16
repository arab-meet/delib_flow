// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolo_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/msg/detail/bounding_box2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center`
#include "yolo_msgs/msg/detail/pose2_d__functions.h"
// Member `size`
#include "yolo_msgs/msg/detail/vector2__functions.h"

bool
yolo_msgs__msg__BoundingBox2D__init(yolo_msgs__msg__BoundingBox2D * msg)
{
  if (!msg) {
    return false;
  }
  // center
  if (!yolo_msgs__msg__Pose2D__init(&msg->center)) {
    yolo_msgs__msg__BoundingBox2D__fini(msg);
    return false;
  }
  // size
  if (!yolo_msgs__msg__Vector2__init(&msg->size)) {
    yolo_msgs__msg__BoundingBox2D__fini(msg);
    return false;
  }
  return true;
}

void
yolo_msgs__msg__BoundingBox2D__fini(yolo_msgs__msg__BoundingBox2D * msg)
{
  if (!msg) {
    return;
  }
  // center
  yolo_msgs__msg__Pose2D__fini(&msg->center);
  // size
  yolo_msgs__msg__Vector2__fini(&msg->size);
}

bool
yolo_msgs__msg__BoundingBox2D__are_equal(const yolo_msgs__msg__BoundingBox2D * lhs, const yolo_msgs__msg__BoundingBox2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center
  if (!yolo_msgs__msg__Pose2D__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // size
  if (!yolo_msgs__msg__Vector2__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
yolo_msgs__msg__BoundingBox2D__copy(
  const yolo_msgs__msg__BoundingBox2D * input,
  yolo_msgs__msg__BoundingBox2D * output)
{
  if (!input || !output) {
    return false;
  }
  // center
  if (!yolo_msgs__msg__Pose2D__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // size
  if (!yolo_msgs__msg__Vector2__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

yolo_msgs__msg__BoundingBox2D *
yolo_msgs__msg__BoundingBox2D__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__BoundingBox2D * msg = (yolo_msgs__msg__BoundingBox2D *)allocator.allocate(sizeof(yolo_msgs__msg__BoundingBox2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo_msgs__msg__BoundingBox2D));
  bool success = yolo_msgs__msg__BoundingBox2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo_msgs__msg__BoundingBox2D__destroy(yolo_msgs__msg__BoundingBox2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo_msgs__msg__BoundingBox2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo_msgs__msg__BoundingBox2D__Sequence__init(yolo_msgs__msg__BoundingBox2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__BoundingBox2D * data = NULL;

  if (size) {
    data = (yolo_msgs__msg__BoundingBox2D *)allocator.zero_allocate(size, sizeof(yolo_msgs__msg__BoundingBox2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo_msgs__msg__BoundingBox2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo_msgs__msg__BoundingBox2D__fini(&data[i - 1]);
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
yolo_msgs__msg__BoundingBox2D__Sequence__fini(yolo_msgs__msg__BoundingBox2D__Sequence * array)
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
      yolo_msgs__msg__BoundingBox2D__fini(&array->data[i]);
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

yolo_msgs__msg__BoundingBox2D__Sequence *
yolo_msgs__msg__BoundingBox2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__msg__BoundingBox2D__Sequence * array = (yolo_msgs__msg__BoundingBox2D__Sequence *)allocator.allocate(sizeof(yolo_msgs__msg__BoundingBox2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo_msgs__msg__BoundingBox2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo_msgs__msg__BoundingBox2D__Sequence__destroy(yolo_msgs__msg__BoundingBox2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo_msgs__msg__BoundingBox2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo_msgs__msg__BoundingBox2D__Sequence__are_equal(const yolo_msgs__msg__BoundingBox2D__Sequence * lhs, const yolo_msgs__msg__BoundingBox2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo_msgs__msg__BoundingBox2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo_msgs__msg__BoundingBox2D__Sequence__copy(
  const yolo_msgs__msg__BoundingBox2D__Sequence * input,
  yolo_msgs__msg__BoundingBox2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo_msgs__msg__BoundingBox2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo_msgs__msg__BoundingBox2D * data =
      (yolo_msgs__msg__BoundingBox2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo_msgs__msg__BoundingBox2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo_msgs__msg__BoundingBox2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo_msgs__msg__BoundingBox2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
