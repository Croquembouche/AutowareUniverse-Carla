// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/intersection_status_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
v2x_msg__msg__IntersectionStatusObject__init(v2x_msg__msg__IntersectionStatusObject * msg)
{
  if (!msg) {
    return false;
  }
  // manualcontrolisenabled
  // stoptimeisactivated
  // failureflash
  // preemptisactive
  // signalpriorityisactive
  // fixedtimeoperation
  // trafficdependentoperation
  // standbyoperation
  // failuremode
  // off
  // recentmapmessageupdate
  // recentchangeinmapassignedlanesidsused
  // novalidmapisabilableatthistime
  // nobalidspatisabilableatthistime
  // reserve14
  // reserve15
  return true;
}

void
v2x_msg__msg__IntersectionStatusObject__fini(v2x_msg__msg__IntersectionStatusObject * msg)
{
  if (!msg) {
    return;
  }
  // manualcontrolisenabled
  // stoptimeisactivated
  // failureflash
  // preemptisactive
  // signalpriorityisactive
  // fixedtimeoperation
  // trafficdependentoperation
  // standbyoperation
  // failuremode
  // off
  // recentmapmessageupdate
  // recentchangeinmapassignedlanesidsused
  // novalidmapisabilableatthistime
  // nobalidspatisabilableatthistime
  // reserve14
  // reserve15
}

bool
v2x_msg__msg__IntersectionStatusObject__are_equal(const v2x_msg__msg__IntersectionStatusObject * lhs, const v2x_msg__msg__IntersectionStatusObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // manualcontrolisenabled
  if (lhs->manualcontrolisenabled != rhs->manualcontrolisenabled) {
    return false;
  }
  // stoptimeisactivated
  if (lhs->stoptimeisactivated != rhs->stoptimeisactivated) {
    return false;
  }
  // failureflash
  if (lhs->failureflash != rhs->failureflash) {
    return false;
  }
  // preemptisactive
  if (lhs->preemptisactive != rhs->preemptisactive) {
    return false;
  }
  // signalpriorityisactive
  if (lhs->signalpriorityisactive != rhs->signalpriorityisactive) {
    return false;
  }
  // fixedtimeoperation
  if (lhs->fixedtimeoperation != rhs->fixedtimeoperation) {
    return false;
  }
  // trafficdependentoperation
  if (lhs->trafficdependentoperation != rhs->trafficdependentoperation) {
    return false;
  }
  // standbyoperation
  if (lhs->standbyoperation != rhs->standbyoperation) {
    return false;
  }
  // failuremode
  if (lhs->failuremode != rhs->failuremode) {
    return false;
  }
  // off
  if (lhs->off != rhs->off) {
    return false;
  }
  // recentmapmessageupdate
  if (lhs->recentmapmessageupdate != rhs->recentmapmessageupdate) {
    return false;
  }
  // recentchangeinmapassignedlanesidsused
  if (lhs->recentchangeinmapassignedlanesidsused != rhs->recentchangeinmapassignedlanesidsused) {
    return false;
  }
  // novalidmapisabilableatthistime
  if (lhs->novalidmapisabilableatthistime != rhs->novalidmapisabilableatthistime) {
    return false;
  }
  // nobalidspatisabilableatthistime
  if (lhs->nobalidspatisabilableatthistime != rhs->nobalidspatisabilableatthistime) {
    return false;
  }
  // reserve14
  if (lhs->reserve14 != rhs->reserve14) {
    return false;
  }
  // reserve15
  if (lhs->reserve15 != rhs->reserve15) {
    return false;
  }
  return true;
}

bool
v2x_msg__msg__IntersectionStatusObject__copy(
  const v2x_msg__msg__IntersectionStatusObject * input,
  v2x_msg__msg__IntersectionStatusObject * output)
{
  if (!input || !output) {
    return false;
  }
  // manualcontrolisenabled
  output->manualcontrolisenabled = input->manualcontrolisenabled;
  // stoptimeisactivated
  output->stoptimeisactivated = input->stoptimeisactivated;
  // failureflash
  output->failureflash = input->failureflash;
  // preemptisactive
  output->preemptisactive = input->preemptisactive;
  // signalpriorityisactive
  output->signalpriorityisactive = input->signalpriorityisactive;
  // fixedtimeoperation
  output->fixedtimeoperation = input->fixedtimeoperation;
  // trafficdependentoperation
  output->trafficdependentoperation = input->trafficdependentoperation;
  // standbyoperation
  output->standbyoperation = input->standbyoperation;
  // failuremode
  output->failuremode = input->failuremode;
  // off
  output->off = input->off;
  // recentmapmessageupdate
  output->recentmapmessageupdate = input->recentmapmessageupdate;
  // recentchangeinmapassignedlanesidsused
  output->recentchangeinmapassignedlanesidsused = input->recentchangeinmapassignedlanesidsused;
  // novalidmapisabilableatthistime
  output->novalidmapisabilableatthistime = input->novalidmapisabilableatthistime;
  // nobalidspatisabilableatthistime
  output->nobalidspatisabilableatthistime = input->nobalidspatisabilableatthistime;
  // reserve14
  output->reserve14 = input->reserve14;
  // reserve15
  output->reserve15 = input->reserve15;
  return true;
}

v2x_msg__msg__IntersectionStatusObject *
v2x_msg__msg__IntersectionStatusObject__create()
{
  v2x_msg__msg__IntersectionStatusObject * msg = (v2x_msg__msg__IntersectionStatusObject *)malloc(sizeof(v2x_msg__msg__IntersectionStatusObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msg__msg__IntersectionStatusObject));
  bool success = v2x_msg__msg__IntersectionStatusObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
v2x_msg__msg__IntersectionStatusObject__destroy(v2x_msg__msg__IntersectionStatusObject * msg)
{
  if (msg) {
    v2x_msg__msg__IntersectionStatusObject__fini(msg);
  }
  free(msg);
}


bool
v2x_msg__msg__IntersectionStatusObject__Sequence__init(v2x_msg__msg__IntersectionStatusObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  v2x_msg__msg__IntersectionStatusObject * data = NULL;
  if (size) {
    data = (v2x_msg__msg__IntersectionStatusObject *)calloc(size, sizeof(v2x_msg__msg__IntersectionStatusObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msg__msg__IntersectionStatusObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msg__msg__IntersectionStatusObject__fini(&data[i - 1]);
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
v2x_msg__msg__IntersectionStatusObject__Sequence__fini(v2x_msg__msg__IntersectionStatusObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msg__msg__IntersectionStatusObject__fini(&array->data[i]);
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

v2x_msg__msg__IntersectionStatusObject__Sequence *
v2x_msg__msg__IntersectionStatusObject__Sequence__create(size_t size)
{
  v2x_msg__msg__IntersectionStatusObject__Sequence * array = (v2x_msg__msg__IntersectionStatusObject__Sequence *)malloc(sizeof(v2x_msg__msg__IntersectionStatusObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = v2x_msg__msg__IntersectionStatusObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
v2x_msg__msg__IntersectionStatusObject__Sequence__destroy(v2x_msg__msg__IntersectionStatusObject__Sequence * array)
{
  if (array) {
    v2x_msg__msg__IntersectionStatusObject__Sequence__fini(array);
  }
  free(array);
}

bool
v2x_msg__msg__IntersectionStatusObject__Sequence__are_equal(const v2x_msg__msg__IntersectionStatusObject__Sequence * lhs, const v2x_msg__msg__IntersectionStatusObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msg__msg__IntersectionStatusObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msg__msg__IntersectionStatusObject__Sequence__copy(
  const v2x_msg__msg__IntersectionStatusObject__Sequence * input,
  v2x_msg__msg__IntersectionStatusObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msg__msg__IntersectionStatusObject);
    v2x_msg__msg__IntersectionStatusObject * data =
      (v2x_msg__msg__IntersectionStatusObject *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msg__msg__IntersectionStatusObject__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          v2x_msg__msg__IntersectionStatusObject__fini(&data[i]);
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
    if (!v2x_msg__msg__IntersectionStatusObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
