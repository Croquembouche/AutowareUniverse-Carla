// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_vehicle_msgs:msg/StationaryLockingCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__STRUCT_H_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/StationaryLockingCommand in the package autoware_auto_vehicle_msgs.
/**
  *  Command to avoid stationary locking \(Park gear, Parking Brake, etc.\). This command assumes that the VehicleInterface or lower levels are controlling the mechanism by which a vehicle is prevented from moving \("stationary locking"\) and will automatically attempt to apply stationary locking if a 0-velocity command is applied for an arbitrary period of time. Setting the avoid_stationary_locking field to TRUE tells the VehicleInterface or lower levels to avoid making this transition.
 */
typedef struct autoware_auto_vehicle_msgs__msg__StationaryLockingCommand
{
  builtin_interfaces__msg__Time stamp;
  bool avoid_stationary_locking;
} autoware_auto_vehicle_msgs__msg__StationaryLockingCommand;

// Struct for a sequence of autoware_auto_vehicle_msgs__msg__StationaryLockingCommand.
typedef struct autoware_auto_vehicle_msgs__msg__StationaryLockingCommand__Sequence
{
  autoware_auto_vehicle_msgs__msg__StationaryLockingCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_vehicle_msgs__msg__StationaryLockingCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__STRUCT_H_
