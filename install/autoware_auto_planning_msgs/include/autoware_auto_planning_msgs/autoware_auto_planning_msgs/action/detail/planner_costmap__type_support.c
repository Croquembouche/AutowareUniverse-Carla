// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_planning_msgs:action/PlannerCostmap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
#include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `route`
#include "autoware_auto_planning_msgs/msg/had_map_route.h"
// Member `route`
#include "autoware_auto_planning_msgs/msg/detail/had_map_route__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_member_array[1] = {
  {
    "route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_Goal, route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_Goal",  // message name
  1,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_Goal),
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Goal)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, msg, HADMapRoute)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_Goal__rosidl_typesupport_introspection_c__PlannerCostmap_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `costmap`
#include "nav_msgs/msg/occupancy_grid.h"
// Member `costmap`
#include "nav_msgs/msg/detail/occupancy_grid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_Result__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_member_array[1] = {
  {
    "costmap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_Result, costmap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_Result",  // message name
  1,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_Result),
  autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Result)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, OccupancyGrid)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_Result__rosidl_typesupport_introspection_c__PlannerCostmap_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `unused_variable`
#include "std_msgs/msg/empty.h"
// Member `unused_variable`
#include "std_msgs/msg/detail/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_member_array[1] = {
  {
    "unused_variable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_Feedback, unused_variable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_Feedback",  // message name
  1,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_Feedback),
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Feedback)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Empty)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_Feedback__rosidl_typesupport_introspection_c__PlannerCostmap_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "autoware_auto_planning_msgs/action/planner_costmap.h"
// Member `goal`
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request),
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Request)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Goal)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Request__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response),
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Response)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_SendGoal_Response__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_service_members = {
  "autoware_auto_planning_msgs__action",  // service namespace
  "PlannerCostmap_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_service_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal)() {
  if (!autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_service_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Response)()->data;
  }

  return &autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request),
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Request)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Request__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "autoware_auto_planning_msgs/action/planner_costmap.h"
// Member `result`
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response),
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Response)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Result)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_GetResult_Response__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_service_members = {
  "autoware_auto_planning_msgs__action",  // service namespace
  "PlannerCostmap_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_service_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult)() {
  if (!autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_service_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Response)()->data;
  }

  return &autoware_auto_planning_msgs__action__detail__planner_costmap__rosidl_typesupport_introspection_c__PlannerCostmap_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"
// already included above
// #include "autoware_auto_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__functions.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "autoware_auto_planning_msgs/action/planner_costmap.h"
// Member `feedback`
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__init(message_memory);
}

void autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_fini_function(void * message_memory)
{
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_members = {
  "autoware_auto_planning_msgs__action",  // message namespace
  "PlannerCostmap_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage),
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_member_array,  // message members
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_type_support_handle = {
  0,
  &autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_FeedbackMessage)() {
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Feedback)();
  if (!autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_planning_msgs__action__PlannerCostmap_FeedbackMessage__rosidl_typesupport_introspection_c__PlannerCostmap_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
