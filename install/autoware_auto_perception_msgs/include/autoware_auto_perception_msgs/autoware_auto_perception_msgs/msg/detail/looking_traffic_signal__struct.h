// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__STRUCT_H_

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
// Member 'perception'
// Member 'external'
// Member 'result'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__struct.h"

/// Struct defined in msg/LookingTrafficSignal in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__LookingTrafficSignal
{
  std_msgs__msg__Header header;
  bool is_module_running;
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge perception;
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge external;
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge result;
} autoware_auto_perception_msgs__msg__LookingTrafficSignal;

// Struct for a sequence of autoware_auto_perception_msgs__msg__LookingTrafficSignal.
typedef struct autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence
{
  autoware_auto_perception_msgs__msg__LookingTrafficSignal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__LookingTrafficSignal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__STRUCT_H_
