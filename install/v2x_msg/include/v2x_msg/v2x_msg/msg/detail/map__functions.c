// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `intersections`
#include "v2x_msg/msg/detail/intersection_geometry__functions.h"
// Member `roadsegments`
#include "v2x_msg/msg/detail/road_segment__functions.h"
// Member `dataparameters`
#include "v2x_msg/msg/detail/data_parameters__functions.h"
// Member `restrictionlist`
#include "v2x_msg/msg/detail/restriction_class_assignment__functions.h"

bool
v2x_msg__msg__MAP__init(v2x_msg__msg__MAP * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // msgissuerevision
  // layertype
  // layerid
  // intersections
  if (!v2x_msg__msg__IntersectionGeometry__Sequence__init(&msg->intersections, 0)) {
    v2x_msg__msg__MAP__fini(msg);
    return false;
  }
  // roadsegments
  if (!v2x_msg__msg__RoadSegment__Sequence__init(&msg->roadsegments, 0)) {
    v2x_msg__msg__MAP__fini(msg);
    return false;
  }
  // dataparameters
  if (!v2x_msg__msg__DataParameters__init(&msg->dataparameters)) {
    v2x_msg__msg__MAP__fini(msg);
    return false;
  }
  // restrictionlist
  if (!v2x_msg__msg__RestrictionClassAssignment__Sequence__init(&msg->restrictionlist, 0)) {
    v2x_msg__msg__MAP__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__MAP__fini(v2x_msg__msg__MAP * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // msgissuerevision
  // layertype
  // layerid
  // intersections
  v2x_msg__msg__IntersectionGeometry__Sequence__fini(&msg->intersections);
  // roadsegments
  v2x_msg__msg__RoadSegment__Sequence__fini(&msg->roadsegments);
  // dataparameters
  v2x_msg__msg__DataParameters__fini(&msg->dataparameters);
  // restrictionlist
  v2x_msg__msg__RestrictionClassAssignment__Sequence__fini(&msg->restrictionlist);
}

bool
v2x_msg__msg__MAP__are_equal(const v2x_msg__msg__MAP * lhs, const v2x_msg__msg__MAP * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // msgissuerevision
  if (lhs->msgissuerevision != rhs->msgissuerevision) {
    return false;
  }
  // layertype
  if (lhs->layertype != rhs->layertype) {
    return false;
  }
  // layerid
  if (lhs->layerid != rhs->layerid) {
    return false;
  }
  // intersections
  if (!v2x_msg__msg__IntersectionGeometry__Sequence__are_equal(
      &(lhs->intersections), &(rhs->intersections)))
  {
    return false;
  }
  // roadsegments
  if (!v2x_msg__msg__RoadSegment__Sequence__are_equal(
      &(lhs->roadsegments), &(rhs->roadsegments)))
  {
    return false;
  }
  // dataparameters
  if (!v2x_msg__msg__DataParameters__are_equal(
      &(lhs->dataparameters), &(rhs->dataparameters)))
  {
    return false;
  }
  // restrictionlist
  if (!v2x_msg__msg__RestrictionClassAssignment__Sequence__are_equal(
      &(lhs->restrictionlist), &(rhs->restrictionlist)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__MAP__copy(
  const v2x_msg__msg__MAP * input,
  v2x_msg__msg__MAP * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // msgissuerevision
  output->msgissuerevision = input->msgissuerevision;
  // layertype
  output->layertype = input->layertype;
  // layerid
  output->layerid = input->layerid;
  // intersections
  if (!v2x_msg__msg__IntersectionGeometry__Sequence__copy(
      &(input->intersections), &(output->intersections)))
  {
    return false;
  }
  // roadsegments
  if (!v2x_msg__msg__RoadSegment__Sequence__copy(
      &(input->roadsegments), &(output->roadsegments)))
  {
    return false;
  }
  // dataparameters
  if (!v2x_msg__msg__DataParameters__copy(
      &(input->dataparameters), &(output->dataparameters)))
  {
    return false;
  }
  // restrictionlist
  if (!v2x_msg__msg__RestrictionClassAssignment__Sequence__copy(
      &(input->restrictionlist), &(output->restrictionlist)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__MAP *
v2x_msg__msg__MAP__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__MAP * msg = (v2x_msg__msg__MAP *)allocator.allocate(sizeof(v2x_msg__msg__MAP), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__MAP));
  bool success = v2x_msg__msg__MAP__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__MAP__destroy(v2x_msg__msg__MAP * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__MAP__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__MAP__Sequence__init(v2x_msg__msg__MAP__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__MAP * data = NULL;

  if (size) {
    data = (v2x_msg__msg__MAP *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__MAP), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__MAP__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__MAP__fini(&data[i - 1]);
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
v2x_msg__msg__MAP__Sequence__fini(v2x_msg__msg__MAP__Sequence * array)
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
      v2x_msg__msg__MAP__fini(&array->data[i]);
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

v2x_msg__msg__MAP__Sequence *
v2x_msg__msg__MAP__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__MAP__Sequence * array = (v2x_msg__msg__MAP__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__MAP__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__MAP__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__MAP__Sequence__destroy(v2x_msg__msg__MAP__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__MAP__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__MAP__Sequence__are_equal(const v2x_msg__msg__MAP__Sequence * lhs, const v2x_msg__msg__MAP__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__MAP__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__MAP__Sequence__copy(
  const v2x_msg__msg__MAP__Sequence * input,
  v2x_msg__msg__MAP__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__MAP);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__MAP * data =
      (v2x_msg__msg__MAP *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__MAP__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__MAP__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__MAP__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
