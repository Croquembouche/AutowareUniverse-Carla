// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_adapi_v1_msgs:msg/VelocityFactorArray.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__STRUCT_H_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__STRUCT_H_

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
// Member 'factors'
#include "autoware_adapi_v1_msgs/msg/detail/velocity_factor__struct.h"

/// Struct defined in msg/VelocityFactorArray in the package autoware_adapi_v1_msgs.
typedef struct autoware_adapi_v1_msgs__msg__VelocityFactorArray
{
  std_msgs__msg__Header header;
  autoware_adapi_v1_msgs__msg__VelocityFactor__Sequence factors;
} autoware_adapi_v1_msgs__msg__VelocityFactorArray;

// Struct for a sequence of autoware_adapi_v1_msgs__msg__VelocityFactorArray.
typedef struct autoware_adapi_v1_msgs__msg__VelocityFactorArray__Sequence
{
  autoware_adapi_v1_msgs__msg__VelocityFactorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_adapi_v1_msgs__msg__VelocityFactorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__VELOCITY_FACTOR_ARRAY__STRUCT_H_
