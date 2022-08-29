// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/node_offset_point_xy__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/node_offset_point_xy__functions.h"
#include "v2x_msg/msg/detail/node_offset_point_xy__struct.h"


// Include directives for member types
// Member `nodexy1`
#include "v2x_msg/msg/node_xy22b.h"
// Member `nodexy1`
#include "v2x_msg/msg/detail/node_xy22b__rosidl_typesupport_introspection_c.h"
// Member `nodexy2`
#include "v2x_msg/msg/node_xy24b.h"
// Member `nodexy2`
#include "v2x_msg/msg/detail/node_xy24b__rosidl_typesupport_introspection_c.h"
// Member `nodexy3`
#include "v2x_msg/msg/node_xy26b.h"
// Member `nodexy3`
#include "v2x_msg/msg/detail/node_xy26b__rosidl_typesupport_introspection_c.h"
// Member `nodexy4`
#include "v2x_msg/msg/node_xy28b.h"
// Member `nodexy4`
#include "v2x_msg/msg/detail/node_xy28b__rosidl_typesupport_introspection_c.h"
// Member `nodexy5`
#include "v2x_msg/msg/node_xy32b.h"
// Member `nodexy5`
#include "v2x_msg/msg/detail/node_xy32b__rosidl_typesupport_introspection_c.h"
// Member `nodelatlon`
#include "v2x_msg/msg/nodellmd64b.h"
// Member `nodelatlon`
#include "v2x_msg/msg/detail/nodellmd64b__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__NodeOffsetPointXY__init(message_memory);
}

void NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_fini_function(void * message_memory)
{
  v2x_msg__msg__NodeOffsetPointXY__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[6] = {
  {
    "nodexy1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointXY, nodexy1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodexy2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointXY, nodexy2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodexy3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointXY, nodexy3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodexy4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointXY, nodexy4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodexy5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__NodeOffsetPointXY, nodexy5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
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
    offsetof(v2x_msg__msg__NodeOffsetPointXY, nodelatlon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_members = {
  "v2x_msg__msg",  // message namespace
  "NodeOffsetPointXY",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__NodeOffsetPointXY),
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array,  // message members
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_init_function,  // function to initialize message memory (memory has to be allocated)
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle = {
  0,
  &NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeOffsetPointXY)() {
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeXY22b)();
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeXY24b)();
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeXY26b)();
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeXY28b)();
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeXY32b)();
  NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Nodellmd64b)();
  if (!NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle.typesupport_identifier) {
    NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NodeOffsetPointXY__rosidl_typesupport_introspection_c__NodeOffsetPointXY_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
