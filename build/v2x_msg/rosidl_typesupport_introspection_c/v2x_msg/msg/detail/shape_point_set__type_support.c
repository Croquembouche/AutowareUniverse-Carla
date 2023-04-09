// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/ShapePointSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/shape_point_set__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/shape_point_set__functions.h"
#include "v2x_msg/msg/detail/shape_point_set__struct.h"


// Include directives for member types
// Member `anchor`
#include "v2x_msg/msg/position3_d.h"
// Member `anchor`
#include "v2x_msg/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `nodelist`
#include "v2x_msg/msg/node_list_xy.h"
// Member `nodelist`
#include "v2x_msg/msg/detail/node_list_xy__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__ShapePointSet__init(message_memory);
}

void v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_fini_function(void * message_memory)
{
  v2x_msg__msg__ShapePointSet__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_member_array[4] = {
  {
    "anchor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ShapePointSet, anchor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lanewidth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ShapePointSet, lanewidth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "directionality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ShapePointSet, directionality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodelist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ShapePointSet, nodelist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_members = {
  "v2x_msg__msg",  // message namespace
  "ShapePointSet",  // message name
  4,  // number of fields
  sizeof(v2x_msg__msg__ShapePointSet),
  v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_member_array,  // message members
  v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_type_support_handle = {
  0,
  &v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ShapePointSet)() {
  v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Position3D)();
  v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeListXY)();
  if (!v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__ShapePointSet__rosidl_typesupport_introspection_c__ShapePointSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
