// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/intersection_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "v2x_msg/msg/detail/intersection_reference_id__functions.h"
// Member `status`
#include "v2x_msg/msg/detail/intersection_status_object__functions.h"
// Member `enabledlanes`
#include "v2x_msg/msg/detail/lane_id__functions.h"
// Member `states`
#include "v2x_msg/msg/detail/movement_state__functions.h"
// Member `maneuverassistlist`
#include "v2x_msg/msg/detail/connection_maneuver_assist__functions.h"

bool
v2x_msg__msg__IntersectionState__init(v2x_msg__msg__IntersectionState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    v2x_msg__msg__IntersectionState__fini(msg);
    return false;
  }
  // id
  if (!v2x_msg__msg__IntersectionReferenceID__init(&msg->id)) {
    v2x_msg__msg__IntersectionState__fini(msg);
    return false;
  }
  // revision
  // status
  if (!v2x_msg__msg__IntersectionStatusObject__init(&msg->status)) {
    v2x_msg__msg__IntersectionState__fini(msg);
    return false;
  }
  // moy
  // timestamp
  // enabledlanes
  if (!v2x_msg__msg__LaneID__Sequence__init(&msg->enabledlanes, 0)) {
    v2x_msg__msg__IntersectionState__fini(msg);
    return false;
  }
  // states
  if (!v2x_msg__msg__MovementState__Sequence__init(&msg->states, 0)) {
    v2x_msg__msg__IntersectionState__fini(msg);
    return false;
  }
  // maneuverassistlist
  if (!v2x_msg__msg__ConnectionManeuverAssist__Sequence__init(&msg->maneuverassistlist, 0)) {
    v2x_msg__msg__IntersectionState__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__IntersectionState__fini(v2x_msg__msg__IntersectionState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  v2x_msg__msg__IntersectionReferenceID__fini(&msg->id);
  // revision
  // status
  v2x_msg__msg__IntersectionStatusObject__fini(&msg->status);
  // moy
  // timestamp
  // enabledlanes
  v2x_msg__msg__LaneID__Sequence__fini(&msg->enabledlanes);
  // states
  v2x_msg__msg__MovementState__Sequence__fini(&msg->states);
  // maneuverassistlist
  v2x_msg__msg__ConnectionManeuverAssist__Sequence__fini(&msg->maneuverassistlist);
}

bool
v2x_msg__msg__IntersectionState__are_equal(const v2x_msg__msg__IntersectionState * lhs, const v2x_msg__msg__IntersectionState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (!v2x_msg__msg__IntersectionReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // status
  if (!v2x_msg__msg__IntersectionStatusObject__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // moy
  if (lhs->moy != rhs->moy) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // enabledlanes
  if (!v2x_msg__msg__LaneID__Sequence__are_equal(
      &(lhs->enabledlanes), &(rhs->enabledlanes)))
  {
    return false;
  }
  // states
  if (!v2x_msg__msg__MovementState__Sequence__are_equal(
      &(lhs->states), &(rhs->states)))
  {
    return false;
  }
  // maneuverassistlist
  if (!v2x_msg__msg__ConnectionManeuverAssist__Sequence__are_equal(
      &(lhs->maneuverassistlist), &(rhs->maneuverassistlist)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__IntersectionState__copy(
  const v2x_msg__msg__IntersectionState * input,
  v2x_msg__msg__IntersectionState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  if (!v2x_msg__msg__IntersectionReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // revision
  output->revision = input->revision;
  // status
  if (!v2x_msg__msg__IntersectionStatusObject__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // moy
  output->moy = input->moy;
  // timestamp
  output->timestamp = input->timestamp;
  // enabledlanes
  if (!v2x_msg__msg__LaneID__Sequence__copy(
      &(input->enabledlanes), &(output->enabledlanes)))
  {
    return false;
  }
  // states
  if (!v2x_msg__msg__MovementState__Sequence__copy(
      &(input->states), &(output->states)))
  {
    return false;
  }
  // maneuverassistlist
  if (!v2x_msg__msg__ConnectionManeuverAssist__Sequence__copy(
      &(input->maneuverassistlist), &(output->maneuverassistlist)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__IntersectionState *
v2x_msg__msg__IntersectionState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__IntersectionState * msg = (v2x_msg__msg__IntersectionState *)allocator.allocate(sizeof(v2x_msg__msg__IntersectionState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__IntersectionState));
  bool success = v2x_msg__msg__IntersectionState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__IntersectionState__destroy(v2x_msg__msg__IntersectionState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__IntersectionState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__IntersectionState__Sequence__init(v2x_msg__msg__IntersectionState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__IntersectionState * data = NULL;

  if (size) {
    data = (v2x_msg__msg__IntersectionState *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__IntersectionState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__IntersectionState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__IntersectionState__fini(&data[i - 1]);
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
v2x_msg__msg__IntersectionState__Sequence__fini(v2x_msg__msg__IntersectionState__Sequence * array)
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
      v2x_msg__msg__IntersectionState__fini(&array->data[i]);
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

v2x_msg__msg__IntersectionState__Sequence *
v2x_msg__msg__IntersectionState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__IntersectionState__Sequence * array = (v2x_msg__msg__IntersectionState__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__IntersectionState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__IntersectionState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__IntersectionState__Sequence__destroy(v2x_msg__msg__IntersectionState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__IntersectionState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__IntersectionState__Sequence__are_equal(const v2x_msg__msg__IntersectionState__Sequence * lhs, const v2x_msg__msg__IntersectionState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__IntersectionState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__IntersectionState__Sequence__copy(
  const v2x_msg__msg__IntersectionState__Sequence * input,
  v2x_msg__msg__IntersectionState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__IntersectionState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__IntersectionState * data =
      (v2x_msg__msg__IntersectionState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__IntersectionState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__IntersectionState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__IntersectionState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
