// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/content__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `advisory`
#include "v2x_msg/msg/detail/iti_scodesandtext__functions.h"
// Member `workzone`
#include "v2x_msg/msg/detail/work_zone__functions.h"
// Member `genericsign`
#include "v2x_msg/msg/detail/generic_signage__functions.h"
// Member `speedlimit`
#include "v2x_msg/msg/detail/itis_speed_limit__functions.h"
// Member `exitservice`
#include "v2x_msg/msg/detail/exit_service__functions.h"

bool
v2x_msg__msg__Content__init(v2x_msg__msg__Content * msg)
{
  if (!msg) {
    return false;
  }
  // advisory
  if (!v2x_msg__msg__ITIScodesandtext__Sequence__init(&msg->advisory, 0)) {
    v2x_msg__msg__Content__fini(msg);
    return false;
  }
  // workzone
  if (!v2x_msg__msg__WorkZone__Sequence__init(&msg->workzone, 0)) {
    v2x_msg__msg__Content__fini(msg);
    return false;
  }
  // genericsign
  if (!v2x_msg__msg__GenericSignage__Sequence__init(&msg->genericsign, 0)) {
    v2x_msg__msg__Content__fini(msg);
    return false;
  }
  // speedlimit
  if (!v2x_msg__msg__ITISSpeedLimit__Sequence__init(&msg->speedlimit, 0)) {
    v2x_msg__msg__Content__fini(msg);
    return false;
  }
  // exitservice
  if (!v2x_msg__msg__ExitService__Sequence__init(&msg->exitservice, 0)) {
    v2x_msg__msg__Content__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__Content__fini(v2x_msg__msg__Content * msg)
{
  if (!msg) {
    return;
  }
  // advisory
  v2x_msg__msg__ITIScodesandtext__Sequence__fini(&msg->advisory);
  // workzone
  v2x_msg__msg__WorkZone__Sequence__fini(&msg->workzone);
  // genericsign
  v2x_msg__msg__GenericSignage__Sequence__fini(&msg->genericsign);
  // speedlimit
  v2x_msg__msg__ITISSpeedLimit__Sequence__fini(&msg->speedlimit);
  // exitservice
  v2x_msg__msg__ExitService__Sequence__fini(&msg->exitservice);
}

bool
v2x_msg__msg__Content__are_equal(const v2x_msg__msg__Content * lhs, const v2x_msg__msg__Content * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // advisory
  if (!v2x_msg__msg__ITIScodesandtext__Sequence__are_equal(
      &(lhs->advisory), &(rhs->advisory)))
  {
    return false;
  }
  // workzone
  if (!v2x_msg__msg__WorkZone__Sequence__are_equal(
      &(lhs->workzone), &(rhs->workzone)))
  {
    return false;
  }
  // genericsign
  if (!v2x_msg__msg__GenericSignage__Sequence__are_equal(
      &(lhs->genericsign), &(rhs->genericsign)))
  {
    return false;
  }
  // speedlimit
  if (!v2x_msg__msg__ITISSpeedLimit__Sequence__are_equal(
      &(lhs->speedlimit), &(rhs->speedlimit)))
  {
    return false;
  }
  // exitservice
  if (!v2x_msg__msg__ExitService__Sequence__are_equal(
      &(lhs->exitservice), &(rhs->exitservice)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__Content__copy(
  const v2x_msg__msg__Content * input,
  v2x_msg__msg__Content * output)
{
  if (!input || !output) {
    return false;
  }
  // advisory
  if (!v2x_msg__msg__ITIScodesandtext__Sequence__copy(
      &(input->advisory), &(output->advisory)))
  {
    return false;
  }
  // workzone
  if (!v2x_msg__msg__WorkZone__Sequence__copy(
      &(input->workzone), &(output->workzone)))
  {
    return false;
  }
  // genericsign
  if (!v2x_msg__msg__GenericSignage__Sequence__copy(
      &(input->genericsign), &(output->genericsign)))
  {
    return false;
  }
  // speedlimit
  if (!v2x_msg__msg__ITISSpeedLimit__Sequence__copy(
      &(input->speedlimit), &(output->speedlimit)))
  {
    return false;
  }
  // exitservice
  if (!v2x_msg__msg__ExitService__Sequence__copy(
      &(input->exitservice), &(output->exitservice)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__Content *
v2x_msg__msg__Content__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Content * msg = (v2x_msg__msg__Content *)allocator.allocate(sizeof(v2x_msg__msg__Content), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__Content));
  bool success = v2x_msg__msg__Content__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__Content__destroy(v2x_msg__msg__Content * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__Content__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__Content__Sequence__init(v2x_msg__msg__Content__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Content * data = NULL;

  if (size) {
    data = (v2x_msg__msg__Content *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__Content), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__Content__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__Content__fini(&data[i - 1]);
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
v2x_msg__msg__Content__Sequence__fini(v2x_msg__msg__Content__Sequence * array)
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
      v2x_msg__msg__Content__fini(&array->data[i]);
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

v2x_msg__msg__Content__Sequence *
v2x_msg__msg__Content__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__Content__Sequence * array = (v2x_msg__msg__Content__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__Content__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__Content__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__Content__Sequence__destroy(v2x_msg__msg__Content__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__Content__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__Content__Sequence__are_equal(const v2x_msg__msg__Content__Sequence * lhs, const v2x_msg__msg__Content__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__Content__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__Content__Sequence__copy(
  const v2x_msg__msg__Content__Sequence * input,
  v2x_msg__msg__Content__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__Content);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__Content * data =
      (v2x_msg__msg__Content *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__Content__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__Content__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__Content__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
