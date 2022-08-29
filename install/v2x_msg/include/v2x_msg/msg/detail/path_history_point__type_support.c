// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/path_history_point__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/path_history_point__functions.h"
#include "v2x_msg/msg/detail/path_history_point__struct.h"


// Include directives for member types
// Member `accuracy`
#include "v2x_msg/msg/positional_accuracy.h"
// Member `accuracy`
#include "v2x_msg/msg/detail/positional_accuracy__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__PathHistoryPoint__init(message_memory);
}

void PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_fini_function(void * message_memory)
{
  v2x_msg__msg__PathHistoryPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[7] = {
  {
    "latoffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PathHistoryPoint, latoffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lonoffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PathHistoryPoint, lonoffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevationoffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PathHistoryPoint, elevationoffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeoffset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PathHistoryPoint, timeoffset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PathHistoryPoint, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accuracy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PathHistoryPoint, accuracy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heading",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PathHistoryPoint, heading),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_members = {
  "v2x_msg__msg",  // message namespace
  "PathHistoryPoint",  // message name
  7,  // number of fields
  sizeof(v2x_msg__msg__PathHistoryPoint),
  PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array,  // message members
  PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle = {
  0,
  &PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PathHistoryPoint)() {
  PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PositionalAccuracy)();
  if (!PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle.typesupport_identifier) {
    PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathHistoryPoint__rosidl_typesupport_introspection_c__PathHistoryPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
