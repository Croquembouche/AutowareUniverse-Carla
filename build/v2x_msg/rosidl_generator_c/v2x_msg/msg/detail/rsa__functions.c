// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/RSA.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/rsa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `desrciption`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `priority`
// Member `heading`
// Member `furtherinfoid`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "v2x_msg/msg/detail/full_position_vector__functions.h"

bool
v2x_msg__msg__RSA__init(v2x_msg__msg__RSA * msg)
{
  if (!msg) {
    return false;
  }
  // msgcnt
  // timestamp
  // typeevent
  // desrciption
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->desrciption, 0)) {
    v2x_msg__msg__RSA__fini(msg);
    return false;
  }
  // priority
  if (!rosidl_runtime_c__String__init(&msg->priority)) {
    v2x_msg__msg__RSA__fini(msg);
    return false;
  }
  // heading
  if (!rosidl_runtime_c__String__init(&msg->heading)) {
    v2x_msg__msg__RSA__fini(msg);
    return false;
  }
  // extent
  // position
  if (!v2x_msg__msg__FullPositionVector__init(&msg->position)) {
    v2x_msg__msg__RSA__fini(msg);
    return false;
  }
  // furtherinfoid
  if (!rosidl_runtime_c__String__init(&msg->furtherinfoid)) {
    v2x_msg__msg__RSA__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__RSA__fini(v2x_msg__msg__RSA * msg)
{
  if (!msg) {
    return;
  }
  // msgcnt
  // timestamp
  // typeevent
  // desrciption
  rosidl_runtime_c__int64__Sequence__fini(&msg->desrciption);
  // priority
  rosidl_runtime_c__String__fini(&msg->priority);
  // heading
  rosidl_runtime_c__String__fini(&msg->heading);
  // extent
  // position
  v2x_msg__msg__FullPositionVector__fini(&msg->position);
  // furtherinfoid
  rosidl_runtime_c__String__fini(&msg->furtherinfoid);
}

bool
v2x_msg__msg__RSA__are_equal(const v2x_msg__msg__RSA * lhs, const v2x_msg__msg__RSA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msgcnt
  if (lhs->msgcnt != rhs->msgcnt) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // typeevent
  if (lhs->typeevent != rhs->typeevent) {
    return false;
  }
  // desrciption
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->desrciption), &(rhs->desrciption)))
  {
    return false;
  }
  // priority
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->priority), &(rhs->priority)))
  {
    return false;
  }
  // heading
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // extent
  if (lhs->extent != rhs->extent) {
    return false;
  }
  // position
  if (!v2x_msg__msg__FullPositionVector__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // furtherinfoid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->furtherinfoid), &(rhs->furtherinfoid)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__RSA__copy(
  const v2x_msg__msg__RSA * input,
  v2x_msg__msg__RSA * output)
{
  if (!input || !output) {
    return false;
  }
  // msgcnt
  output->msgcnt = input->msgcnt;
  // timestamp
  output->timestamp = input->timestamp;
  // typeevent
  output->typeevent = input->typeevent;
  // desrciption
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->desrciption), &(output->desrciption)))
  {
    return false;
  }
  // priority
  if (!rosidl_runtime_c__String__copy(
      &(input->priority), &(output->priority)))
  {
    return false;
  }
  // heading
  if (!rosidl_runtime_c__String__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // extent
  output->extent = input->extent;
  // position
  if (!v2x_msg__msg__FullPositionVector__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // furtherinfoid
  if (!rosidl_runtime_c__String__copy(
      &(input->furtherinfoid), &(output->furtherinfoid)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__RSA *
v2x_msg__msg__RSA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__RSA * msg = (v2x_msg__msg__RSA *)allocator.allocate(sizeof(v2x_msg__msg__RSA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__RSA));
  bool success = v2x_msg__msg__RSA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__RSA__destroy(v2x_msg__msg__RSA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__RSA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__RSA__Sequence__init(v2x_msg__msg__RSA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__RSA * data = NULL;

  if (size) {
    data = (v2x_msg__msg__RSA *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__RSA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__RSA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__RSA__fini(&data[i - 1]);
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
v2x_msg__msg__RSA__Sequence__fini(v2x_msg__msg__RSA__Sequence * array)
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
      v2x_msg__msg__RSA__fini(&array->data[i]);
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

v2x_msg__msg__RSA__Sequence *
v2x_msg__msg__RSA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__RSA__Sequence * array = (v2x_msg__msg__RSA__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__RSA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__RSA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__RSA__Sequence__destroy(v2x_msg__msg__RSA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__RSA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__RSA__Sequence__are_equal(const v2x_msg__msg__RSA__Sequence * lhs, const v2x_msg__msg__RSA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__RSA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__RSA__Sequence__copy(
  const v2x_msg__msg__RSA__Sequence * input,
  v2x_msg__msg__RSA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__RSA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__RSA * data =
      (v2x_msg__msg__RSA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__RSA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__RSA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__RSA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
