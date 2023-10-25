// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_geometry_msgs:msg/Quaternion32.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__STRUCT_H_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Quaternion32 in the package autoware_auto_geometry_msgs.
/**
  *  Represents rotation, but with less precision than the message in common_interfaces
 */
typedef struct autoware_auto_geometry_msgs__msg__Quaternion32
{
  float x;
  float y;
  float z;
  float w;
} autoware_auto_geometry_msgs__msg__Quaternion32;

// Struct for a sequence of autoware_auto_geometry_msgs__msg__Quaternion32.
typedef struct autoware_auto_geometry_msgs__msg__Quaternion32__Sequence
{
  autoware_auto_geometry_msgs__msg__Quaternion32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_geometry_msgs__msg__Quaternion32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__QUATERNION32__STRUCT_H_
