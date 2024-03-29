// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/GeographicalPath.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/geographical_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "v2x_msg/msg/detail/road_segment_reference_id__functions.h"
// Member `anchor`
#include "v2x_msg/msg/detail/position3_d__functions.h"
// Member `description`
#include "v2x_msg/msg/detail/description__functions.h"

bool
v2x_msg__msg__GeographicalPath__init(v2x_msg__msg__GeographicalPath * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    v2x_msg__msg__GeographicalPath__fini(msg);
    return false;
  }
  // id
  if (!v2x_msg__msg__RoadSegmentReferenceID__init(&msg->id)) {
    v2x_msg__msg__GeographicalPath__fini(msg);
    return false;
  }
  // anchor
  if (!v2x_msg__msg__Position3D__init(&msg->anchor)) {
    v2x_msg__msg__GeographicalPath__fini(msg);
    return false;
  }
  // lanewidth
  // directionality
  // closedpath
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    v2x_msg__msg__GeographicalPath__fini(msg);
    return false;
  }
  // description
  if (!v2x_msg__msg__Description__init(&msg->description)) {
    v2x_msg__msg__GeographicalPath__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__GeographicalPath__fini(v2x_msg__msg__GeographicalPath * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  v2x_msg__msg__RoadSegmentReferenceID__fini(&msg->id);
  // anchor
  v2x_msg__msg__Position3D__fini(&msg->anchor);
  // lanewidth
  // directionality
  // closedpath
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
  // description
  v2x_msg__msg__Description__fini(&msg->description);
}

bool
v2x_msg__msg__GeographicalPath__are_equal(const v2x_msg__msg__GeographicalPath * lhs, const v2x_msg__msg__GeographicalPath * rhs)
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
  if (!v2x_msg__msg__RoadSegmentReferenceID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // anchor
  if (!v2x_msg__msg__Position3D__are_equal(
      &(lhs->anchor), &(rhs->anchor)))
  {
    return false;
  }
  // lanewidth
  if (lhs->lanewidth != rhs->lanewidth) {
    return false;
  }
  // directionality
  if (lhs->directionality != rhs->directionality) {
    return false;
  }
  // closedpath
  if (lhs->closedpath != rhs->closedpath) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // description
  if (!v2x_msg__msg__Description__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__GeographicalPath__copy(
  const v2x_msg__msg__GeographicalPath * input,
  v2x_msg__msg__GeographicalPath * output)
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
  if (!v2x_msg__msg__RoadSegmentReferenceID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // anchor
  if (!v2x_msg__msg__Position3D__copy(
      &(input->anchor), &(output->anchor)))
  {
    return false;
  }
  // lanewidth
  output->lanewidth = input->lanewidth;
  // directionality
  output->directionality = input->directionality;
  // closedpath
  output->closedpath = input->closedpath;
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // description
  if (!v2x_msg__msg__Description__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__GeographicalPath *
v2x_msg__msg__GeographicalPath__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__GeographicalPath * msg = (v2x_msg__msg__GeographicalPath *)allocator.allocate(sizeof(v2x_msg__msg__GeographicalPath), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__GeographicalPath));
  bool success = v2x_msg__msg__GeographicalPath__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__GeographicalPath__destroy(v2x_msg__msg__GeographicalPath * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__GeographicalPath__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__GeographicalPath__Sequence__init(v2x_msg__msg__GeographicalPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__GeographicalPath * data = NULL;

  if (size) {
    data = (v2x_msg__msg__GeographicalPath *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__GeographicalPath), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__GeographicalPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__GeographicalPath__fini(&data[i - 1]);
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
v2x_msg__msg__GeographicalPath__Sequence__fini(v2x_msg__msg__GeographicalPath__Sequence * array)
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
      v2x_msg__msg__GeographicalPath__fini(&array->data[i]);
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

v2x_msg__msg__GeographicalPath__Sequence *
v2x_msg__msg__GeographicalPath__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__GeographicalPath__Sequence * array = (v2x_msg__msg__GeographicalPath__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__GeographicalPath__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__GeographicalPath__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__GeographicalPath__Sequence__destroy(v2x_msg__msg__GeographicalPath__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__GeographicalPath__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__GeographicalPath__Sequence__are_equal(const v2x_msg__msg__GeographicalPath__Sequence * lhs, const v2x_msg__msg__GeographicalPath__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__GeographicalPath__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__GeographicalPath__Sequence__copy(
  const v2x_msg__msg__GeographicalPath__Sequence * input,
  v2x_msg__msg__GeographicalPath__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__GeographicalPath);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__GeographicalPath * data =
      (v2x_msg__msg__GeographicalPath *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__GeographicalPath__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__GeographicalPath__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__GeographicalPath__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
