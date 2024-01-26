// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:srv/SetRoute.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/srv/detail/set_route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `option`
#include "autoware_adapi_v1_msgs/msg/detail/route_option__functions.h"
// Member `goal`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `segments`
#include "autoware_adapi_v1_msgs/msg/detail/route_segment__functions.h"

bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__init(autoware_adapi_v1_msgs__srv__SetRoute_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(msg);
    return false;
  }
  // option
  if (!autoware_adapi_v1_msgs__msg__RouteOption__init(&msg->option)) {
    autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(msg);
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose__init(&msg->goal)) {
    autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(msg);
    return false;
  }
  // segments
  if (!autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__init(&msg->segments, 0)) {
    autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(autoware_adapi_v1_msgs__srv__SetRoute_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // option
  autoware_adapi_v1_msgs__msg__RouteOption__fini(&msg->option);
  // goal
  geometry_msgs__msg__Pose__fini(&msg->goal);
  // segments
  autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__fini(&msg->segments);
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Request * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // option
  if (!autoware_adapi_v1_msgs__msg__RouteOption__are_equal(
      &(lhs->option), &(rhs->option)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  // segments
  if (!autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__are_equal(
      &(lhs->segments), &(rhs->segments)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Request * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // option
  if (!autoware_adapi_v1_msgs__msg__RouteOption__copy(
      &(input->option), &(output->option)))
  {
    return false;
  }
  // goal
  if (!geometry_msgs__msg__Pose__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  // segments
  if (!autoware_adapi_v1_msgs__msg__RouteSegment__Sequence__copy(
      &(input->segments), &(output->segments)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__srv__SetRoute_Request *
autoware_adapi_v1_msgs__srv__SetRoute_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetRoute_Request * msg = (autoware_adapi_v1_msgs__srv__SetRoute_Request *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Request));
  bool success = autoware_adapi_v1_msgs__srv__SetRoute_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__SetRoute_Request__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__init(autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetRoute_Request * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__SetRoute_Request *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__SetRoute_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__fini(autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * array)
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
      autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence *
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * array = (autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__SetRoute_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__srv__SetRoute_Request * data =
      (autoware_adapi_v1_msgs__srv__SetRoute_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__SetRoute_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__SetRoute_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__SetRoute_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"

bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__init(autoware_adapi_v1_msgs__srv__SetRoute_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__init(&msg->status)) {
    autoware_adapi_v1_msgs__srv__SetRoute_Response__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__srv__SetRoute_Response__fini(autoware_adapi_v1_msgs__srv__SetRoute_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  autoware_adapi_v1_msgs__msg__ResponseStatus__fini(&msg->status);
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Response * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Response * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!autoware_adapi_v1_msgs__msg__ResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__srv__SetRoute_Response *
autoware_adapi_v1_msgs__srv__SetRoute_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetRoute_Response * msg = (autoware_adapi_v1_msgs__srv__SetRoute_Response *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Response));
  bool success = autoware_adapi_v1_msgs__srv__SetRoute_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__srv__SetRoute_Response__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__srv__SetRoute_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__init(autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetRoute_Response * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__srv__SetRoute_Response *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__srv__SetRoute_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__srv__SetRoute_Response__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__fini(autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * array)
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
      autoware_adapi_v1_msgs__srv__SetRoute_Response__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence *
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * array = (autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__destroy(autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__are_equal(const autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * lhs, const autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__SetRoute_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence__copy(
  const autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * input,
  autoware_adapi_v1_msgs__srv__SetRoute_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__srv__SetRoute_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__srv__SetRoute_Response * data =
      (autoware_adapi_v1_msgs__srv__SetRoute_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__srv__SetRoute_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__srv__SetRoute_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__srv__SetRoute_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
