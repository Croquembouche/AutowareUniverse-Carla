// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'preferred'
// Member 'alternatives'
#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__struct.h"

/// Struct defined in msg/RouteSegment in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__RouteSegment
{
  autoware_adapi_v1_msgs__msg__RoutePrimitive preferred;
  /// Does not include the preferred primitive.
  autoware_adapi_v1_msgs__msg__RoutePrimitive__Sequence alternatives;
} autoware_adapi_v1_msgs__msg__RouteSegment;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__RouteSegment.
typedef struct autoware_adapi_v1_msgs__msg__RouteSegment__Sequence
{
  autoware_adapi_v1_msgs__msg__RouteSegment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__RouteSegment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_H_
