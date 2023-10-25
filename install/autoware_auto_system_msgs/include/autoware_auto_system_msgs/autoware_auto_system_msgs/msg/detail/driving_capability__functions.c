// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_system_msgs:msg/DrivingCapability.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/driving_capability__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `autonomous_driving`
// Member `remote_control`
#include "autoware_auto_system_msgs/msg/detail/hazard_status__functions.h"

bool
autoware_auto_system_msgs__msg__DrivingCapability__init(autoware_auto_system_msgs__msg__DrivingCapability * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_auto_system_msgs__msg__DrivingCapability__fini(msg);
    return false;
  }
  // autonomous_driving
  if (!autoware_auto_system_msgs__msg__HazardStatus__init(&msg->autonomous_driving)) {
    autoware_auto_system_msgs__msg__DrivingCapability__fini(msg);
    return false;
  }
  // remote_control
  if (!autoware_auto_system_msgs__msg__HazardStatus__init(&msg->remote_control)) {
    autoware_auto_system_msgs__msg__DrivingCapability__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_system_msgs__msg__DrivingCapability__fini(autoware_auto_system_msgs__msg__DrivingCapability * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // autonomous_driving
  autoware_auto_system_msgs__msg__HazardStatus__fini(&msg->autonomous_driving);
  // remote_control
  autoware_auto_system_msgs__msg__HazardStatus__fini(&msg->remote_control);
}

bool
autoware_auto_system_msgs__msg__DrivingCapability__are_equal(const autoware_auto_system_msgs__msg__DrivingCapability * lhs, const autoware_auto_system_msgs__msg__DrivingCapability * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // autonomous_driving
  if (!autoware_auto_system_msgs__msg__HazardStatus__are_equal(
      &(lhs->autonomous_driving), &(rhs->autonomous_driving)))
  {
    return false;
  }
  // remote_control
  if (!autoware_auto_system_msgs__msg__HazardStatus__are_equal(
      &(lhs->remote_control), &(rhs->remote_control)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__DrivingCapability__copy(
  const autoware_auto_system_msgs__msg__DrivingCapability * input,
  autoware_auto_system_msgs__msg__DrivingCapability * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // autonomous_driving
  if (!autoware_auto_system_msgs__msg__HazardStatus__copy(
      &(input->autonomous_driving), &(output->autonomous_driving)))
  {
    return false;
  }
  // remote_control
  if (!autoware_auto_system_msgs__msg__HazardStatus__copy(
      &(input->remote_control), &(output->remote_control)))
  {
    return false;
  }
  return true;
}

autoware_auto_system_msgs__msg__DrivingCapability *
autoware_auto_system_msgs__msg__DrivingCapability__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__DrivingCapability * msg = (autoware_auto_system_msgs__msg__DrivingCapability *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__DrivingCapability), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_system_msgs__msg__DrivingCapability));
  bool success = autoware_auto_system_msgs__msg__DrivingCapability__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_system_msgs__msg__DrivingCapability__destroy(autoware_auto_system_msgs__msg__DrivingCapability * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_system_msgs__msg__DrivingCapability__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_system_msgs__msg__DrivingCapability__Sequence__init(autoware_auto_system_msgs__msg__DrivingCapability__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__DrivingCapability * data = NULL;

  if (size) {
    data = (autoware_auto_system_msgs__msg__DrivingCapability *)allocator.zero_allocate(size, sizeof(autoware_auto_system_msgs__msg__DrivingCapability), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_system_msgs__msg__DrivingCapability__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_system_msgs__msg__DrivingCapability__fini(&data[i - 1]);
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
autoware_auto_system_msgs__msg__DrivingCapability__Sequence__fini(autoware_auto_system_msgs__msg__DrivingCapability__Sequence * array)
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
      autoware_auto_system_msgs__msg__DrivingCapability__fini(&array->data[i]);
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

autoware_auto_system_msgs__msg__DrivingCapability__Sequence *
autoware_auto_system_msgs__msg__DrivingCapability__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__DrivingCapability__Sequence * array = (autoware_auto_system_msgs__msg__DrivingCapability__Sequence *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__DrivingCapability__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_system_msgs__msg__DrivingCapability__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_system_msgs__msg__DrivingCapability__Sequence__destroy(autoware_auto_system_msgs__msg__DrivingCapability__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_system_msgs__msg__DrivingCapability__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_system_msgs__msg__DrivingCapability__Sequence__are_equal(const autoware_auto_system_msgs__msg__DrivingCapability__Sequence * lhs, const autoware_auto_system_msgs__msg__DrivingCapability__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_system_msgs__msg__DrivingCapability__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__DrivingCapability__Sequence__copy(
  const autoware_auto_system_msgs__msg__DrivingCapability__Sequence * input,
  autoware_auto_system_msgs__msg__DrivingCapability__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_system_msgs__msg__DrivingCapability);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_system_msgs__msg__DrivingCapability * data =
      (autoware_auto_system_msgs__msg__DrivingCapability *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_system_msgs__msg__DrivingCapability__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_system_msgs__msg__DrivingCapability__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_system_msgs__msg__DrivingCapability__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
