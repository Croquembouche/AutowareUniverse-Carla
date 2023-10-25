// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/PointXYZIF.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'END_OF_SCAN_ID'.
enum
{
  autoware_auto_perception_msgs__msg__PointXYZIF__END_OF_SCAN_ID = 65535
};

/// Struct defined in msg/PointXYZIF in the package autoware_auto_perception_msgs.
/**
  *  This message is meant to mirror autoware::common::types::PointXYZIF
 */
typedef struct autoware_auto_perception_msgs__msg__PointXYZIF
{
  float x;
  float y;
  float z;
  float intensity;
  uint16_t id;
} autoware_auto_perception_msgs__msg__PointXYZIF;

// Struct for a sequence of autoware_auto_perception_msgs__msg__PointXYZIF.
typedef struct autoware_auto_perception_msgs__msg__PointXYZIF__Sequence
{
  autoware_auto_perception_msgs__msg__PointXYZIF * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__PointXYZIF__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__POINT_XYZIF__STRUCT_H_
