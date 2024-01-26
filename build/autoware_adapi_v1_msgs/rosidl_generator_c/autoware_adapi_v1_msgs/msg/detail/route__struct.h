// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "autoware_adapi_v1_msgs/msg/detail/route_data__struct.h"

// constants for array fields with an upper bound
// data
enum
{
  autoware_adapi_v1_msgs__msg__Route__data__MAX_SIZE = 1
};

/// Struct defined in msg/Route in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__Route
{
  std_msgs__msg__Header header;
  autoware_adapi_v1_msgs__msg__RouteData__Sequence data;
} autoware_adapi_v1_msgs__msg__Route;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__Route.
typedef struct autoware_adapi_v1_msgs__msg__Route__Sequence
{
  autoware_adapi_v1_msgs__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE__STRUCT_H_
