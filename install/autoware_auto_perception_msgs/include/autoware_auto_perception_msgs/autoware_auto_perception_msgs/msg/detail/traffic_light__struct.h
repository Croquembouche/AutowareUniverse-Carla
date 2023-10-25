// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RED'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__RED = 1
};

/// Constant 'AMBER'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__AMBER = 2
};

/// Constant 'GREEN'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__GREEN = 3
};

/// Constant 'WHITE'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__WHITE = 4
};

/// Constant 'CIRCLE'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__CIRCLE = 5
};

/// Constant 'LEFT_ARROW'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__LEFT_ARROW = 6
};

/// Constant 'RIGHT_ARROW'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__RIGHT_ARROW = 7
};

/// Constant 'UP_ARROW'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__UP_ARROW = 8
};

/// Constant 'DOWN_ARROW'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__DOWN_ARROW = 9
};

/// Constant 'DOWN_LEFT_ARROW'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__DOWN_LEFT_ARROW = 10
};

/// Constant 'DOWN_RIGHT_ARROW'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__DOWN_RIGHT_ARROW = 11
};

/// Constant 'CROSS'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__CROSS = 12
};

/// Constant 'SOLID_OFF'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__SOLID_OFF = 13
};

/// Constant 'SOLID_ON'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__SOLID_ON = 14
};

/// Constant 'FLASHING'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__FLASHING = 15
};

/// Constant 'UNKNOWN'.
enum
{
  autoware_auto_perception_msgs__msg__TrafficLight__UNKNOWN = 16
};

/// Struct defined in msg/TrafficLight in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__TrafficLight
{
  uint8_t color;
  uint8_t shape;
  uint8_t status;
  float confidence;
} autoware_auto_perception_msgs__msg__TrafficLight;

// Struct for a sequence of autoware_auto_perception_msgs__msg__TrafficLight.
typedef struct autoware_auto_perception_msgs__msg__TrafficLight__Sequence
{
  autoware_auto_perception_msgs__msg__TrafficLight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__TrafficLight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_H_
