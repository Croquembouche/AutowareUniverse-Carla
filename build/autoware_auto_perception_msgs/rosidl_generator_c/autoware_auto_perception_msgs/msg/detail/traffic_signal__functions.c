// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lights`
#include "autoware_auto_perception_msgs/msg/detail/traffic_light__functions.h"

bool
autoware_auto_perception_msgs__msg__TrafficSignal__init(autoware_auto_perception_msgs__msg__TrafficSignal * msg)
{
  if (!msg) {
    return false;
  }
  // map_primitive_id
  msg->map_primitive_id = 0l;
  // lights
  if (!autoware_auto_perception_msgs__msg__TrafficLight__Sequence__init(&msg->lights, 0)) {
    autoware_auto_perception_msgs__msg__TrafficSignal__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_perception_msgs__msg__TrafficSignal__fini(autoware_auto_perception_msgs__msg__TrafficSignal * msg)
{
  if (!msg) {
    return;
  }
  // map_primitive_id
  // lights
  autoware_auto_perception_msgs__msg__TrafficLight__Sequence__fini(&msg->lights);
}

bool
autoware_auto_perception_msgs__msg__TrafficSignal__are_equal(const autoware_auto_perception_msgs__msg__TrafficSignal * lhs, const autoware_auto_perception_msgs__msg__TrafficSignal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map_primitive_id
  if (lhs->map_primitive_id != rhs->map_primitive_id) {
    return false;
  }
  // lights
  if (!autoware_auto_perception_msgs__msg__TrafficLight__Sequence__are_equal(
      &(lhs->lights), &(rhs->lights)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrafficSignal__copy(
  const autoware_auto_perception_msgs__msg__TrafficSignal * input,
  autoware_auto_perception_msgs__msg__TrafficSignal * output)
{
  if (!input || !output) {
    return false;
  }
  // map_primitive_id
  output->map_primitive_id = input->map_primitive_id;
  // lights
  if (!autoware_auto_perception_msgs__msg__TrafficLight__Sequence__copy(
      &(input->lights), &(output->lights)))
  {
    return false;
  }
  return true;
}

autoware_auto_perception_msgs__msg__TrafficSignal *
autoware_auto_perception_msgs__msg__TrafficSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrafficSignal * msg = (autoware_auto_perception_msgs__msg__TrafficSignal *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__TrafficSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__TrafficSignal));
  bool success = autoware_auto_perception_msgs__msg__TrafficSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__TrafficSignal__destroy(autoware_auto_perception_msgs__msg__TrafficSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_perception_msgs__msg__TrafficSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__init(autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrafficSignal * data = NULL;

  if (size) {
    data = (autoware_auto_perception_msgs__msg__TrafficSignal *)allocator.zero_allocate(size, sizeof(autoware_auto_perception_msgs__msg__TrafficSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__TrafficSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__TrafficSignal__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__fini(autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * array)
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
      autoware_auto_perception_msgs__msg__TrafficSignal__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__TrafficSignal__Sequence *
autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * array = (autoware_auto_perception_msgs__msg__TrafficSignal__Sequence *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__TrafficSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__destroy(autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__are_equal(const autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * lhs, const autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrafficSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__TrafficSignal__Sequence__copy(
  const autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * input,
  autoware_auto_perception_msgs__msg__TrafficSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__TrafficSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_perception_msgs__msg__TrafficSignal * data =
      (autoware_auto_perception_msgs__msg__TrafficSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__TrafficSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__TrafficSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__TrafficSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
