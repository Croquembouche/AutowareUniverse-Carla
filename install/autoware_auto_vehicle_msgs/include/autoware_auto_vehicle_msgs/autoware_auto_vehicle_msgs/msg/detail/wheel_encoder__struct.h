// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/WheelEncoder.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_H_

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

/// Struct defined in msg/WheelEncoder in the package autoware_auto_vehicle_msgs.
/**
  * Representation of a wheel-encoder measurement
 */
typedef struct autoware_auto_vehicle_msgs__msg__WheelEncoder
{
  std_msgs__msg__Header header;
  ///  Negative speed values indicate rotation in the opposite 
  ///  direction of the normal direction of travel of the vehicle.
  float speed_mps;
} autoware_auto_vehicle_msgs__msg__WheelEncoder;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__WheelEncoder.
typedef struct autoware_auto_vehicle_msgs__msg__WheelEncoder__Sequence
{
  autoware_auto_vehicle_msgs__msg__WheelEncoder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__WheelEncoder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WHEEL_ENCODER__STRUCT_H_
