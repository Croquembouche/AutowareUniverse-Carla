// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/NodeAttributeSetLL.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/node_attribute_set_ll__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `localnode`
// Member `disabled`
// Member `enabled`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `data`
#include "v2x_msg/msg/detail/lane_data_attribute__functions.h"

bool
v2x_msg__msg__NodeAttributeSetLL__init(v2x_msg__msg__NodeAttributeSetLL * msg)
{
  if (!msg) {
    return false;
  }
  // localnode
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->localnode, 0)) {
    v2x_msg__msg__NodeAttributeSetLL__fini(msg);
    return false;
  }
  // disabled
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->disabled, 0)) {
    v2x_msg__msg__NodeAttributeSetLL__fini(msg);
    return false;
  }
  // enabled
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->enabled, 0)) {
    v2x_msg__msg__NodeAttributeSetLL__fini(msg);
    return false;
  }
  // data
  if (!v2x_msg__msg__LaneDataAttribute__Sequence__init(&msg->data, 0)) {
    v2x_msg__msg__NodeAttributeSetLL__fini(msg);
    return false;
  }
  // dwidth
  // delevation
  return true;
}

void
v2x_msg__msg__NodeAttributeSetLL__fini(v2x_msg__msg__NodeAttributeSetLL * msg)
{
  if (!msg) {
    return;
  }
  // localnode
  rosidl_runtime_c__int64__Sequence__fini(&msg->localnode);
  // disabled
  rosidl_runtime_c__int64__Sequence__fini(&msg->disabled);
  // enabled
  rosidl_runtime_c__int64__Sequence__fini(&msg->enabled);
  // data
  v2x_msg__msg__LaneDataAttribute__Sequence__fini(&msg->data);
  // dwidth
  // delevation
}

bool
v2x_msg__msg__NodeAttributeSetLL__are_equal(const v2x_msg__msg__NodeAttributeSetLL * lhs, const v2x_msg__msg__NodeAttributeSetLL * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // localnode
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->localnode), &(rhs->localnode)))
  {
    return false;
  }
  // disabled
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->disabled), &(rhs->disabled)))
  {
    return false;
  }
  // enabled
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->enabled), &(rhs->enabled)))
  {
    return false;
  }
  // data
  if (!v2x_msg__msg__LaneDataAttribute__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // dwidth
  if (lhs->dwidth != rhs->dwidth) {
    return false;
  }
  // delevation
  if (lhs->delevation != rhs->delevation) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__NodeAttributeSetLL__copy(
  const v2x_msg__msg__NodeAttributeSetLL * input,
  v2x_msg__msg__NodeAttributeSetLL * output)
{
  if (!input || !output) {
    return false;
  }
  // localnode
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->localnode), &(output->localnode)))
  {
    return false;
  }
  // disabled
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->disabled), &(output->disabled)))
  {
    return false;
  }
  // enabled
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->enabled), &(output->enabled)))
  {
    return false;
  }
  // data
  if (!v2x_msg__msg__LaneDataAttribute__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // dwidth
  output->dwidth = input->dwidth;
  // delevation
  output->delevation = input->delevation;
  return true;
}

v2x_msg__msg__NodeAttributeSetLL *
v2x_msg__msg__NodeAttributeSetLL__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__NodeAttributeSetLL * msg = (v2x_msg__msg__NodeAttributeSetLL *)allocator.allocate(sizeof(v2x_msg__msg__NodeAttributeSetLL), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__NodeAttributeSetLL));
  bool success = v2x_msg__msg__NodeAttributeSetLL__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__NodeAttributeSetLL__destroy(v2x_msg__msg__NodeAttributeSetLL * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__NodeAttributeSetLL__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__NodeAttributeSetLL__Sequence__init(v2x_msg__msg__NodeAttributeSetLL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__NodeAttributeSetLL * data = NULL;

  if (size) {
    data = (v2x_msg__msg__NodeAttributeSetLL *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__NodeAttributeSetLL), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__NodeAttributeSetLL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__NodeAttributeSetLL__fini(&data[i - 1]);
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
v2x_msg__msg__NodeAttributeSetLL__Sequence__fini(v2x_msg__msg__NodeAttributeSetLL__Sequence * array)
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
      v2x_msg__msg__NodeAttributeSetLL__fini(&array->data[i]);
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

v2x_msg__msg__NodeAttributeSetLL__Sequence *
v2x_msg__msg__NodeAttributeSetLL__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__NodeAttributeSetLL__Sequence * array = (v2x_msg__msg__NodeAttributeSetLL__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__NodeAttributeSetLL__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__NodeAttributeSetLL__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__NodeAttributeSetLL__Sequence__destroy(v2x_msg__msg__NodeAttributeSetLL__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__NodeAttributeSetLL__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__NodeAttributeSetLL__Sequence__are_equal(const v2x_msg__msg__NodeAttributeSetLL__Sequence * lhs, const v2x_msg__msg__NodeAttributeSetLL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__NodeAttributeSetLL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__NodeAttributeSetLL__Sequence__copy(
  const v2x_msg__msg__NodeAttributeSetLL__Sequence * input,
  v2x_msg__msg__NodeAttributeSetLL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__NodeAttributeSetLL);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__NodeAttributeSetLL * data =
      (v2x_msg__msg__NodeAttributeSetLL *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__NodeAttributeSetLL__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__NodeAttributeSetLL__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__NodeAttributeSetLL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
