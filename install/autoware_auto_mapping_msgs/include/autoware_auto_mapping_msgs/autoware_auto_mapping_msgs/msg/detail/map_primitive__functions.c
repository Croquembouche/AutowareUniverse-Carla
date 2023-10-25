// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_mapping_msgs:msg/MapPrimitive.idl
// generated code does not contain a copyright notice
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `primitive_type`
#include "rosidl_runtime_c/string_functions.h"

bool
autoware_auto_mapping_msgs__msg__MapPrimitive__init(autoware_auto_mapping_msgs__msg__MapPrimitive * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // primitive_type
  if (!rosidl_runtime_c__String__init(&msg->primitive_type)) {
    autoware_auto_mapping_msgs__msg__MapPrimitive__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->primitive_type, "");
    if (!success) {
      goto abort_init_0;
    }
  }
  return true;
abort_init_0:
  return false;
}

void
autoware_auto_mapping_msgs__msg__MapPrimitive__fini(autoware_auto_mapping_msgs__msg__MapPrimitive * msg)
{
  if (!msg) {
    return;
  }
  // id
  // primitive_type
  rosidl_runtime_c__String__fini(&msg->primitive_type);
}

bool
autoware_auto_mapping_msgs__msg__MapPrimitive__are_equal(const autoware_auto_mapping_msgs__msg__MapPrimitive * lhs, const autoware_auto_mapping_msgs__msg__MapPrimitive * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // primitive_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->primitive_type), &(rhs->primitive_type)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_mapping_msgs__msg__MapPrimitive__copy(
  const autoware_auto_mapping_msgs__msg__MapPrimitive * input,
  autoware_auto_mapping_msgs__msg__MapPrimitive * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // primitive_type
  if (!rosidl_runtime_c__String__copy(
      &(input->primitive_type), &(output->primitive_type)))
  {
    return false;
  }
  return true;
}

autoware_auto_mapping_msgs__msg__MapPrimitive *
autoware_auto_mapping_msgs__msg__MapPrimitive__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__MapPrimitive * msg = (autoware_auto_mapping_msgs__msg__MapPrimitive *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__msg__MapPrimitive), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_mapping_msgs__msg__MapPrimitive));
  bool success = autoware_auto_mapping_msgs__msg__MapPrimitive__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_mapping_msgs__msg__MapPrimitive__destroy(autoware_auto_mapping_msgs__msg__MapPrimitive * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_mapping_msgs__msg__MapPrimitive__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__init(autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__MapPrimitive * data = NULL;

  if (size) {
    data = (autoware_auto_mapping_msgs__msg__MapPrimitive *)allocator.zero_allocate(size, sizeof(autoware_auto_mapping_msgs__msg__MapPrimitive), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_mapping_msgs__msg__MapPrimitive__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_mapping_msgs__msg__MapPrimitive__fini(&data[i - 1]);
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
autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__fini(autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * array)
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
      autoware_auto_mapping_msgs__msg__MapPrimitive__fini(&array->data[i]);
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

autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence *
autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * array = (autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence *)allocator.allocate(sizeof(autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__destroy(autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__are_equal(const autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * lhs, const autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_mapping_msgs__msg__MapPrimitive__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence__copy(
  const autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * input,
  autoware_auto_mapping_msgs__msg__MapPrimitive__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_mapping_msgs__msg__MapPrimitive);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_mapping_msgs__msg__MapPrimitive * data =
      (autoware_auto_mapping_msgs__msg__MapPrimitive *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_mapping_msgs__msg__MapPrimitive__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_mapping_msgs__msg__MapPrimitive__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_mapping_msgs__msg__MapPrimitive__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
