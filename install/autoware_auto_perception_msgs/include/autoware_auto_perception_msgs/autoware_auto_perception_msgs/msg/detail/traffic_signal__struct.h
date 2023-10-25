// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lights'
#include "autoware_auto_perception_msgs/msg/detail/traffic_light__struct.h"

// constants for array fields with an upper bound
// lights
enum
{
  autoware_auto_perception_msgs__msg__TrafficSignal__lights__MAX_SIZE = 10
};

/// Struct defined in msg/TrafficSignal in the package autoware_auto_perception_msgs.
/**
  *  A TrafficSignal is defined here as a group of multiple TrafficLights
  *  which each represent a single light, indicator, or bulb.
 */
typedef struct autoware_auto_perception_msgs__msg__TrafficSignal
{
  ///  A value of 0 indicates an invalid map_primitive_id. Signals which are not associated with map primitives should not be used in planning because this indicates that the required signal-to-lane mapping is not available.
  int32_t map_primitive_id;
  autoware_auto_perception_msgs__msg__TrafficLight__Sequence lights;
} autoware_auto_perception_msgs__msg__TrafficSignal;

// Struct for a sequence of autoware_auto_perception_msgs__msg__TrafficSignal.
typedef struct autoware_auto_perception_msgs__msg__TrafficSignal__Sequence
{
  autoware_auto_perception_msgs__msg__TrafficSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__TrafficSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL__STRUCT_H_
