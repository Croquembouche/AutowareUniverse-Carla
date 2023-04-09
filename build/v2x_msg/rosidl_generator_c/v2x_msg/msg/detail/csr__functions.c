// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/CSR.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/csr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `requests`
#include "v2x_msg/msg/detail/requested_item__functions.h"

bool
v2x_msg__msg__CSR__init(v2x_msg__msg__CSR * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // msgcnt
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    v2x_msg__msg__CSR__fini(msg);
    return false;
  }
  // requests
  if (!v2x_msg__msg__RequestedItem__Sequence__init(&msg->requests, 0)) {
    v2x_msg__msg__CSR__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__CSR__fini(v2x_msg__msg__CSR * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // msgcnt
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // requests
  v2x_msg__msg__RequestedItem__Sequence__fini(&msg->requests);
}

bool
v2x_msg__msg__CSR__are_equal(const v2x_msg__msg__CSR * lhs, const v2x_msg__msg__CSR * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // msgcnt
  if (lhs->msgcnt != rhs->msgcnt) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // requests
  if (!v2x_msg__msg__RequestedItem__Sequence__are_equal(
      &(lhs->requests), &(rhs->requests)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__CSR__copy(
  const v2x_msg__msg__CSR * input,
  v2x_msg__msg__CSR * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // msgcnt
  output->msgcnt = input->msgcnt;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // requests
  if (!v2x_msg__msg__RequestedItem__Sequence__copy(
      &(input->requests), &(output->requests)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__CSR *
v2x_msg__msg__CSR__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__CSR * msg = (v2x_msg__msg__CSR *)allocator.allocate(sizeof(v2x_msg__msg__CSR), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__CSR));
  bool success = v2x_msg__msg__CSR__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__CSR__destroy(v2x_msg__msg__CSR * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__CSR__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__CSR__Sequence__init(v2x_msg__msg__CSR__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__CSR * data = NULL;

  if (size) {
    data = (v2x_msg__msg__CSR *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__CSR), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__CSR__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__CSR__fini(&data[i - 1]);
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
v2x_msg__msg__CSR__Sequence__fini(v2x_msg__msg__CSR__Sequence * array)
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
      v2x_msg__msg__CSR__fini(&array->data[i]);
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

v2x_msg__msg__CSR__Sequence *
v2x_msg__msg__CSR__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__CSR__Sequence * array = (v2x_msg__msg__CSR__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__CSR__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__CSR__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__CSR__Sequence__destroy(v2x_msg__msg__CSR__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__CSR__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__CSR__Sequence__are_equal(const v2x_msg__msg__CSR__Sequence * lhs, const v2x_msg__msg__CSR__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__CSR__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__CSR__Sequence__copy(
  const v2x_msg__msg__CSR__Sequence * input,
  v2x_msg__msg__CSR__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__CSR);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__CSR * data =
      (v2x_msg__msg__CSR *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__CSR__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__CSR__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__CSR__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
