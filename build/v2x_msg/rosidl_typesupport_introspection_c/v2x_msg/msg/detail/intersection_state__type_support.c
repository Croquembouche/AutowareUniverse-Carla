// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/intersection_state__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/intersection_state__functions.h"
#include "v2x_msg/msg/detail/intersection_state__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "v2x_msg/msg/intersection_reference_id.h"
// Member `id`
#include "v2x_msg/msg/detail/intersection_reference_id__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "v2x_msg/msg/intersection_status_object.h"
// Member `status`
#include "v2x_msg/msg/detail/intersection_status_object__rosidl_typesupport_introspection_c.h"
// Member `enabledlanes`
#include "v2x_msg/msg/lane_id.h"
// Member `enabledlanes`
#include "v2x_msg/msg/detail/lane_id__rosidl_typesupport_introspection_c.h"
// Member `states`
#include "v2x_msg/msg/movement_state.h"
// Member `states`
#include "v2x_msg/msg/detail/movement_state__rosidl_typesupport_introspection_c.h"
// Member `maneuverassistlist`
#include "v2x_msg/msg/connection_maneuver_assist.h"
// Member `maneuverassistlist`
#include "v2x_msg/msg/detail/connection_maneuver_assist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__IntersectionState__init(message_memory);
}

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_fini_function(void * message_memory)
{
  v2x_msg__msg__IntersectionState__fini(message_memory);
}

size_t v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__enabledlanes(
  const void * untyped_member)
{
  const v2x_msg__msg__LaneID__Sequence * member =
    (const v2x_msg__msg__LaneID__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__enabledlanes(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__LaneID__Sequence * member =
    (const v2x_msg__msg__LaneID__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__enabledlanes(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__LaneID__Sequence * member =
    (v2x_msg__msg__LaneID__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__enabledlanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__LaneID * item =
    ((const v2x_msg__msg__LaneID *)
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__enabledlanes(untyped_member, index));
  v2x_msg__msg__LaneID * value =
    (v2x_msg__msg__LaneID *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__enabledlanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__LaneID * item =
    ((v2x_msg__msg__LaneID *)
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__enabledlanes(untyped_member, index));
  const v2x_msg__msg__LaneID * value =
    (const v2x_msg__msg__LaneID *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__enabledlanes(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__LaneID__Sequence * member =
    (v2x_msg__msg__LaneID__Sequence *)(untyped_member);
  v2x_msg__msg__LaneID__Sequence__fini(member);
  return v2x_msg__msg__LaneID__Sequence__init(member, size);
}

size_t v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__states(
  const void * untyped_member)
{
  const v2x_msg__msg__MovementState__Sequence * member =
    (const v2x_msg__msg__MovementState__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__states(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__MovementState__Sequence * member =
    (const v2x_msg__msg__MovementState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__states(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__MovementState__Sequence * member =
    (v2x_msg__msg__MovementState__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__MovementState * item =
    ((const v2x_msg__msg__MovementState *)
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__states(untyped_member, index));
  v2x_msg__msg__MovementState * value =
    (v2x_msg__msg__MovementState *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__MovementState * item =
    ((v2x_msg__msg__MovementState *)
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__states(untyped_member, index));
  const v2x_msg__msg__MovementState * value =
    (const v2x_msg__msg__MovementState *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__states(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__MovementState__Sequence * member =
    (v2x_msg__msg__MovementState__Sequence *)(untyped_member);
  v2x_msg__msg__MovementState__Sequence__fini(member);
  return v2x_msg__msg__MovementState__Sequence__init(member, size);
}

size_t v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__maneuverassistlist(
  const void * untyped_member)
{
  const v2x_msg__msg__ConnectionManeuverAssist__Sequence * member =
    (const v2x_msg__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__maneuverassistlist(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__ConnectionManeuverAssist__Sequence * member =
    (const v2x_msg__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__maneuverassistlist(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__ConnectionManeuverAssist__Sequence * member =
    (v2x_msg__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__maneuverassistlist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__ConnectionManeuverAssist * item =
    ((const v2x_msg__msg__ConnectionManeuverAssist *)
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__maneuverassistlist(untyped_member, index));
  v2x_msg__msg__ConnectionManeuverAssist * value =
    (v2x_msg__msg__ConnectionManeuverAssist *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__maneuverassistlist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__ConnectionManeuverAssist * item =
    ((v2x_msg__msg__ConnectionManeuverAssist *)
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__maneuverassistlist(untyped_member, index));
  const v2x_msg__msg__ConnectionManeuverAssist * value =
    (const v2x_msg__msg__ConnectionManeuverAssist *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__maneuverassistlist(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__ConnectionManeuverAssist__Sequence * member =
    (v2x_msg__msg__ConnectionManeuverAssist__Sequence *)(untyped_member);
  v2x_msg__msg__ConnectionManeuverAssist__Sequence__fini(member);
  return v2x_msg__msg__ConnectionManeuverAssist__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[9] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, moy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabledlanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, enabledlanes),  // bytes offset in struct
    NULL,  // default value
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__enabledlanes,  // size() function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__enabledlanes,  // get_const(index) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__enabledlanes,  // get(index) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__enabledlanes,  // fetch(index, &value) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__enabledlanes,  // assign(index, value) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__enabledlanes  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, states),  // bytes offset in struct
    NULL,  // default value
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__states,  // size() function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__states,  // get_const(index) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__states,  // get(index) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__states,  // fetch(index, &value) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__states,  // assign(index, value) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__states  // resize(index) function pointer
  },
  {
    "maneuverassistlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__IntersectionState, maneuverassistlist),  // bytes offset in struct
    NULL,  // default value
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__maneuverassistlist,  // size() function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__maneuverassistlist,  // get_const(index) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__maneuverassistlist,  // get(index) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__maneuverassistlist,  // fetch(index, &value) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__maneuverassistlist,  // assign(index, value) function pointer
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__maneuverassistlist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_members = {
  "v2x_msg__msg",  // message namespace
  "IntersectionState",  // message name
  9,  // number of fields
  sizeof(v2x_msg__msg__IntersectionState),
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array,  // message members
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle = {
  0,
  &v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, IntersectionState)() {
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, IntersectionReferenceID)();
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, IntersectionStatusObject)();
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, LaneID)();
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, MovementState)();
  v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ConnectionManeuverAssist)();
  if (!v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
