// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_planning_msgs:action/PlannerCostmap.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__STRUCT_H_
#define AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'route'
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_Goal
{
  /// Route defined by start and goal point and map primitivesbetween given points.
  autoware_auto_planning_msgs__msg__HADMapRoute route;
} autoware_auto_planning_msgs__action__PlannerCostmap_Goal;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_Goal.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_Goal__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'costmap'
#include "nav_msgs/msg/detail/occupancy_grid__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_Result
{
  /// Costmap with obstacles and lanelets position applied
  nav_msgs__msg__OccupancyGrid costmap;
} autoware_auto_planning_msgs__action__PlannerCostmap_Result;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_Result.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_Result__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'unused_variable'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_Feedback
{
  /// Currently there is no feedback, but variable is needed to compile
  std_msgs__msg__Empty unused_variable;
} autoware_auto_planning_msgs__action__PlannerCostmap_Feedback;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_Feedback.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal goal;
} autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response
{
  int8_t status;
  autoware_auto_planning_msgs__action__PlannerCostmap_Result result;
} autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"

/// Struct defined in action/PlannerCostmap in the package autoware_auto_planning_msgs.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback feedback;
} autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage;

// Struct for a sequence of autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage.
typedef struct autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__Sequence
{
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__ACTION__DETAIL__PLANNER_COSTMAP__STRUCT_H_
