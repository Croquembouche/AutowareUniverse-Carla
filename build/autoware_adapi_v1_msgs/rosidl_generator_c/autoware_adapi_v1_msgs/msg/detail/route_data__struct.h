// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/RouteData.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_DATA__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'segments'
#include "autoware_adapi_v1_msgs/msg/detail/route_segment__struct.h"

/// Struct defined in msg/RouteData in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__RouteData
{
  geometry_msgs__msg__Pose start;
  geometry_msgs__msg__Pose goal;
  autoware_adapi_v1_msgs__msg__RouteSegment__Sequence segments;
} autoware_adapi_v1_msgs__msg__RouteData;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__RouteData.
typedef struct autoware_adapi_v1_msgs__msg__RouteData__Sequence
{
  autoware_adapi_v1_msgs__msg__RouteData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__RouteData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_DATA__STRUCT_H_
