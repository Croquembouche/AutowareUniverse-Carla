// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:srv/ModifyTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'original_trajectory'
#include "autoware_auto_planning_msgs/msg/detail/trajectory__struct.h"

/// Struct defined in srv/ModifyTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__srv__ModifyTrajectory_Request
{
  /// Trajectory to be modified
  autoware_auto_planning_msgs__msg__Trajectory original_trajectory;
} autoware_auto_planning_msgs__srv__ModifyTrajectory_Request;

// Struct for a sequence of autoware_auto_planning_msgs__srv__ModifyTrajectory_Request.
typedef struct autoware_auto_planning_msgs__srv__ModifyTrajectory_Request__Sequence
{
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__srv__ModifyTrajectory_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'modified_trajectory'
// already included above
// #include "autoware_auto_planning_msgs/msg/detail/trajectory__struct.h"

/// Struct defined in srv/ModifyTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__srv__ModifyTrajectory_Response
{
  /// Trajectory after modification
  autoware_auto_planning_msgs__msg__Trajectory modified_trajectory;
} autoware_auto_planning_msgs__srv__ModifyTrajectory_Response;

// Struct for a sequence of autoware_auto_planning_msgs__srv__ModifyTrajectory_Response.
typedef struct autoware_auto_planning_msgs__srv__ModifyTrajectory_Response__Sequence
{
  autoware_auto_planning_msgs__srv__ModifyTrajectory_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__srv__ModifyTrajectory_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__STRUCT_H_
