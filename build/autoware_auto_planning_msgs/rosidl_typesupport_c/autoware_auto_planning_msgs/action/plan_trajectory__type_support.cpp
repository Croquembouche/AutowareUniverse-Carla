// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from autoware_auto_planning_msgs:action/PlanTrajectory.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
#include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_Goal_type_support_ids_t;

static const _PlanTrajectory_Goal_type_support_ids_t _PlanTrajectory_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_Goal_type_support_symbol_names_t _PlanTrajectory_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_Goal)),
  }
};

typedef struct _PlanTrajectory_Goal_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_Goal_type_support_data_t;

static _PlanTrajectory_Goal_type_support_data_t _PlanTrajectory_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_Goal_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_Goal_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_Goal)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_Result_type_support_ids_t;

static const _PlanTrajectory_Result_type_support_ids_t _PlanTrajectory_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_Result_type_support_symbol_names_t _PlanTrajectory_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_Result)),
  }
};

typedef struct _PlanTrajectory_Result_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_Result_type_support_data_t;

static _PlanTrajectory_Result_type_support_data_t _PlanTrajectory_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_Result_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_Result_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_Result)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_Feedback_type_support_ids_t;

static const _PlanTrajectory_Feedback_type_support_ids_t _PlanTrajectory_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_Feedback_type_support_symbol_names_t _PlanTrajectory_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_Feedback)),
  }
};

typedef struct _PlanTrajectory_Feedback_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_Feedback_type_support_data_t;

static _PlanTrajectory_Feedback_type_support_data_t _PlanTrajectory_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_Feedback_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_Feedback_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_Feedback)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_SendGoal_Request_type_support_ids_t;

static const _PlanTrajectory_SendGoal_Request_type_support_ids_t _PlanTrajectory_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_SendGoal_Request_type_support_symbol_names_t _PlanTrajectory_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal_Request)),
  }
};

typedef struct _PlanTrajectory_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_SendGoal_Request_type_support_data_t;

static _PlanTrajectory_SendGoal_Request_type_support_data_t _PlanTrajectory_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_SendGoal_Request_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_SendGoal_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal_Request)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_SendGoal_Response_type_support_ids_t;

static const _PlanTrajectory_SendGoal_Response_type_support_ids_t _PlanTrajectory_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_SendGoal_Response_type_support_symbol_names_t _PlanTrajectory_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal_Response)),
  }
};

typedef struct _PlanTrajectory_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_SendGoal_Response_type_support_data_t;

static _PlanTrajectory_SendGoal_Response_type_support_data_t _PlanTrajectory_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_SendGoal_Response_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_SendGoal_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal_Response)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_SendGoal_type_support_ids_t;

static const _PlanTrajectory_SendGoal_type_support_ids_t _PlanTrajectory_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_SendGoal_type_support_symbol_names_t _PlanTrajectory_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal)),
  }
};

typedef struct _PlanTrajectory_SendGoal_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_SendGoal_type_support_data_t;

static _PlanTrajectory_SendGoal_type_support_data_t _PlanTrajectory_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_SendGoal_service_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PlanTrajectory_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_SendGoal_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_GetResult_Request_type_support_ids_t;

static const _PlanTrajectory_GetResult_Request_type_support_ids_t _PlanTrajectory_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_GetResult_Request_type_support_symbol_names_t _PlanTrajectory_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult_Request)),
  }
};

typedef struct _PlanTrajectory_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_GetResult_Request_type_support_data_t;

static _PlanTrajectory_GetResult_Request_type_support_data_t _PlanTrajectory_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_GetResult_Request_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_GetResult_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult_Request)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_GetResult_Response_type_support_ids_t;

static const _PlanTrajectory_GetResult_Response_type_support_ids_t _PlanTrajectory_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_GetResult_Response_type_support_symbol_names_t _PlanTrajectory_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult_Response)),
  }
};

typedef struct _PlanTrajectory_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_GetResult_Response_type_support_data_t;

static _PlanTrajectory_GetResult_Response_type_support_data_t _PlanTrajectory_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_GetResult_Response_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_GetResult_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult_Response)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_GetResult_type_support_ids_t;

static const _PlanTrajectory_GetResult_type_support_ids_t _PlanTrajectory_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_GetResult_type_support_symbol_names_t _PlanTrajectory_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult)),
  }
};

typedef struct _PlanTrajectory_GetResult_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_GetResult_type_support_data_t;

static _PlanTrajectory_GetResult_type_support_data_t _PlanTrajectory_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_GetResult_service_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PlanTrajectory_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_GetResult_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__struct.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"
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

typedef struct _PlanTrajectory_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PlanTrajectory_FeedbackMessage_type_support_ids_t;

static const _PlanTrajectory_FeedbackMessage_type_support_ids_t _PlanTrajectory_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PlanTrajectory_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PlanTrajectory_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PlanTrajectory_FeedbackMessage_type_support_symbol_names_t _PlanTrajectory_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, autoware_auto_planning_msgs, action, PlanTrajectory_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_planning_msgs, action, PlanTrajectory_FeedbackMessage)),
  }
};

typedef struct _PlanTrajectory_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PlanTrajectory_FeedbackMessage_type_support_data_t;

static _PlanTrajectory_FeedbackMessage_type_support_data_t _PlanTrajectory_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PlanTrajectory_FeedbackMessage_message_typesupport_map = {
  2,
  "autoware_auto_planning_msgs",
  &_PlanTrajectory_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PlanTrajectory_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PlanTrajectory_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PlanTrajectory_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PlanTrajectory_FeedbackMessage_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_FeedbackMessage)() {
  return &::autoware_auto_planning_msgs::action::rosidl_typesupport_c::PlanTrajectory_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "autoware_auto_planning_msgs/action/plan_trajectory.h"
// already included above
// #include "autoware_auto_planning_msgs/action/detail/plan_trajectory__type_support.h"

static rosidl_action_type_support_t _autoware_auto_planning_msgs__action__PlanTrajectory__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory)()
{
  // Thread-safe by always writing the same values to the static struct
  _autoware_auto_planning_msgs__action__PlanTrajectory__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_SendGoal)();
  _autoware_auto_planning_msgs__action__PlanTrajectory__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_GetResult)();
  _autoware_auto_planning_msgs__action__PlanTrajectory__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _autoware_auto_planning_msgs__action__PlanTrajectory__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, autoware_auto_planning_msgs, action, PlanTrajectory_FeedbackMessage)();
  _autoware_auto_planning_msgs__action__PlanTrajectory__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_autoware_auto_planning_msgs__action__PlanTrajectory__typesupport_c;
}

#ifdef __cplusplus
}
#endif
