// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/SPAT.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/spat__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/spat__functions.h"
#include "v2x_msg/msg/detail/spat__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `intersections`
#include "v2x_msg/msg/intersection_state.h"
// Member `intersections`
#include "v2x_msg/msg/detail/intersection_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SPAT__rosidl_typesupport_introspection_c__SPAT_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__SPAT__init(message_memory);
}

void SPAT__rosidl_typesupport_introspection_c__SPAT_fini_function(void * message_memory)
{
  v2x_msg__msg__SPAT__fini(message_memory);
}

size_t SPAT__rosidl_typesupport_introspection_c__size_function__IntersectionState__intersections(
  const void * untyped_member)
{
  const v2x_msg__msg__IntersectionState__Sequence * member =
    (const v2x_msg__msg__IntersectionState__Sequence *)(untyped_member);
  return member->size;
}

const void * SPAT__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__intersections(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__IntersectionState__Sequence * member =
    (const v2x_msg__msg__IntersectionState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SPAT__rosidl_typesupport_introspection_c__get_function__IntersectionState__intersections(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__IntersectionState__Sequence * member =
    (v2x_msg__msg__IntersectionState__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SPAT__rosidl_typesupport_introspection_c__resize_function__IntersectionState__intersections(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__IntersectionState__Sequence * member =
    (v2x_msg__msg__IntersectionState__Sequence *)(untyped_member);
  v2x_msg__msg__IntersectionState__Sequence__fini(member);
  return v2x_msg__msg__IntersectionState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SPAT__rosidl_typesupport_introspection_c__SPAT_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SPAT, timestamp),  // bytes offset in struct
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
    offsetof(v2x_msg__msg__SPAT, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SPAT, intersections),  // bytes offset in struct
    NULL,  // default value
    SPAT__rosidl_typesupport_introspection_c__size_function__IntersectionState__intersections,  // size() function pointer
    SPAT__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__intersections,  // get_const(index) function pointer
    SPAT__rosidl_typesupport_introspection_c__get_function__IntersectionState__intersections,  // get(index) function pointer
    SPAT__rosidl_typesupport_introspection_c__resize_function__IntersectionState__intersections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SPAT__rosidl_typesupport_introspection_c__SPAT_message_members = {
  "v2x_msg__msg",  // message namespace
  "SPAT",  // message name
  3,  // number of fields
  sizeof(v2x_msg__msg__SPAT),
  SPAT__rosidl_typesupport_introspection_c__SPAT_message_member_array,  // message members
  SPAT__rosidl_typesupport_introspection_c__SPAT_init_function,  // function to initialize message memory (memory has to be allocated)
  SPAT__rosidl_typesupport_introspection_c__SPAT_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SPAT__rosidl_typesupport_introspection_c__SPAT_message_type_support_handle = {
  0,
  &SPAT__rosidl_typesupport_introspection_c__SPAT_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SPAT)() {
  SPAT__rosidl_typesupport_introspection_c__SPAT_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, IntersectionState)();
  if (!SPAT__rosidl_typesupport_introspection_c__SPAT_message_type_support_handle.typesupport_identifier) {
    SPAT__rosidl_typesupport_introspection_c__SPAT_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SPAT__rosidl_typesupport_introspection_c__SPAT_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
