// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/HazardLightsReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_REPORT__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISABLE'.
enum
{
  autoware_auto_vehicle_msgs__msg__HazardLightsReport__DISABLE = 1
};

/// Constant 'ENABLE'.
enum
{
  autoware_auto_vehicle_msgs__msg__HazardLightsReport__ENABLE = 2
};

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/HazardLightsReport in the package autoware_auto_vehicle_msgs.
typedef struct autoware_auto_vehicle_msgs__msg__HazardLightsReport
{
  builtin_interfaces__msg__Time stamp;
  uint8_t report;
} autoware_auto_vehicle_msgs__msg__HazardLightsReport;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__HazardLightsReport.
typedef struct autoware_auto_vehicle_msgs__msg__HazardLightsReport__Sequence
{
  autoware_auto_vehicle_msgs__msg__HazardLightsReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__HazardLightsReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HAZARD_LIGHTS_REPORT__STRUCT_H_
