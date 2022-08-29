// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/Snapshot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/snapshot__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/snapshot__functions.h"
#include "v2x_msg/msg/detail/snapshot__struct.h"


// Include directives for member types
// Member `theposition`
#include "v2x_msg/msg/full_position_vector.h"
// Member `theposition`
#include "v2x_msg/msg/detail/full_position_vector__rosidl_typesupport_introspection_c.h"
// Member `safetyext`
#include "v2x_msg/msg/vehicle_safety_extensions.h"
// Member `safetyext`
#include "v2x_msg/msg/detail/vehicle_safety_extensions__rosidl_typesupport_introspection_c.h"
// Member `dataset`
#include "v2x_msg/msg/vehicle_status.h"
// Member `dataset`
#include "v2x_msg/msg/detail/vehicle_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Snapshot__rosidl_typesupport_introspection_c__Snapshot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__Snapshot__init(message_memory);
}

void Snapshot__rosidl_typesupport_introspection_c__Snapshot_fini_function(void * message_memory)
{
  v2x_msg__msg__Snapshot__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_member_array[3] = {
  {
    "theposition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Snapshot, theposition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "safetyext",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Snapshot, safetyext),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dataset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Snapshot, dataset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_members = {
  "v2x_msg__msg",  // message namespace
  "Snapshot",  // message name
  3,  // number of fields
  sizeof(v2x_msg__msg__Snapshot),
  Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_member_array,  // message members
  Snapshot__rosidl_typesupport_introspection_c__Snapshot_init_function,  // function to initialize message memory (memory has to be allocated)
  Snapshot__rosidl_typesupport_introspection_c__Snapshot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_type_support_handle = {
  0,
  &Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Snapshot)() {
  Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, FullPositionVector)();
  Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleSafetyExtensions)();
  Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleStatus)();
  if (!Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_type_support_handle.typesupport_identifier) {
    Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Snapshot__rosidl_typesupport_introspection_c__Snapshot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
