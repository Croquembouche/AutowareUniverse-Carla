// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_system_msgs:msg/DiagnosticHeader.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/diagnostic_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `data_stamp`
// Member `computation_start`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `runtime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
autoware_auto_system_msgs__msg__DiagnosticHeader__init(autoware_auto_system_msgs__msg__DiagnosticHeader * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    autoware_auto_system_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // data_stamp
  if (!builtin_interfaces__msg__Time__init(&msg->data_stamp)) {
    autoware_auto_system_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // computation_start
  if (!builtin_interfaces__msg__Time__init(&msg->computation_start)) {
    autoware_auto_system_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // runtime
  if (!builtin_interfaces__msg__Duration__init(&msg->runtime)) {
    autoware_auto_system_msgs__msg__DiagnosticHeader__fini(msg);
    return false;
  }
  // iterations
  return true;
}

void
autoware_auto_system_msgs__msg__DiagnosticHeader__fini(autoware_auto_system_msgs__msg__DiagnosticHeader * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // data_stamp
  builtin_interfaces__msg__Time__fini(&msg->data_stamp);
  // computation_start
  builtin_interfaces__msg__Time__fini(&msg->computation_start);
  // runtime
  builtin_interfaces__msg__Duration__fini(&msg->runtime);
  // iterations
}

bool
autoware_auto_system_msgs__msg__DiagnosticHeader__are_equal(const autoware_auto_system_msgs__msg__DiagnosticHeader * lhs, const autoware_auto_system_msgs__msg__DiagnosticHeader * rhs)
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
  // data_stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->data_stamp), &(rhs->data_stamp)))
  {
    return false;
  }
  // computation_start
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->computation_start), &(rhs->computation_start)))
  {
    return false;
  }
  // runtime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->runtime), &(rhs->runtime)))
  {
    return false;
  }
  // iterations
  if (lhs->iterations != rhs->iterations) {
    return false;
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__DiagnosticHeader__copy(
  const autoware_auto_system_msgs__msg__DiagnosticHeader * input,
  autoware_auto_system_msgs__msg__DiagnosticHeader * output)
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
  // data_stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->data_stamp), &(output->data_stamp)))
  {
    return false;
  }
  // computation_start
  if (!builtin_interfaces__msg__Time__copy(
      &(input->computation_start), &(output->computation_start)))
  {
    return false;
  }
  // runtime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->runtime), &(output->runtime)))
  {
    return false;
  }
  // iterations
  output->iterations = input->iterations;
  return true;
}

autoware_auto_system_msgs__msg__DiagnosticHeader *
autoware_auto_system_msgs__msg__DiagnosticHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__DiagnosticHeader * msg = (autoware_auto_system_msgs__msg__DiagnosticHeader *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__DiagnosticHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_system_msgs__msg__DiagnosticHeader));
  bool success = autoware_auto_system_msgs__msg__DiagnosticHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_system_msgs__msg__DiagnosticHeader__destroy(autoware_auto_system_msgs__msg__DiagnosticHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_system_msgs__msg__DiagnosticHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__init(autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__DiagnosticHeader * data = NULL;

  if (size) {
    data = (autoware_auto_system_msgs__msg__DiagnosticHeader *)allocator.zero_allocate(size, sizeof(autoware_auto_system_msgs__msg__DiagnosticHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_system_msgs__msg__DiagnosticHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_system_msgs__msg__DiagnosticHeader__fini(&data[i - 1]);
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
autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__fini(autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * array)
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
      autoware_auto_system_msgs__msg__DiagnosticHeader__fini(&array->data[i]);
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

autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence *
autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * array = (autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__destroy(autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__are_equal(const autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * lhs, const autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_system_msgs__msg__DiagnosticHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence__copy(
  const autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * input,
  autoware_auto_system_msgs__msg__DiagnosticHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_system_msgs__msg__DiagnosticHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_system_msgs__msg__DiagnosticHeader * data =
      (autoware_auto_system_msgs__msg__DiagnosticHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_system_msgs__msg__DiagnosticHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_system_msgs__msg__DiagnosticHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_system_msgs__msg__DiagnosticHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
