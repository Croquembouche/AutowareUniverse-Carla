// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/TrafficLightRoi.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.h"

/// Struct defined in msg/TrafficLightRoi in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__TrafficLightRoi
{
  sensor_msgs__msg__RegionOfInterest roi;
  int32_t id;
} autoware_auto_perception_msgs__msg__TrafficLightRoi;

// Struct for a sequence of autoware_auto_perception_msgs__msg__TrafficLightRoi.
typedef struct autoware_auto_perception_msgs__msg__TrafficLightRoi__Sequence
{
  autoware_auto_perception_msgs__msg__TrafficLightRoi * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__TrafficLightRoi__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ROI__STRUCT_H_
