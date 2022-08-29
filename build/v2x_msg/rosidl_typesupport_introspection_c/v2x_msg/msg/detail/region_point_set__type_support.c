// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/RegionPointSet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/region_point_set__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/region_point_set__functions.h"
#include "v2x_msg/msg/detail/region_point_set__struct.h"


// Include directives for member types
// Member `anchor`
#include "v2x_msg/msg/position3_d.h"
// Member `anchor`
#include "v2x_msg/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `nodelist`
#include "v2x_msg/msg/region_offsets.h"
// Member `nodelist`
#include "v2x_msg/msg/detail/region_offsets__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__RegionPointSet__init(message_memory);
}

void RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_fini_function(void * message_memory)
{
  v2x_msg__msg__RegionPointSet__fini(message_memory);
}

size_t RegionPointSet__rosidl_typesupport_introspection_c__size_function__RegionOffsets__nodelist(
  const void * untyped_member)
{
  const v2x_msg__msg__RegionOffsets__Sequence * member =
    (const v2x_msg__msg__RegionOffsets__Sequence *)(untyped_member);
  return member->size;
}

const void * RegionPointSet__rosidl_typesupport_introspection_c__get_const_function__RegionOffsets__nodelist(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__RegionOffsets__Sequence * member =
    (const v2x_msg__msg__RegionOffsets__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RegionPointSet__rosidl_typesupport_introspection_c__get_function__RegionOffsets__nodelist(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__RegionOffsets__Sequence * member =
    (v2x_msg__msg__RegionOffsets__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RegionPointSet__rosidl_typesupport_introspection_c__resize_function__RegionOffsets__nodelist(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__RegionOffsets__Sequence * member =
    (v2x_msg__msg__RegionOffsets__Sequence *)(untyped_member);
  v2x_msg__msg__RegionOffsets__Sequence__fini(member);
  return v2x_msg__msg__RegionOffsets__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_member_array[3] = {
  {
    "anchor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RegionPointSet, anchor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RegionPointSet, scale),  // bytes offset in struct
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
    offsetof(v2x_msg__msg__RegionPointSet, nodelist),  // bytes offset in struct
    NULL,  // default value
    RegionPointSet__rosidl_typesupport_introspection_c__size_function__RegionOffsets__nodelist,  // size() function pointer
    RegionPointSet__rosidl_typesupport_introspection_c__get_const_function__RegionOffsets__nodelist,  // get_const(index) function pointer
    RegionPointSet__rosidl_typesupport_introspection_c__get_function__RegionOffsets__nodelist,  // get(index) function pointer
    RegionPointSet__rosidl_typesupport_introspection_c__resize_function__RegionOffsets__nodelist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_members = {
  "v2x_msg__msg",  // message namespace
  "RegionPointSet",  // message name
  3,  // number of fields
  sizeof(v2x_msg__msg__RegionPointSet),
  RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_member_array,  // message members
  RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_init_function,  // function to initialize message memory (memory has to be allocated)
  RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_type_support_handle = {
  0,
  &RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RegionPointSet)() {
  RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Position3D)();
  RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RegionOffsets)();
  if (!RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_type_support_handle.typesupport_identifier) {
    RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RegionPointSet__rosidl_typesupport_introspection_c__RegionPointSet_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
