// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/computed_lane__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/computed_lane__functions.h"
#include "v2x_msg/msg/detail/computed_lane__struct.h"


// Include directives for member types
// Member `offsetxaxis`
#include "v2x_msg/msg/offset_xaxis.h"
// Member `offsetxaxis`
#include "v2x_msg/msg/detail/offset_xaxis__rosidl_typesupport_introspection_c.h"
// Member `offsetyaxis`
#include "v2x_msg/msg/offset_yaxis.h"
// Member `offsetyaxis`
#include "v2x_msg/msg/detail/offset_yaxis__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__ComputedLane__init(message_memory);
}

void v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_fini_function(void * message_memory)
{
  v2x_msg__msg__ComputedLane__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[6] = {
  {
    "referencelaneid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ComputedLane, referencelaneid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offsetxaxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ComputedLane, offsetxaxis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offsetyaxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ComputedLane, offsetyaxis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotatexy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ComputedLane, rotatexy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scalexaxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ComputedLane, scalexaxis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scaleyaxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__ComputedLane, scaleyaxis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_members = {
  "v2x_msg__msg",  // message namespace
  "ComputedLane",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__ComputedLane),
  v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array,  // message members
  v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle = {
  0,
  &v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ComputedLane)() {
  v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, OffsetXaxis)();
  v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, OffsetYaxis)();
  if (!v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
