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

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__GenericLane__init(message_memory);
}

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function(void * message_memory)
{
  v2x_msg__msg__GenericLane__fini(message_memory);
}

size_t v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__nodelist(
  const void * untyped_member)
{
  const v2x_msg__msg__NodeListXY__Sequence * member =
    (const v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__nodelist(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__NodeListXY__Sequence * member =
    (const v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__nodelist(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__NodeListXY__Sequence * member =
    (v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__nodelist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__NodeListXY * item =
    ((const v2x_msg__msg__NodeListXY *)
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__nodelist(untyped_member, index));
  v2x_msg__msg__NodeListXY * value =
    (v2x_msg__msg__NodeListXY *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__nodelist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__NodeListXY * item =
    ((v2x_msg__msg__NodeListXY *)
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__nodelist(untyped_member, index));
  const v2x_msg__msg__NodeListXY * value =
    (const v2x_msg__msg__NodeListXY *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__nodelist(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__NodeListXY__Sequence * member =
    (v2x_msg__msg__NodeListXY__Sequence *)(untyped_member);
  v2x_msg__msg__NodeListXY__Sequence__fini(member);
  return v2x_msg__msg__NodeListXY__Sequence__init(member, size);
}

size_t v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__connectsto(
  const void * untyped_member)
{
  const v2x_msg__msg__Connection__Sequence * member =
    (const v2x_msg__msg__Connection__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__connectsto(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__Connection__Sequence * member =
    (const v2x_msg__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__connectsto(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__Connection__Sequence * member =
    (v2x_msg__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__connectsto(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__Connection * item =
    ((const v2x_msg__msg__Connection *)
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__connectsto(untyped_member, index));
  v2x_msg__msg__Connection * value =
    (v2x_msg__msg__Connection *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__connectsto(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__Connection * item =
    ((v2x_msg__msg__Connection *)
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__connectsto(untyped_member, index));
  const v2x_msg__msg__Connection * value =
    (const v2x_msg__msg__Connection *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__connectsto(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__Connection__Sequence * member =
    (v2x_msg__msg__Connection__Sequence *)(untyped_member);
  v2x_msg__msg__Connection__Sequence__fini(member);
  return v2x_msg__msg__Connection__Sequence__init(member, size);
}

size_t v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__overlays(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__overlays(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__overlays(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__overlays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__overlays(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__overlays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__overlays(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__overlays(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[9] = {
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__nodelist,  // size() function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__nodelist,  // get_const(index) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__nodelist,  // get(index) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__nodelist,  // fetch(index, &value) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__nodelist,  // assign(index, value) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__nodelist  // resize(index) function pointer
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
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__connectsto,  // size() function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__connectsto,  // get_const(index) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__connectsto,  // get(index) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__connectsto,  // fetch(index, &value) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__connectsto,  // assign(index, value) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__connectsto  // resize(index) function pointer
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
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__overlays,  // size() function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__overlays,  // get_const(index) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__overlays,  // get(index) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__overlays,  // fetch(index, &value) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__overlays,  // assign(index, value) function pointer
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__overlays  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members = {
  "v2x_msg__msg",  // message namespace
  "GenericLane",  // message name
  9,  // number of fields
  sizeof(v2x_msg__msg__GenericLane),
  v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array,  // message members
  v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle = {
  0,
  &v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, GenericLane)() {
  v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, LaneAttributes)();
  v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, NodeListXY)();
  v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Connection)();
  if (!v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
