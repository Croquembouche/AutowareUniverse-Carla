// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__STRUCT_H_

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
// Member 'signal'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__struct.h"

/// Struct defined in msg/TrafficSignalStamped in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__TrafficSignalStamped
{
  std_msgs__msg__Header header;
  autoware_auto_perception_msgs__msg__TrafficSignal signal;
} autoware_auto_perception_msgs__msg__TrafficSignalStamped;

// Struct for a sequence of autoware_auto_perception_msgs__msg__TrafficSignalStamped.
typedef struct autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence
{
  autoware_auto_perception_msgs__msg__TrafficSignalStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__TrafficSignalStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_STAMPED__STRUCT_H_
