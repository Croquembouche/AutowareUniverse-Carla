// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__STRUCT_H_

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
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RelativePositionWithCovarianceStamped in the package autoware_auto_geometry_msgs.
/**
  *  This message is a generalized representation of a 3D pose without orientation of the origin of one frame within a child frame.
 */
typedef struct autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String child_frame_id;
  geometry_msgs__msg__Point position;
  double covariance[9];
} autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped;

// Struct for a sequence of autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped.
typedef struct autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence
{
  autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__STRUCT_H_
