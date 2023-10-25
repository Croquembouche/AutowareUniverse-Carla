// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'JUDGE'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__JUDGE = 1
};

/// Constant 'NONE'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__NONE = 2
};

/// Constant 'STOP'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__STOP = 3
};

/// Constant 'GO'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__GO = 4
};

// Include directives for member types
// Member 'signal'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__struct.h"

/// Struct defined in msg/TrafficSignalWithJudge in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__TrafficSignalWithJudge
{
  uint8_t judge;
  bool has_state;
  autoware_auto_perception_msgs__msg__TrafficSignal signal;
} autoware_auto_perception_msgs__msg__TrafficSignalWithJudge;

// Struct for a sequence of autoware_auto_perception_msgs__msg__TrafficSignalWithJudge.
typedef struct autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__Sequence
{
  autoware_auto_perception_msgs__msg__TrafficSignalWithJudge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__TrafficSignalWithJudge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__STRUCT_H_
