// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/DDateTime.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/d_date_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
v2x_msg__msg__DDateTime__init(v2x_msg__msg__DDateTime * msg)
{
  if (!msg) {
    return false;
  }
  // year
  // month
  // day
  // hour
  // minute
  // second
  // offset
  return true;
}

void
v2x_msg__msg__DDateTime__fini(v2x_msg__msg__DDateTime * msg)
{
  if (!msg) {
    return;
  }
  // year
  // month
  // day
  // hour
  // minute
  // second
  // offset
}

bool
v2x_msg__msg__DDateTime__are_equal(const v2x_msg__msg__DDateTime * lhs, const v2x_msg__msg__DDateTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // year
  if (lhs->year != rhs->year) {
    return false;
  }
  // month
  if (lhs->month != rhs->month) {
    return false;
  }
  // day
  if (lhs->day != rhs->day) {
    return false;
  }
  // hour
  if (lhs->hour != rhs->hour) {
    return false;
  }
  // minute
  if (lhs->minute != rhs->minute) {
    return false;
  }
  // second
  if (lhs->second != rhs->second) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__DDateTime__copy(
  const v2x_msg__msg__DDateTime * input,
  v2x_msg__msg__DDateTime * output)
{
  if (!input || !output) {
    return false;
  }
  // year
  output->year = input->year;
  // month
  output->month = input->month;
  // day
  output->day = input->day;
  // hour
  output->hour = input->hour;
  // minute
  output->minute = input->minute;
  // second
  output->second = input->second;
  // offset
  output->offset = input->offset;
  return true;
}

v2x_msg__msg__DDateTime *
v2x_msg__msg__DDateTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__DDateTime * msg = (v2x_msg__msg__DDateTime *)allocator.allocate(sizeof(v2x_msg__msg__DDateTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__DDateTime));
  bool success = v2x_msg__msg__DDateTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__DDateTime__destroy(v2x_msg__msg__DDateTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msg__msg__DDateTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msg__msg__DDateTime__Sequence__init(v2x_msg__msg__DDateTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__DDateTime * data = NULL;

  if (size) {
    data = (v2x_msg__msg__DDateTime *)allocator.zero_allocate(size, sizeof(v2x_msg__msg__DDateTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__DDateTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__DDateTime__fini(&data[i - 1]);
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
v2x_msg__msg__DDateTime__Sequence__fini(v2x_msg__msg__DDateTime__Sequence * array)
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
      v2x_msg__msg__DDateTime__fini(&array->data[i]);
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

v2x_msg__msg__DDateTime__Sequence *
v2x_msg__msg__DDateTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msg__msg__DDateTime__Sequence * array = (v2x_msg__msg__DDateTime__Sequence *)allocator.allocate(sizeof(v2x_msg__msg__DDateTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__DDateTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__DDateTime__Sequence__destroy(v2x_msg__msg__DDateTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msg__msg__DDateTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msg__msg__DDateTime__Sequence__are_equal(const v2x_msg__msg__DDateTime__Sequence * lhs, const v2x_msg__msg__DDateTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__DDateTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__DDateTime__Sequence__copy(
  const v2x_msg__msg__DDateTime__Sequence * input,
  v2x_msg__msg__DDateTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__DDateTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msg__msg__DDateTime * data =
      (v2x_msg__msg__DDateTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__DDateTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__DDateTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__DDateTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
