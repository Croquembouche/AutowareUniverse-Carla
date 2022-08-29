// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/PVD.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/pvd__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/pvd__functions.h"
#include "v2x_msg/msg/detail/pvd__struct.h"


// Include directives for member types
// Member `probeid`
#include "v2x_msg/msg/vehicle_ident.h"
// Member `probeid`
#include "v2x_msg/msg/detail/vehicle_ident__rosidl_typesupport_introspection_c.h"
// Member `startvector`
#include "v2x_msg/msg/full_position_vector.h"
// Member `startvector`
#include "v2x_msg/msg/detail/full_position_vector__rosidl_typesupport_introspection_c.h"
// Member `vehicletype`
#include "v2x_msg/msg/vehicle_classification.h"
// Member `vehicletype`
#include "v2x_msg/msg/detail/vehicle_classification__rosidl_typesupport_introspection_c.h"
// Member `snapshots`
#include "v2x_msg/msg/snapshot.h"
// Member `snapshots`
#include "v2x_msg/msg/detail/snapshot__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PVD__rosidl_typesupport_introspection_c__PVD_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__PVD__init(message_memory);
}

void PVD__rosidl_typesupport_introspection_c__PVD_fini_function(void * message_memory)
{
  v2x_msg__msg__PVD__fini(message_memory);
}

size_t PVD__rosidl_typesupport_introspection_c__size_function__Snapshot__snapshots(
  const void * untyped_member)
{
  const v2x_msg__msg__Snapshot__Sequence * member =
    (const v2x_msg__msg__Snapshot__Sequence *)(untyped_member);
  return member->size;
}

const void * PVD__rosidl_typesupport_introspection_c__get_const_function__Snapshot__snapshots(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__Snapshot__Sequence * member =
    (const v2x_msg__msg__Snapshot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PVD__rosidl_typesupport_introspection_c__get_function__Snapshot__snapshots(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__Snapshot__Sequence * member =
    (v2x_msg__msg__Snapshot__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PVD__rosidl_typesupport_introspection_c__resize_function__Snapshot__snapshots(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__Snapshot__Sequence * member =
    (v2x_msg__msg__Snapshot__Sequence *)(untyped_member);
  v2x_msg__msg__Snapshot__Sequence__fini(member);
  return v2x_msg__msg__Snapshot__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PVD__rosidl_typesupport_introspection_c__PVD_message_member_array[6] = {
  {
    "timstamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PVD, timstamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segnum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PVD, segnum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "probeid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PVD, probeid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "startvector",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PVD, startvector),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicletype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PVD, vehicletype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "snapshots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PVD, snapshots),  // bytes offset in struct
    NULL,  // default value
    PVD__rosidl_typesupport_introspection_c__size_function__Snapshot__snapshots,  // size() function pointer
    PVD__rosidl_typesupport_introspection_c__get_const_function__Snapshot__snapshots,  // get_const(index) function pointer
    PVD__rosidl_typesupport_introspection_c__get_function__Snapshot__snapshots,  // get(index) function pointer
    PVD__rosidl_typesupport_introspection_c__resize_function__Snapshot__snapshots  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PVD__rosidl_typesupport_introspection_c__PVD_message_members = {
  "v2x_msg__msg",  // message namespace
  "PVD",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__PVD),
  PVD__rosidl_typesupport_introspection_c__PVD_message_member_array,  // message members
  PVD__rosidl_typesupport_introspection_c__PVD_init_function,  // function to initialize message memory (memory has to be allocated)
  PVD__rosidl_typesupport_introspection_c__PVD_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PVD__rosidl_typesupport_introspection_c__PVD_message_type_support_handle = {
  0,
  &PVD__rosidl_typesupport_introspection_c__PVD_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PVD)() {
  PVD__rosidl_typesupport_introspection_c__PVD_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleIdent)();
  PVD__rosidl_typesupport_introspection_c__PVD_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, FullPositionVector)();
  PVD__rosidl_typesupport_introspection_c__PVD_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleClassification)();
  PVD__rosidl_typesupport_introspection_c__PVD_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Snapshot)();
  if (!PVD__rosidl_typesupport_introspection_c__PVD_message_type_support_handle.typesupport_identifier) {
    PVD__rosidl_typesupport_introspection_c__PVD_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PVD__rosidl_typesupport_introspection_c__PVD_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
