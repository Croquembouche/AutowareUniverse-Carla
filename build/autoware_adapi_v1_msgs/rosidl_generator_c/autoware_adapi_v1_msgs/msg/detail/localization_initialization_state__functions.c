// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/LocalizationInitializationState.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/localization_initialization_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__init(autoware_adapi_v1_msgs__msg__LocalizationInitializationState * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    autoware_adapi_v1_msgs__msg__LocalizationInitializationState__fini(msg);
    return false;
  }
  // state
  return true;
}

void
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__fini(autoware_adapi_v1_msgs__msg__LocalizationInitializationState * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // state
}

bool
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__are_equal(const autoware_adapi_v1_msgs__msg__LocalizationInitializationState * lhs, const autoware_adapi_v1_msgs__msg__LocalizationInitializationState * rhs)
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
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__copy(
  const autoware_adapi_v1_msgs__msg__LocalizationInitializationState * input,
  autoware_adapi_v1_msgs__msg__LocalizationInitializationState * output)
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
  // state
  output->state = input->state;
  return true;
}

autoware_adapi_v1_msgs__msg__LocalizationInitializationState *
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__LocalizationInitializationState * msg = (autoware_adapi_v1_msgs__msg__LocalizationInitializationState *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__LocalizationInitializationState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__LocalizationInitializationState));
  bool success = autoware_adapi_v1_msgs__msg__LocalizationInitializationState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__destroy(autoware_adapi_v1_msgs__msg__LocalizationInitializationState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__LocalizationInitializationState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__init(autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__LocalizationInitializationState * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__LocalizationInitializationState *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__LocalizationInitializationState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__LocalizationInitializationState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__LocalizationInitializationState__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__fini(autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__LocalizationInitializationState__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence *
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * array = (autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__destroy(autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * lhs, const autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__LocalizationInitializationState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * input,
  autoware_adapi_v1_msgs__msg__LocalizationInitializationState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__LocalizationInitializationState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__LocalizationInitializationState * data =
      (autoware_adapi_v1_msgs__msg__LocalizationInitializationState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__LocalizationInitializationState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__LocalizationInitializationState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__LocalizationInitializationState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
