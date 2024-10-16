// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/RouteState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  autoware_adapi_v1_msgs__msg__RouteState__UNKNOWN = 0
};

/// Constant 'UNSET'.
enum
{
  autoware_adapi_v1_msgs__msg__RouteState__UNSET = 1
};

/// Constant 'SET'.
enum
{
  autoware_adapi_v1_msgs__msg__RouteState__SET = 2
};

/// Constant 'ARRIVED'.
enum
{
  autoware_adapi_v1_msgs__msg__RouteState__ARRIVED = 3
};

/// Constant 'CHANGING'.
enum
{
  autoware_adapi_v1_msgs__msg__RouteState__CHANGING = 4
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/RouteState in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__RouteState
{
  builtin_interfaces__msg__Time stamp;
  uint16_t state;
} autoware_adapi_v1_msgs__msg__RouteState;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__RouteState.
typedef struct autoware_adapi_v1_msgs__msg__RouteState__Sequence
{
  autoware_adapi_v1_msgs__msg__RouteState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__RouteState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_STATE__STRUCT_H_
