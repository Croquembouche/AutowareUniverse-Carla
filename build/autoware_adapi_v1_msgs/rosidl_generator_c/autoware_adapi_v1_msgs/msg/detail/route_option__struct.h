// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/RouteOption.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RouteOption in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__RouteOption
{
  bool allow_goal_modification;
} autoware_adapi_v1_msgs__msg__RouteOption;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__RouteOption.
typedef struct autoware_adapi_v1_msgs__msg__RouteOption__Sequence
{
  autoware_adapi_v1_msgs__msg__RouteOption * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__RouteOption__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__STRUCT_H_
