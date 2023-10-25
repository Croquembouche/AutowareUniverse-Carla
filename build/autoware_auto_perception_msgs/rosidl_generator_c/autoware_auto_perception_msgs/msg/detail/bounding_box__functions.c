// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice
#include "autoware_auto_perception_msgs/msg/detail/bounding_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `centroid`
// Member `size`
// Member `corners`
#include "geometry_msgs/msg/detail/point32__functions.h"
// Member `orientation`
#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__functions.h"

bool
autoware_auto_perception_msgs__msg__BoundingBox__init(autoware_auto_perception_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point32__init(&msg->centroid)) {
    autoware_auto_perception_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__init(&msg->size)) {
    autoware_auto_perception_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // orientation
  if (!autoware_auto_geometry_msgs__msg__Quaternion32__init(&msg->orientation)) {
    autoware_auto_perception_msgs__msg__BoundingBox__fini(msg);
    return false;
  }
  // velocity
  msg->velocity = 0.0f;
  // heading
  msg->heading = 0.0f;
  // heading_rate
  msg->heading_rate = 0.0f;
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point32__init(&msg->corners[i])) {
      autoware_auto_perception_msgs__msg__BoundingBox__fini(msg);
      return false;
    }
  }
  // variance
  // value
  // vehicle_label
  msg->vehicle_label = 0;
  // signal_label
  msg->signal_label = 0;
  // class_likelihood
  return true;
}

void
autoware_auto_perception_msgs__msg__BoundingBox__fini(autoware_auto_perception_msgs__msg__BoundingBox * msg)
{
  if (!msg) {
    return;
  }
  // centroid
  geometry_msgs__msg__Point32__fini(&msg->centroid);
  // size
  geometry_msgs__msg__Point32__fini(&msg->size);
  // orientation
  autoware_auto_geometry_msgs__msg__Quaternion32__fini(&msg->orientation);
  // velocity
  // heading
  // heading_rate
  // corners
  for (size_t i = 0; i < 4; ++i) {
    geometry_msgs__msg__Point32__fini(&msg->corners[i]);
  }
  // variance
  // value
  // vehicle_label
  // signal_label
  // class_likelihood
}

bool
autoware_auto_perception_msgs__msg__BoundingBox__are_equal(const autoware_auto_perception_msgs__msg__BoundingBox * lhs, const autoware_auto_perception_msgs__msg__BoundingBox * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->centroid), &(rhs->centroid)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // orientation
  if (!autoware_auto_geometry_msgs__msg__Quaternion32__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // heading_rate
  if (lhs->heading_rate != rhs->heading_rate) {
    return false;
  }
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point32__are_equal(
        &(lhs->corners[i]), &(rhs->corners[i])))
    {
      return false;
    }
  }
  // variance
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->variance[i] != rhs->variance[i]) {
      return false;
    }
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // vehicle_label
  if (lhs->vehicle_label != rhs->vehicle_label) {
    return false;
  }
  // signal_label
  if (lhs->signal_label != rhs->signal_label) {
    return false;
  }
  // class_likelihood
  if (lhs->class_likelihood != rhs->class_likelihood) {
    return false;
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__BoundingBox__copy(
  const autoware_auto_perception_msgs__msg__BoundingBox * input,
  autoware_auto_perception_msgs__msg__BoundingBox * output)
{
  if (!input || !output) {
    return false;
  }
  // centroid
  if (!geometry_msgs__msg__Point32__copy(
      &(input->centroid), &(output->centroid)))
  {
    return false;
  }
  // size
  if (!geometry_msgs__msg__Point32__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // orientation
  if (!autoware_auto_geometry_msgs__msg__Quaternion32__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // heading
  output->heading = input->heading;
  // heading_rate
  output->heading_rate = input->heading_rate;
  // corners
  for (size_t i = 0; i < 4; ++i) {
    if (!geometry_msgs__msg__Point32__copy(
        &(input->corners[i]), &(output->corners[i])))
    {
      return false;
    }
  }
  // variance
  for (size_t i = 0; i < 8; ++i) {
    output->variance[i] = input->variance[i];
  }
  // value
  output->value = input->value;
  // vehicle_label
  output->vehicle_label = input->vehicle_label;
  // signal_label
  output->signal_label = input->signal_label;
  // class_likelihood
  output->class_likelihood = input->class_likelihood;
  return true;
}

autoware_auto_perception_msgs__msg__BoundingBox *
autoware_auto_perception_msgs__msg__BoundingBox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__BoundingBox * msg = (autoware_auto_perception_msgs__msg__BoundingBox *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__BoundingBox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_perception_msgs__msg__BoundingBox));
  bool success = autoware_auto_perception_msgs__msg__BoundingBox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_perception_msgs__msg__BoundingBox__destroy(autoware_auto_perception_msgs__msg__BoundingBox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_perception_msgs__msg__BoundingBox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_perception_msgs__msg__BoundingBox__Sequence__init(autoware_auto_perception_msgs__msg__BoundingBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__BoundingBox * data = NULL;

  if (size) {
    data = (autoware_auto_perception_msgs__msg__BoundingBox *)allocator.zero_allocate(size, sizeof(autoware_auto_perception_msgs__msg__BoundingBox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_perception_msgs__msg__BoundingBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_perception_msgs__msg__BoundingBox__fini(&data[i - 1]);
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
autoware_auto_perception_msgs__msg__BoundingBox__Sequence__fini(autoware_auto_perception_msgs__msg__BoundingBox__Sequence * array)
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
      autoware_auto_perception_msgs__msg__BoundingBox__fini(&array->data[i]);
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

autoware_auto_perception_msgs__msg__BoundingBox__Sequence *
autoware_auto_perception_msgs__msg__BoundingBox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_perception_msgs__msg__BoundingBox__Sequence * array = (autoware_auto_perception_msgs__msg__BoundingBox__Sequence *)allocator.allocate(sizeof(autoware_auto_perception_msgs__msg__BoundingBox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_perception_msgs__msg__BoundingBox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_perception_msgs__msg__BoundingBox__Sequence__destroy(autoware_auto_perception_msgs__msg__BoundingBox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_perception_msgs__msg__BoundingBox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_perception_msgs__msg__BoundingBox__Sequence__are_equal(const autoware_auto_perception_msgs__msg__BoundingBox__Sequence * lhs, const autoware_auto_perception_msgs__msg__BoundingBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__BoundingBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_perception_msgs__msg__BoundingBox__Sequence__copy(
  const autoware_auto_perception_msgs__msg__BoundingBox__Sequence * input,
  autoware_auto_perception_msgs__msg__BoundingBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_perception_msgs__msg__BoundingBox);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_perception_msgs__msg__BoundingBox * data =
      (autoware_auto_perception_msgs__msg__BoundingBox *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_perception_msgs__msg__BoundingBox__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_perception_msgs__msg__BoundingBox__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_perception_msgs__msg__BoundingBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
