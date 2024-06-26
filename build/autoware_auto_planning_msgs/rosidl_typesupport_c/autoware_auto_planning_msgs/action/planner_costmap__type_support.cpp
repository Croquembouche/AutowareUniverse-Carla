// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from autoware_auto_planning_msgs:action/PlannerCostmap.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
#include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_Goal_type_support_ids_t;

static const _PlannerCostmap_Goal_type_support_ids_t _PlannerCostmap_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_Goal_type_support_symbol_names_t _PlannerCostmap_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Goal)),
  }
};

typedef struct _PlannerCostmap_Goal_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_Goal_type_support_data_t;

static _PlannerCostmap_Goal_type_support_data_t _PlannerCostmap_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_Goal_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_Goal)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_Result_type_support_ids_t;

static const _PlannerCostmap_Result_type_support_ids_t _PlannerCostmap_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_Result_type_support_symbol_names_t _PlannerCostmap_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Result)),
  }
};

typedef struct _PlannerCostmap_Result_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_Result_type_support_data_t;

static _PlannerCostmap_Result_type_support_data_t _PlannerCostmap_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_Result_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_Result)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_Feedback_type_support_ids_t;

static const _PlannerCostmap_Feedback_type_support_ids_t _PlannerCostmap_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_Feedback_type_support_symbol_names_t _PlannerCostmap_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_Feedback)),
  }
};

typedef struct _PlannerCostmap_Feedback_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_Feedback_type_support_data_t;

static _PlannerCostmap_Feedback_type_support_data_t _PlannerCostmap_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_Feedback_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_Feedback)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_SendGoal_Request_type_support_ids_t;

static const _PlannerCostmap_SendGoal_Request_type_support_ids_t _PlannerCostmap_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_SendGoal_Request_type_support_symbol_names_t _PlannerCostmap_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Request)),
  }
};

typedef struct _PlannerCostmap_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_SendGoal_Request_type_support_data_t;

static _PlannerCostmap_SendGoal_Request_type_support_data_t _PlannerCostmap_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_SendGoal_Request_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Request)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_SendGoal_Response_type_support_ids_t;

static const _PlannerCostmap_SendGoal_Response_type_support_ids_t _PlannerCostmap_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_SendGoal_Response_type_support_symbol_names_t _PlannerCostmap_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Response)),
  }
};

typedef struct _PlannerCostmap_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_SendGoal_Response_type_support_data_t;

static _PlannerCostmap_SendGoal_Response_type_support_data_t _PlannerCostmap_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_SendGoal_Response_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal_Response)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_SendGoal_type_support_ids_t;

static const _PlannerCostmap_SendGoal_type_support_ids_t _PlannerCostmap_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_SendGoal_type_support_symbol_names_t _PlannerCostmap_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal)),
  }
};

typedef struct _PlannerCostmap_SendGoal_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_SendGoal_type_support_data_t;

static _PlannerCostmap_SendGoal_type_support_data_t _PlannerCostmap_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_SendGoal_service_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PlannerCostmap_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_GetResult_Request_type_support_ids_t;

static const _PlannerCostmap_GetResult_Request_type_support_ids_t _PlannerCostmap_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_GetResult_Request_type_support_symbol_names_t _PlannerCostmap_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Request)),
  }
};

typedef struct _PlannerCostmap_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_GetResult_Request_type_support_data_t;

static _PlannerCostmap_GetResult_Request_type_support_data_t _PlannerCostmap_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_GetResult_Request_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Request)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_GetResult_Response_type_support_ids_t;

static const _PlannerCostmap_GetResult_Response_type_support_ids_t _PlannerCostmap_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_GetResult_Response_type_support_symbol_names_t _PlannerCostmap_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Response)),
  }
};

typedef struct _PlannerCostmap_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_GetResult_Response_type_support_data_t;

static _PlannerCostmap_GetResult_Response_type_support_data_t _PlannerCostmap_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_GetResult_Response_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult_Response)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_GetResult_type_support_ids_t;

static const _PlannerCostmap_GetResult_type_support_ids_t _PlannerCostmap_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_GetResult_type_support_symbol_names_t _PlannerCostmap_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult)),
  }
};

typedef struct _PlannerCostmap_GetResult_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_GetResult_type_support_data_t;

static _PlannerCostmap_GetResult_type_support_data_t _PlannerCostmap_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_GetResult_service_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PlannerCostmap_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace autoware_auto_planning_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PlannerCostmap_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlannerCostmap_FeedbackMessage_type_support_ids_t;

static const _PlannerCostmap_FeedbackMessage_type_support_ids_t _PlannerCostmap_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlannerCostmap_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlannerCostmap_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlannerCostmap_FeedbackMessage_type_support_symbol_names_t _PlannerCostmap_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlannerCostmap_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlannerCostmap_FeedbackMessage)),
  }
};

typedef struct _PlannerCostmap_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PlannerCostmap_FeedbackMessage_type_support_data_t;

static _PlannerCostmap_FeedbackMessage_type_support_data_t _PlannerCostmap_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlannerCostmap_FeedbackMessage_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlannerCostmap_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PlannerCostmap_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PlannerCostmap_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlannerCostmap_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlannerCostmap_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace autoware_auto_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_FeedbackMessage)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlannerCostmap_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "autoware_auto_planning_msgs/action/planner_costmap.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/planner_costmap__type_support.h"

static rosidl_action_type_support_t _autoware_auto_planning_msgs__action__PlannerCostmap__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap)()
{
  // Thread-safe by always writing the same values to the static struct
  _autoware_auto_planning_msgs__action__PlannerCostmap__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_SendGoal)();
  _autoware_auto_planning_msgs__action__PlannerCostmap__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_GetResult)();
  _autoware_auto_planning_msgs__action__PlannerCostmap__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _autoware_auto_planning_msgs__action__PlannerCostmap__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlannerCostmap_FeedbackMessage)();
  _autoware_auto_planning_msgs__action__PlannerCostmap__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_autoware_auto_planning_msgs__action__PlannerCostmap__typesupport_c;
}

#ifdef __cplusplus
}
#endif
