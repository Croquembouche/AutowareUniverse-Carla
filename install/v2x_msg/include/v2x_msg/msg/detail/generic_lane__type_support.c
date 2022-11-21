// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/GenericLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/generic_lane__functions.h"
#include "v2x_msg/msg/detail/generic_lane__struct.h"


// Include directives for member types
// Member `name`
// Member `maneuvers`
#include "rosidl_runtime_c/string_functions.h"
// Member `laneattributes`
#include "v2x_msg/msg/lane_attributes.h"
// Member `laneattributes`
#include "v2x_msg/msg/detail/lane_attributes__rosidl_typesupport_introspection_c.h"
// Member `nodelist`
#include "v2x_msg/msg/node_list_xy.h"
// Member `nodelist`
#include "v2x_msg/msg/detail/node_list_xy__rosidl_typesupport_introspection_c.h"
// Member `connectsto`
#include "v2x_msg/msg/connection.h"
// Member `connectsto`
#include "v2x_msg/msg/detail/connection__rosidl_typesupport_introspection_c.h"
// Member `overlays`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__GenericLane__init(message_memory);
}

void GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function(void * message_memory)
{
  v2x_msg__msg__GenericLane__fini(message_memory);
}

size_t GenericLane__rosidl_typesupport_introspection_c__size_function__NodeListXY__nodelist(
  const void * untyped_member)
{
  const v2x_msg__msg__NodeListXY__Sequence * member =
    (const v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  return member->size;
}

const void * GenericLane__rosidl_typesupport_introspection_c__get_const_function__NodeListXY__nodelist(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__NodeListXY__Sequence * member =
    (const v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GenericLane__rosidl_typesupport_introspection_c__get_function__NodeListXY__nodelist(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__NodeListXY__Sequence * member =
    (v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GenericLane__rosidl_typesupport_introspection_c__resize_function__NodeListXY__nodelist(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__NodeListXY__Sequence * member =
    (v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  v2x_msg__msg__NodeListXY__Sequence__fini(member);
  return v2x_msg__msg__NodeListXY__Sequence__init(member, size);
}

size_t GenericLane__rosidl_typesupport_introspection_c__size_function__Connection__connectsto(
  const void * untyped_member)
{
  const v2x_msg__msg__Connection__Sequence * member =
    (const v2x_msg__msg__Connection__Sequence *)(untyped_member);
  return member->size;
}

const void * GenericLane__rosidl_typesupport_introspection_c__get_const_function__Connection__connectsto(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__Connection__Sequence * member =
    (const v2x_msg__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GenericLane__rosidl_typesupport_introspection_c__get_function__Connection__connectsto(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__Connection__Sequence * member =
    (v2x_msg__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GenericLane__rosidl_typesupport_introspection_c__resize_function__Connection__connectsto(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__Connection__Sequence * member =
    (v2x_msg__msg__Connection__Sequence *)(untyped_member);
  v2x_msg__msg__Connection__Sequence__fini(member);
  return v2x_msg__msg__Connection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[9] = {
  {
    "laneid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, laneid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ingressapproach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, ingressapproach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egressapproach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, egressapproach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laneattributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, laneattributes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuvers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, maneuvers),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nodelist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, nodelist),  // bytes offset in struct
    NULL,  // default value
    GenericLane__rosidl_typesupport_introspection_c__size_function__NodeListXY__nodelist,  // size() function pointer
    GenericLane__rosidl_typesupport_introspection_c__get_const_function__NodeListXY__nodelist,  // get_const(index) function pointer
    GenericLane__rosidl_typesupport_introspection_c__get_function__NodeListXY__nodelist,  // get(index) function pointer
    GenericLane__rosidl_typesupport_introspection_c__resize_function__NodeListXY__nodelist  // resize(index) function pointer
  },
  {
    "connectsto",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, connectsto),  // bytes offset in struct
    NULL,  // default value
    GenericLane__rosidl_typesupport_introspection_c__size_function__Connection__connectsto,  // size() function pointer
    GenericLane__rosidl_typesupport_introspection_c__get_const_function__Connection__connectsto,  // get_const(index) function pointer
    GenericLane__rosidl_typesupport_introspection_c__get_function__Connection__connectsto,  // get(index) function pointer
    GenericLane__rosidl_typesupport_introspection_c__resize_function__Connection__connectsto  // resize(index) function pointer
  },
  {
    "overlays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__GenericLane, overlays),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members = {
  "v2x_msg__msg",  // message namespace
  "GenericLane",  // message name
  9,  // number of fields
  sizeof(v2x_msg__msg__GenericLane),
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array,  // message members
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function,  // function to initialize message memory (memory has to be allocated)
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle = {
  0,
  &GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, GenericLane)() {
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, LaneAttributes)();
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeListXY)();
  GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Connection)();
  if (!GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier) {
    GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
