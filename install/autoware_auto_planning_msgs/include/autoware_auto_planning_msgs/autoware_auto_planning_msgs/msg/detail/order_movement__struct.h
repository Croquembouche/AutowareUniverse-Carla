// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:msg/OrderMovement.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NOTSET'.
enum
{
  autoware_auto_planning_msgs__msg__OrderMovement__NOTSET = 0
};

/// Constant 'STOP'.
enum
{
  autoware_auto_planning_msgs__msg__OrderMovement__STOP = 1
};

/// Constant 'GO'.
enum
{
  autoware_auto_planning_msgs__msg__OrderMovement__GO = 2
};

/// Constant 'SLOWDOWN'.
enum
{
  autoware_auto_planning_msgs__msg__OrderMovement__SLOWDOWN = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/OrderMovement in the package autoware_auto_planning_msgs.
/**
  * Movement order for planner to follow
 */
typedef struct autoware_auto_planning_msgs__msg__OrderMovement
{
  std_msgs__msg__Header header;
  uint8_t order_movement;
} autoware_auto_planning_msgs__msg__OrderMovement;

// Struct for a sequence of autoware_auto_planning_msgs__msg__OrderMovement.
typedef struct autoware_auto_planning_msgs__msg__OrderMovement__Sequence
{
  autoware_auto_planning_msgs__msg__OrderMovement * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__msg__OrderMovement__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ORDER_MOVEMENT__STRUCT_H_
