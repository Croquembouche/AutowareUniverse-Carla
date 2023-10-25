// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_geometry_msgs:msg/Complex32.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__STRUCT_H_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Complex32 in the package autoware_auto_geometry_msgs.
/**
  *  Complex32.msg
  *  Can be used to represent yaw angle for trajectories
  *  To convert back to a yaw angle, see
  *  https://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
 */
typedef struct autoware_auto_geometry_msgs__msg__Complex32
{
  ///  cos(yaw / 2)
  float real;
  ///  sin(yaw / 2)
  float imag;
} autoware_auto_geometry_msgs__msg__Complex32;

// Struct for a sequence of autoware_auto_geometry_msgs__msg__Complex32.
typedef struct autoware_auto_geometry_msgs__msg__Complex32__Sequence
{
  autoware_auto_geometry_msgs__msg__Complex32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_geometry_msgs__msg__Complex32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__COMPLEX32__STRUCT_H_
