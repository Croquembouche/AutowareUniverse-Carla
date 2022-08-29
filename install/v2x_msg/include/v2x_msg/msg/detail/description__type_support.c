// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/Description.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/description__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/description__functions.h"
#include "v2x_msg/msg/detail/description__struct.h"


// Include directives for member types
// Member `path`
#include "v2x_msg/msg/offset_system.h"
// Member `path`
#include "v2x_msg/msg/detail/offset_system__rosidl_typesupport_introspection_c.h"
// Member `geometry`
#include "v2x_msg/msg/geometric_projection.h"
// Member `geometry`
#include "v2x_msg/msg/detail/geometric_projection__rosidl_typesupport_introspection_c.h"
// Member `oldregion`
#include "v2x_msg/msg/valid_region.h"
// Member `oldregion`
#include "v2x_msg/msg/detail/valid_region__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Description__rosidl_typesupport_introspection_c__Description_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__Description__init(message_memory);
}

void Description__rosidl_typesupport_introspection_c__Description_fini_function(void * message_memory)
{
  v2x_msg__msg__Description__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Description__rosidl_typesupport_introspection_c__Description_message_member_array[3] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Description, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geometry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Description, geometry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "oldregion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Description, oldregion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Description__rosidl_typesupport_introspection_c__Description_message_members = {
  "v2x_msg__msg",  // message namespace
  "Description",  // message name
  3,  // number of fields
  sizeof(v2x_msg__msg__Description),
  Description__rosidl_typesupport_introspection_c__Description_message_member_array,  // message members
  Description__rosidl_typesupport_introspection_c__Description_init_function,  // function to initialize message memory (memory has to be allocated)
  Description__rosidl_typesupport_introspection_c__Description_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Description__rosidl_typesupport_introspection_c__Description_message_type_support_handle = {
  0,
  &Description__rosidl_typesupport_introspection_c__Description_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Description)() {
  Description__rosidl_typesupport_introspection_c__Description_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, OffsetSystem)();
  Description__rosidl_typesupport_introspection_c__Description_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, GeometricProjection)();
  Description__rosidl_typesupport_introspection_c__Description_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ValidRegion)();
  if (!Description__rosidl_typesupport_introspection_c__Description_message_type_support_handle.typesupport_identifier) {
    Description__rosidl_typesupport_introspection_c__Description_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Description__rosidl_typesupport_introspection_c__Description_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
