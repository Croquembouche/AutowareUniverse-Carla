// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/IntersectionStatusObject in the package v2x_msg.
typedef struct v2x_msg__msg__IntersectionStatusObject
{
  int64_t manualcontrolisenabled;
  int64_t stoptimeisactivated;
  int64_t failureflash;
  int64_t preemptisactive;
  int64_t signalpriorityisactive;
  int64_t fixedtimeoperation;
  int64_t trafficdependentoperation;
  int64_t standbyoperation;
  int64_t failuremode;
  int64_t off;
  int64_t recentmapmessageupdate;
  int64_t recentchangeinmapassignedlanesidsused;
  int64_t novalidmapisabilableatthistime;
  int64_t nobalidspatisabilableatthistime;
  int64_t reserve14;
  int64_t reserve15;
} v2x_msg__msg__IntersectionStatusObject;

// Struct for a sequence of v2x_msg__msg__IntersectionStatusObject.
typedef struct v2x_msg__msg__IntersectionStatusObject__Sequence
{
  v2x_msg__msg__IntersectionStatusObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msg__msg__IntersectionStatusObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__STRUCT_H_
