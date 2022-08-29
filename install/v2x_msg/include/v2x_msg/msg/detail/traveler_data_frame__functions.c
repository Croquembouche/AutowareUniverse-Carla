// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/traveler_data_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `msgid`
#include "v2x_msg/msg/detail/msg_id__functions.h"
// Member `regions`
#include "v2x_msg/msg/detail/geographical_path__functions.h"
// Member `content`
#include "v2x_msg/msg/detail/content__functions.h"
// Member `url`
#include "rosidl_runtime_c/string_functions.h"

bool
v2x_msg__msg__TravelerDataFrame__init(v2x_msg__msg__TravelerDataFrame * msg)
{
  if (!msg) {
    return false;
  }
  // notused
  // frametype
  // msgid
  if (!v2x_msg__msg__MsgID__init(&msg->msgid)) {
    v2x_msg__msg__TravelerDataFrame__fini(msg);
    return false;
  }
  // startyear
  // starttime
  // durationtime
  // priority
  // notused1
  // regions
  if (!v2x_msg__msg__GeographicalPath__Sequence__init(&msg->regions, 0)) {
    v2x_msg__msg__TravelerDataFrame__fini(msg);
    return false;
  }
  // notused2
  // notused3
  // content
  if (!v2x_msg__msg__Content__init(&msg->content)) {
    v2x_msg__msg__TravelerDataFrame__fini(msg);
    return false;
  }
  // url
  if (!rosidl_runtime_c__String__init(&msg->url)) {
    v2x_msg__msg__TravelerDataFrame__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msg__msg__TravelerDataFrame__fini(v2x_msg__msg__TravelerDataFrame * msg)
{
  if (!msg) {
    return;
  }
  // notused
  // frametype
  // msgid
  v2x_msg__msg__MsgID__fini(&msg->msgid);
  // startyear
  // starttime
  // durationtime
  // priority
  // notused1
  // regions
  v2x_msg__msg__GeographicalPath__Sequence__fini(&msg->regions);
  // notused2
  // notused3
  // content
  v2x_msg__msg__Content__fini(&msg->content);
  // url
  rosidl_runtime_c__String__fini(&msg->url);
}

bool
v2x_msg__msg__TravelerDataFrame__are_equal(const v2x_msg__msg__TravelerDataFrame * lhs, const v2x_msg__msg__TravelerDataFrame * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // notused
  if (lhs->notused != rhs->notused) {
    return false;
  }
  // frametype
  if (lhs->frametype != rhs->frametype) {
    return false;
  }
  // msgid
  if (!v2x_msg__msg__MsgID__are_equal(
      &(lhs->msgid), &(rhs->msgid)))
  {
    return false;
  }
  // startyear
  if (lhs->startyear != rhs->startyear) {
    return false;
  }
  // starttime
  if (lhs->starttime != rhs->starttime) {
    return false;
  }
  // durationtime
  if (lhs->durationtime != rhs->durationtime) {
    return false;
  }
  // priority
  if (lhs->priority != rhs->priority) {
    return false;
  }
  // notused1
  if (lhs->notused1 != rhs->notused1) {
    return false;
  }
  // regions
  if (!v2x_msg__msg__GeographicalPath__Sequence__are_equal(
      &(lhs->regions), &(rhs->regions)))
  {
    return false;
  }
  // notused2
  if (lhs->notused2 != rhs->notused2) {
    return false;
  }
  // notused3
  if (lhs->notused3 != rhs->notused3) {
    return false;
  }
  // content
  if (!v2x_msg__msg__Content__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  // url
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->url), &(rhs->url)))
  {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__TravelerDataFrame__copy(
  const v2x_msg__msg__TravelerDataFrame * input,
  v2x_msg__msg__TravelerDataFrame * output)
{
  if (!input || !output) {
    return false;
  }
  // notused
  output->notused = input->notused;
  // frametype
  output->frametype = input->frametype;
  // msgid
  if (!v2x_msg__msg__MsgID__copy(
      &(input->msgid), &(output->msgid)))
  {
    return false;
  }
  // startyear
  output->startyear = input->startyear;
  // starttime
  output->starttime = input->starttime;
  // durationtime
  output->durationtime = input->durationtime;
  // priority
  output->priority = input->priority;
  // notused1
  output->notused1 = input->notused1;
  // regions
  if (!v2x_msg__msg__GeographicalPath__Sequence__copy(
      &(input->regions), &(output->regions)))
  {
    return false;
  }
  // notused2
  output->notused2 = input->notused2;
  // notused3
  output->notused3 = input->notused3;
  // content
  if (!v2x_msg__msg__Content__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  // url
  if (!rosidl_runtime_c__String__copy(
      &(input->url), &(output->url)))
  {
    return false;
  }
  return true;
}

v2x_msg__msg__TravelerDataFrame *
v2x_msg__msg__TravelerDataFrame__create()
{
  v2x_msg__msg__TravelerDataFrame * msg = (v2x_msg__msg__TravelerDataFrame *)malloc(sizeof(v2x_msg__msg__TravelerDataFrame));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__TravelerDataFrame));
  bool success = v2x_msg__msg__TravelerDataFrame__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__TravelerDataFrame__destroy(v2x_msg__msg__TravelerDataFrame * msg)
{
  if (msg) {
    v2x_msg__msg__TravelerDataFrame__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__TravelerDataFrame__Sequence__init(v2x_msg__msg__TravelerDataFrame__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__TravelerDataFrame * data = NULL;
  if (size) {
    data = (v2x_msg__msg__TravelerDataFrame *)calloc(size, sizeof(v2x_msg__msg__TravelerDataFrame));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__TravelerDataFrame__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__TravelerDataFrame__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msg__msg__TravelerDataFrame__Sequence__fini(v2x_msg__msg__TravelerDataFrame__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__TravelerDataFrame__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msg__msg__TravelerDataFrame__Sequence *
v2x_msg__msg__TravelerDataFrame__Sequence__create(size_t size)
{
  v2x_msg__msg__TravelerDataFrame__Sequence * array = (v2x_msg__msg__TravelerDataFrame__Sequence *)malloc(sizeof(v2x_msg__msg__TravelerDataFrame__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__TravelerDataFrame__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__TravelerDataFrame__Sequence__destroy(v2x_msg__msg__TravelerDataFrame__Sequence * array)
{
  if (array) {
    v2x_msg__msg__TravelerDataFrame__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__TravelerDataFrame__Sequence__are_equal(const v2x_msg__msg__TravelerDataFrame__Sequence * lhs, const v2x_msg__msg__TravelerDataFrame__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__TravelerDataFrame__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__TravelerDataFrame__Sequence__copy(
  const v2x_msg__msg__TravelerDataFrame__Sequence * input,
  v2x_msg__msg__TravelerDataFrame__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__TravelerDataFrame);
    v2x_msg__msg__TravelerDataFrame * data =
      (v2x_msg__msg__TravelerDataFrame *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__TravelerDataFrame__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__TravelerDataFrame__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msg__msg__TravelerDataFrame__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
