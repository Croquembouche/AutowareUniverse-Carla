// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice
#include "autoware_auto_system_msgs/msg/detail/hazard_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `diag_no_fault`
// Member `diag_safe_fault`
// Member `diag_latent_fault`
// Member `diag_single_point_fault`
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

bool
autoware_auto_system_msgs__msg__HazardStatus__init(autoware_auto_system_msgs__msg__HazardStatus * msg)
{
  if (!msg) {
    return false;
  }
  // level
  msg->level = 0;
  // emergency
  msg->emergency = false;
  // emergency_holding
  msg->emergency_holding = false;
  // diag_no_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_no_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diag_safe_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_safe_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diag_latent_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_latent_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  // diag_single_point_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&msg->diag_single_point_fault, 0)) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
    return false;
  }
  return true;
}

void
autoware_auto_system_msgs__msg__HazardStatus__fini(autoware_auto_system_msgs__msg__HazardStatus * msg)
{
  if (!msg) {
    return;
  }
  // level
  // emergency
  // emergency_holding
  // diag_no_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_no_fault);
  // diag_safe_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_safe_fault);
  // diag_latent_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_latent_fault);
  // diag_single_point_fault
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&msg->diag_single_point_fault);
}

bool
autoware_auto_system_msgs__msg__HazardStatus__are_equal(const autoware_auto_system_msgs__msg__HazardStatus * lhs, const autoware_auto_system_msgs__msg__HazardStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // emergency
  if (lhs->emergency != rhs->emergency) {
    return false;
  }
  // emergency_holding
  if (lhs->emergency_holding != rhs->emergency_holding) {
    return false;
  }
  // diag_no_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_no_fault), &(rhs->diag_no_fault)))
  {
    return false;
  }
  // diag_safe_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_safe_fault), &(rhs->diag_safe_fault)))
  {
    return false;
  }
  // diag_latent_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_latent_fault), &(rhs->diag_latent_fault)))
  {
    return false;
  }
  // diag_single_point_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__are_equal(
      &(lhs->diag_single_point_fault), &(rhs->diag_single_point_fault)))
  {
    return false;
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__HazardStatus__copy(
  const autoware_auto_system_msgs__msg__HazardStatus * input,
  autoware_auto_system_msgs__msg__HazardStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // level
  output->level = input->level;
  // emergency
  output->emergency = input->emergency;
  // emergency_holding
  output->emergency_holding = input->emergency_holding;
  // diag_no_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_no_fault), &(output->diag_no_fault)))
  {
    return false;
  }
  // diag_safe_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_safe_fault), &(output->diag_safe_fault)))
  {
    return false;
  }
  // diag_latent_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_latent_fault), &(output->diag_latent_fault)))
  {
    return false;
  }
  // diag_single_point_fault
  if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__copy(
      &(input->diag_single_point_fault), &(output->diag_single_point_fault)))
  {
    return false;
  }
  return true;
}

autoware_auto_system_msgs__msg__HazardStatus *
autoware_auto_system_msgs__msg__HazardStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__HazardStatus * msg = (autoware_auto_system_msgs__msg__HazardStatus *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__HazardStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(autoware_auto_system_msgs__msg__HazardStatus));
  bool success = autoware_auto_system_msgs__msg__HazardStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
autoware_auto_system_msgs__msg__HazardStatus__destroy(autoware_auto_system_msgs__msg__HazardStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    autoware_auto_system_msgs__msg__HazardStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
autoware_auto_system_msgs__msg__HazardStatus__Sequence__init(autoware_auto_system_msgs__msg__HazardStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__HazardStatus * data = NULL;

  if (size) {
    data = (autoware_auto_system_msgs__msg__HazardStatus *)allocator.zero_allocate(size, sizeof(autoware_auto_system_msgs__msg__HazardStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = autoware_auto_system_msgs__msg__HazardStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        autoware_auto_system_msgs__msg__HazardStatus__fini(&data[i - 1]);
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
autoware_auto_system_msgs__msg__HazardStatus__Sequence__fini(autoware_auto_system_msgs__msg__HazardStatus__Sequence * array)
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
      autoware_auto_system_msgs__msg__HazardStatus__fini(&array->data[i]);
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

autoware_auto_system_msgs__msg__HazardStatus__Sequence *
autoware_auto_system_msgs__msg__HazardStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  autoware_auto_system_msgs__msg__HazardStatus__Sequence * array = (autoware_auto_system_msgs__msg__HazardStatus__Sequence *)allocator.allocate(sizeof(autoware_auto_system_msgs__msg__HazardStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = autoware_auto_system_msgs__msg__HazardStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
autoware_auto_system_msgs__msg__HazardStatus__Sequence__destroy(autoware_auto_system_msgs__msg__HazardStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    autoware_auto_system_msgs__msg__HazardStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
autoware_auto_system_msgs__msg__HazardStatus__Sequence__are_equal(const autoware_auto_system_msgs__msg__HazardStatus__Sequence * lhs, const autoware_auto_system_msgs__msg__HazardStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!autoware_auto_system_msgs__msg__HazardStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
autoware_auto_system_msgs__msg__HazardStatus__Sequence__copy(
  const autoware_auto_system_msgs__msg__HazardStatus__Sequence * input,
  autoware_auto_system_msgs__msg__HazardStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(autoware_auto_system_msgs__msg__HazardStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    autoware_auto_system_msgs__msg__HazardStatus * data =
      (autoware_auto_system_msgs__msg__HazardStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!autoware_auto_system_msgs__msg__HazardStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          autoware_auto_system_msgs__msg__HazardStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!autoware_auto_system_msgs__msg__HazardStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
