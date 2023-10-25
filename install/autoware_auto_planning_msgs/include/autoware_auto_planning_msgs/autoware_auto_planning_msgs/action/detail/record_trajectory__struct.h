// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:action/RecordTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'record_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_Goal
{
  /// A path to the CSV file which will be created to save the recorded trajectory.
  rosidl_runtime_c__String record_path;
} autoware_auto_planning_msgs__action__RecordTrajectory_Goal;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_Goal.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_Goal__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_Result
{
  /// This action has no result but we must provide something here.
  bool unused_flag;
} autoware_auto_planning_msgs__action__RecordTrajectory_Result;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_Result.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_Result__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_Feedback
{
  int32_t current_length;
} autoware_auto_planning_msgs__action__RecordTrajectory_Feedback;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_Feedback.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_Feedback__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "autoware_auto_planning_msgs/action/detail/record_trajectory__struct.h"

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  autoware_auto_planning_msgs__action__RecordTrajectory_Goal goal;
} autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/record_trajectory__struct.h"

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response
{
  int8_t status;
  autoware_auto_planning_msgs__action__RecordTrajectory_Result result;
} autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/record_trajectory__struct.h"

/// Struct defined in action/RecordTrajectory in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  autoware_auto_planning_msgs__action__RecordTrajectory_Feedback feedback;
} autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage;

// Struct for a sequence of autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage.
typedef struct autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage__Sequence
{
  autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__RecordTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__RECORD_TRAJECTORY__STRUCT_H_
