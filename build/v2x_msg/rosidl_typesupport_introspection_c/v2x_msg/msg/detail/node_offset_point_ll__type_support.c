// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/NodeOffsetPointLL.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/node_offset_point_ll__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/node_offset_point_ll__functions.h"
#include "v2x_msg/msg/detail/node_offset_point_ll__struct.h"


// Include directives for member types
// Member `nodell1`
#include "v2x_msg/msg/node_ll24_b.h"
// Member `nodell1`
#include "v2x_msg/msg/detail/node_ll24_b__rosidl_typesupport_introspection_c.h"
// Member `nodell2`
#include "v2x_msg/msg/node_ll28_b.h"
// Member `nodell2`
#include "v2x_msg/msg/detail/node_ll28_b__rosidl_typesupport_introspection_c.h"
// Member `nodell3`
#include "v2x_msg/msg/node_ll32_b.h"
// Member `nodell3`
#include "v2x_msg/msg/detail/node_ll32_b__rosidl_typesupport_introspection_c.h"
// Member `nodell4`
#include "v2x_msg/msg/node_ll36_b.h"
// Member `nodell4`
#include "v2x_msg/msg/detail/node_ll36_b__rosidl_typesupport_introspection_c.h"
// Member `nodell5`
#include "v2x_msg/msg/node_ll44_b.h"
// Member `nodell5`
#include "v2x_msg/msg/detail/node_ll44_b__rosidl_typesupport_introspection_c.h"
// Member `nodell6`
#include "v2x_msg/msg/node_ll48_b.h"
// Member `nodell6`
#include "v2x_msg/msg/detail/node_ll48_b__rosidl_typesupport_introspection_c.h"
// Member `nodelatlon`
#include "v2x_msg/msg/nodellmd64b.h"
// Member `nodelatlon`
#include "v2x_msg/msg/detail/nodellmd64b__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__NodeOffsetPointLL__init(message_memory);
}

void v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_fini_function(void * message_memory)
{
  v2x_msg__msg__NodeOffsetPointLL__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[7] = {
  {
    "nodell1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointLL, nodell1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodell2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointLL, nodell2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodell3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointLL, nodell3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodell4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointLL, nodell4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodell5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointLL, nodell5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodell6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointLL, nodell6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodelatlon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointLL, nodelatlon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_members = {
  "v2x_msg__msg",  // message namespace
  "NodeOffsetPointLL",  // message name
  7,  // number of fields
  sizeof(v2x_msg__msg__NodeOffsetPointLL),
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array,  // message members
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_type_support_handle = {
  0,
  &v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeOffsetPointLL)() {
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeLL24B)();
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeLL28B)();
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeLL32B)();
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeLL36B)();
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeLL44B)();
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeLL48B)();
  v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Nodellmd64b)();
  if (!v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__NodeOffsetPointLL__rosidl_typesupport_introspection_c__NodeOffsetPointLL_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
