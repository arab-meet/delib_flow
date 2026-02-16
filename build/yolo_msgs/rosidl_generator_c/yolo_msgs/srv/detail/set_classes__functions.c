// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yolo_msgs:srv/SetClasses.idl
// generated code does not contain a copyright notice
#include "yolo_msgs/srv/detail/set_classes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `classes`
#include "rosidl_runtime_c/string_functions.h"

bool
yolo_msgs__srv__SetClasses_Request__init(yolo_msgs__srv__SetClasses_Request * msg)
{
  if (!msg) {
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->classes, 0)) {
    yolo_msgs__srv__SetClasses_Request__fini(msg);
    return false;
  }
  return true;
}

void
yolo_msgs__srv__SetClasses_Request__fini(yolo_msgs__srv__SetClasses_Request * msg)
{
  if (!msg) {
    return;
  }
  // classes
  rosidl_runtime_c__String__Sequence__fini(&msg->classes);
}

bool
yolo_msgs__srv__SetClasses_Request__are_equal(const yolo_msgs__srv__SetClasses_Request * lhs, const yolo_msgs__srv__SetClasses_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->classes), &(rhs->classes)))
  {
    return false;
  }
  return true;
}

bool
yolo_msgs__srv__SetClasses_Request__copy(
  const yolo_msgs__srv__SetClasses_Request * input,
  yolo_msgs__srv__SetClasses_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->classes), &(output->classes)))
  {
    return false;
  }
  return true;
}

yolo_msgs__srv__SetClasses_Request *
yolo_msgs__srv__SetClasses_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Request * msg = (yolo_msgs__srv__SetClasses_Request *)allocator.allocate(sizeof(yolo_msgs__srv__SetClasses_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo_msgs__srv__SetClasses_Request));
  bool success = yolo_msgs__srv__SetClasses_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo_msgs__srv__SetClasses_Request__destroy(yolo_msgs__srv__SetClasses_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo_msgs__srv__SetClasses_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo_msgs__srv__SetClasses_Request__Sequence__init(yolo_msgs__srv__SetClasses_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Request * data = NULL;

  if (size) {
    data = (yolo_msgs__srv__SetClasses_Request *)allocator.zero_allocate(size, sizeof(yolo_msgs__srv__SetClasses_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo_msgs__srv__SetClasses_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo_msgs__srv__SetClasses_Request__fini(&data[i - 1]);
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
yolo_msgs__srv__SetClasses_Request__Sequence__fini(yolo_msgs__srv__SetClasses_Request__Sequence * array)
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
      yolo_msgs__srv__SetClasses_Request__fini(&array->data[i]);
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

yolo_msgs__srv__SetClasses_Request__Sequence *
yolo_msgs__srv__SetClasses_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Request__Sequence * array = (yolo_msgs__srv__SetClasses_Request__Sequence *)allocator.allocate(sizeof(yolo_msgs__srv__SetClasses_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo_msgs__srv__SetClasses_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo_msgs__srv__SetClasses_Request__Sequence__destroy(yolo_msgs__srv__SetClasses_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo_msgs__srv__SetClasses_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo_msgs__srv__SetClasses_Request__Sequence__are_equal(const yolo_msgs__srv__SetClasses_Request__Sequence * lhs, const yolo_msgs__srv__SetClasses_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo_msgs__srv__SetClasses_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo_msgs__srv__SetClasses_Request__Sequence__copy(
  const yolo_msgs__srv__SetClasses_Request__Sequence * input,
  yolo_msgs__srv__SetClasses_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo_msgs__srv__SetClasses_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo_msgs__srv__SetClasses_Request * data =
      (yolo_msgs__srv__SetClasses_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo_msgs__srv__SetClasses_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo_msgs__srv__SetClasses_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo_msgs__srv__SetClasses_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
yolo_msgs__srv__SetClasses_Response__init(yolo_msgs__srv__SetClasses_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
yolo_msgs__srv__SetClasses_Response__fini(yolo_msgs__srv__SetClasses_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
yolo_msgs__srv__SetClasses_Response__are_equal(const yolo_msgs__srv__SetClasses_Response * lhs, const yolo_msgs__srv__SetClasses_Response * rhs)
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
yolo_msgs__srv__SetClasses_Response__copy(
  const yolo_msgs__srv__SetClasses_Response * input,
  yolo_msgs__srv__SetClasses_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

yolo_msgs__srv__SetClasses_Response *
yolo_msgs__srv__SetClasses_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Response * msg = (yolo_msgs__srv__SetClasses_Response *)allocator.allocate(sizeof(yolo_msgs__srv__SetClasses_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo_msgs__srv__SetClasses_Response));
  bool success = yolo_msgs__srv__SetClasses_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo_msgs__srv__SetClasses_Response__destroy(yolo_msgs__srv__SetClasses_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo_msgs__srv__SetClasses_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo_msgs__srv__SetClasses_Response__Sequence__init(yolo_msgs__srv__SetClasses_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Response * data = NULL;

  if (size) {
    data = (yolo_msgs__srv__SetClasses_Response *)allocator.zero_allocate(size, sizeof(yolo_msgs__srv__SetClasses_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo_msgs__srv__SetClasses_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo_msgs__srv__SetClasses_Response__fini(&data[i - 1]);
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
yolo_msgs__srv__SetClasses_Response__Sequence__fini(yolo_msgs__srv__SetClasses_Response__Sequence * array)
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
      yolo_msgs__srv__SetClasses_Response__fini(&array->data[i]);
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

yolo_msgs__srv__SetClasses_Response__Sequence *
yolo_msgs__srv__SetClasses_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Response__Sequence * array = (yolo_msgs__srv__SetClasses_Response__Sequence *)allocator.allocate(sizeof(yolo_msgs__srv__SetClasses_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo_msgs__srv__SetClasses_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo_msgs__srv__SetClasses_Response__Sequence__destroy(yolo_msgs__srv__SetClasses_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo_msgs__srv__SetClasses_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo_msgs__srv__SetClasses_Response__Sequence__are_equal(const yolo_msgs__srv__SetClasses_Response__Sequence * lhs, const yolo_msgs__srv__SetClasses_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo_msgs__srv__SetClasses_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo_msgs__srv__SetClasses_Response__Sequence__copy(
  const yolo_msgs__srv__SetClasses_Response__Sequence * input,
  yolo_msgs__srv__SetClasses_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo_msgs__srv__SetClasses_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo_msgs__srv__SetClasses_Response * data =
      (yolo_msgs__srv__SetClasses_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo_msgs__srv__SetClasses_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo_msgs__srv__SetClasses_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo_msgs__srv__SetClasses_Response__copy(
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
// #include "yolo_msgs/srv/detail/set_classes__functions.h"

bool
yolo_msgs__srv__SetClasses_Event__init(yolo_msgs__srv__SetClasses_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    yolo_msgs__srv__SetClasses_Event__fini(msg);
    return false;
  }
  // request
  if (!yolo_msgs__srv__SetClasses_Request__Sequence__init(&msg->request, 0)) {
    yolo_msgs__srv__SetClasses_Event__fini(msg);
    return false;
  }
  // response
  if (!yolo_msgs__srv__SetClasses_Response__Sequence__init(&msg->response, 0)) {
    yolo_msgs__srv__SetClasses_Event__fini(msg);
    return false;
  }
  return true;
}

void
yolo_msgs__srv__SetClasses_Event__fini(yolo_msgs__srv__SetClasses_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  yolo_msgs__srv__SetClasses_Request__Sequence__fini(&msg->request);
  // response
  yolo_msgs__srv__SetClasses_Response__Sequence__fini(&msg->response);
}

bool
yolo_msgs__srv__SetClasses_Event__are_equal(const yolo_msgs__srv__SetClasses_Event * lhs, const yolo_msgs__srv__SetClasses_Event * rhs)
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
  if (!yolo_msgs__srv__SetClasses_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!yolo_msgs__srv__SetClasses_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
yolo_msgs__srv__SetClasses_Event__copy(
  const yolo_msgs__srv__SetClasses_Event * input,
  yolo_msgs__srv__SetClasses_Event * output)
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
  if (!yolo_msgs__srv__SetClasses_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!yolo_msgs__srv__SetClasses_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

yolo_msgs__srv__SetClasses_Event *
yolo_msgs__srv__SetClasses_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Event * msg = (yolo_msgs__srv__SetClasses_Event *)allocator.allocate(sizeof(yolo_msgs__srv__SetClasses_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yolo_msgs__srv__SetClasses_Event));
  bool success = yolo_msgs__srv__SetClasses_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yolo_msgs__srv__SetClasses_Event__destroy(yolo_msgs__srv__SetClasses_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yolo_msgs__srv__SetClasses_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yolo_msgs__srv__SetClasses_Event__Sequence__init(yolo_msgs__srv__SetClasses_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Event * data = NULL;

  if (size) {
    data = (yolo_msgs__srv__SetClasses_Event *)allocator.zero_allocate(size, sizeof(yolo_msgs__srv__SetClasses_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yolo_msgs__srv__SetClasses_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yolo_msgs__srv__SetClasses_Event__fini(&data[i - 1]);
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
yolo_msgs__srv__SetClasses_Event__Sequence__fini(yolo_msgs__srv__SetClasses_Event__Sequence * array)
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
      yolo_msgs__srv__SetClasses_Event__fini(&array->data[i]);
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

yolo_msgs__srv__SetClasses_Event__Sequence *
yolo_msgs__srv__SetClasses_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yolo_msgs__srv__SetClasses_Event__Sequence * array = (yolo_msgs__srv__SetClasses_Event__Sequence *)allocator.allocate(sizeof(yolo_msgs__srv__SetClasses_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yolo_msgs__srv__SetClasses_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yolo_msgs__srv__SetClasses_Event__Sequence__destroy(yolo_msgs__srv__SetClasses_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yolo_msgs__srv__SetClasses_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yolo_msgs__srv__SetClasses_Event__Sequence__are_equal(const yolo_msgs__srv__SetClasses_Event__Sequence * lhs, const yolo_msgs__srv__SetClasses_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yolo_msgs__srv__SetClasses_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yolo_msgs__srv__SetClasses_Event__Sequence__copy(
  const yolo_msgs__srv__SetClasses_Event__Sequence * input,
  yolo_msgs__srv__SetClasses_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yolo_msgs__srv__SetClasses_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yolo_msgs__srv__SetClasses_Event * data =
      (yolo_msgs__srv__SetClasses_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yolo_msgs__srv__SetClasses_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yolo_msgs__srv__SetClasses_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yolo_msgs__srv__SetClasses_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
