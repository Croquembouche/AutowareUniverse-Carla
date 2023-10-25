// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:action/PlanTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sub_route'
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__struct.h"

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_Goal
{
  autoware_auto_planning_msgs__msg__HADMapRoute sub_route;
} autoware_auto_planning_msgs__action__PlanTrajectory_Goal;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_Goal.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_Goal__Sequence;


// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  autoware_auto_planning_msgs__action__PlanTrajectory_Result__SUCCESS = 0
};

/// Constant 'FAIL'.
enum
{
  autoware_auto_planning_msgs__action__PlanTrajectory_Result__FAIL = 1
};

// Include directives for member types
// Member 'trajectory'
#include "autoware_auto_planning_msgs/msg/detail/trajectory__struct.h"

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_Result
{
  /// Report of end condition. Value should be one of PlanTrajectory_Constants
  uint8_t result;
  autoware_auto_planning_msgs__msg__Trajectory trajectory;
} autoware_auto_planning_msgs__action__PlanTrajectory_Result;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_Result.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_Feedback
{
  /// Currently we don't need feedback, but we need some variable to compile
  uint8_t unused_variable;
} autoware_auto_planning_msgs__action__PlanTrajectory_Feedback;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_Feedback.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  autoware_auto_planning_msgs__action__PlanTrajectory_Goal goal;
} autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response
{
  int8_t status;
  autoware_auto_planning_msgs__action__PlanTrajectory_Result result;
} autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"

/// Struct defined in action/PlanTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  autoware_auto_planning_msgs__action__PlanTrajectory_Feedback feedback;
} autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage.
typedef struct autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence
{
  autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlanTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLAN_TRAJECTORY__STRUCT_H_
