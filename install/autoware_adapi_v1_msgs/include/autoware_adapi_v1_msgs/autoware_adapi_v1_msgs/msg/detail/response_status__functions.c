// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_adapi_v1_msgs:msg/ResponseStatus.idl
// generated code does not contain a copyright notice
#include "autoware_adapi_v1_msgs/msg/detail/response_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_adapi_v1_msgs__msg__ResponseStatus__init(autoware_adapi_v1_msgs__msg__ResponseStatus * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    autoware_adapi_v1_msgs__msg__ResponseStatus__fini(msg);
    return false;
  }
  return true;
}

void
autoware_adapi_v1_msgs__msg__ResponseStatus__fini(autoware_adapi_v1_msgs__msg__ResponseStatus * msg)
{
  if (!msg) {
    return;
  }
  // success
  // code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
autoware_adapi_v1_msgs__msg__ResponseStatus__are_equal(const autoware_adapi_v1_msgs__msg__ResponseStatus * lhs, const autoware_adapi_v1_msgs__msg__ResponseStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__ResponseStatus__copy(
  const autoware_adapi_v1_msgs__msg__ResponseStatus * input,
  autoware_adapi_v1_msgs__msg__ResponseStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // code
  output->code = input->code;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

autoware_adapi_v1_msgs__msg__ResponseStatus *
autoware_adapi_v1_msgs__msg__ResponseStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__ResponseStatus * msg = (autoware_adapi_v1_msgs__msg__ResponseStatus *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__ResponseStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_adapi_v1_msgs__msg__ResponseStatus));
  bool success = autoware_adapi_v1_msgs__msg__ResponseStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_adapi_v1_msgs__msg__ResponseStatus__destroy(autoware_adapi_v1_msgs__msg__ResponseStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_adapi_v1_msgs__msg__ResponseStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__init(autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__ResponseStatus * data = NULL;

  if (size) {
    data = (autoware_adapi_v1_msgs__msg__ResponseStatus *)allocator.zero_allocate(size, sizeof(autoware_adapi_v1_msgs__msg__ResponseStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_adapi_v1_msgs__msg__ResponseStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_adapi_v1_msgs__msg__ResponseStatus__fini(&data[i - 1]);
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
autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__fini(autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * array)
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
      autoware_adapi_v1_msgs__msg__ResponseStatus__fini(&array->data[i]);
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

autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence *
autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * array = (autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence *)allocator.allocate(sizeof(autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__destroy(autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__are_equal(const autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * lhs, const autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__ResponseStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence__copy(
  const autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * input,
  autoware_adapi_v1_msgs__msg__ResponseStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_adapi_v1_msgs__msg__ResponseStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_adapi_v1_msgs__msg__ResponseStatus * data =
      (autoware_adapi_v1_msgs__msg__ResponseStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_adapi_v1_msgs__msg__ResponseStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_adapi_v1_msgs__msg__ResponseStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_adapi_v1_msgs__msg__ResponseStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
