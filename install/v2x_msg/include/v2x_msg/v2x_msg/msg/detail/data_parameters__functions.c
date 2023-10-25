// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/DataParameters.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/data_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `processmethod`
// Member `processagency`
// Member `lastcheckeddate`
// Member `geoidused`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msg__msg__DataParameters__init(v2x_msg__msg__DataParameters * msg)
{
  if (!msg) {
    return false;
  }
  // processmethod
  if (!rosidl_runtime_c__String__init(&msg->processmethod)) {
    v2x_msg__msg__DataParameters__fini(msg);
    return false;
  }
  // processagency
  if (!rosidl_runtime_c__String__init(&msg->processagency)) {
    v2x_msg__msg__DataParameters__fini(msg);
    return false;
  }
  // lastcheckeddate
  if (!rosidl_runtime_c__String__init(&msg->lastcheckeddate)) {
    v2x_msg__msg__DataParameters__fini(msg);
    return false;
  }
  // geoidused
  if (!rosidl_runtime_c__String__init(&msg->geoidused)) {
    v2x_msg__msg__DataParameters__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__DataParameters__fini(v2x_msg__msg__DataParameters * msg)
{
  if (!msg) {
    return;
  }
  // processmethod
  rosidl_runtime_c__String__fini(&msg->processmethod);
  // processagency
  rosidl_runtime_c__String__fini(&msg->processagency);
  // lastcheckeddate
  rosidl_runtime_c__String__fini(&msg->lastcheckeddate);
  // geoidused
  rosidl_runtime_c__String__fini(&msg->geoidused);
}

bool
v2x_msg__msg__DataParameters__are_equal(const v2x_msg__msg__DataParameters * lhs, const v2x_msg__msg__DataParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // processmethod
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->processmethod), &(rhs->processmethod)))
  {
    return false;
  }
  // processagency
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->processagency), &(rhs->processagency)))
  {
    return false;
  }
  // lastcheckeddate
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lastcheckeddate), &(rhs->lastcheckeddate)))
  {
    return false;
  }
  // geoidused
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->geoidused), &(rhs->geoidused)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__DataParameters__copy(
  const v2x_msg__msg__DataParameters * input,
  v2x_msg__msg__DataParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // processmethod
  if (!rosidl_runtime_c__String__copy(
      &(input->processmethod), &(output->processmethod)))
  {
    return false;
  }
  // processagency
  if (!rosidl_runtime_c__String__copy(
      &(input->processagency), &(output->processagency)))
  {
    return false;
  }
  // lastcheckeddate
  if (!rosidl_runtime_c__String__copy(
      &(input->lastcheckeddate), &(output->lastcheckeddate)))
  {
    return false;
  }
  // geoidused
  if (!rosidl_runtime_c__String__copy(
      &(input->geoidused), &(output->geoidused)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__DataParameters *
v2x_msg__msg__DataParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__DataParameters * msg = (v2x_msg__msg__DataParameters *)allocator.allocate(sizeof(v2x_msg__msg__DataParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__DataParameters));
  bool success = v2x_msg__msg__DataParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__DataParameters__destroy(v2x_msg__msg__DataParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__DataParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__DataParameters__Sequence__init(v2x_msg__msg__DataParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__DataParameters * data = NULL;

  if (size) {
    data = (v2x_msg__msg__DataParameters *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__DataParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__DataParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__DataParameters__fini(&data[i - 1]);
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
v2x_msg__msg__DataParameters__Sequence__fini(v2x_msg__msg__DataParameters__Sequence * array)
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
      v2x_msg__msg__DataParameters__fini(&array->data[i]);
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

v2x_msg__msg__DataParameters__Sequence *
v2x_msg__msg__DataParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__DataParameters__Sequence * array = (v2x_msg__msg__DataParameters__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__DataParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__DataParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__DataParameters__Sequence__destroy(v2x_msg__msg__DataParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__DataParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__DataParameters__Sequence__are_equal(const v2x_msg__msg__DataParameters__Sequence * lhs, const v2x_msg__msg__DataParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__DataParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__DataParameters__Sequence__copy(
  const v2x_msg__msg__DataParameters__Sequence * input,
  v2x_msg__msg__DataParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__DataParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__DataParameters * data =
      (v2x_msg__msg__DataParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__DataParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__DataParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__DataParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
