// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/PDM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/pdm__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/pdm__functions.h"
#include "v2x_msg/msg/detail/pdm__struct.h"


// Include directives for member types
// Member `sample`
#include "v2x_msg/msg/sample.h"
// Member `sample`
#include "v2x_msg/msg/detail/sample__rosidl_typesupport_introspection_c.h"
// Member `directions`
#include "rosidl_runtime_c/string_functions.h"
// Member `snapshottime`
#include "v2x_msg/msg/snapshot_time.h"
// Member `snapshottime`
#include "v2x_msg/msg/detail/snapshot_time__rosidl_typesupport_introspection_c.h"
// Member `snapshotdistance`
#include "v2x_msg/msg/snapshot_distance.h"
// Member `snapshotdistance`
#include "v2x_msg/msg/detail/snapshot_distance__rosidl_typesupport_introspection_c.h"
// Member `dataelements`
#include "v2x_msg/msg/vehicle_status_request.h"
// Member `dataelements`
#include "v2x_msg/msg/detail/vehicle_status_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PDM__rosidl_typesupport_introspection_c__PDM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__PDM__init(message_memory);
}

void PDM__rosidl_typesupport_introspection_c__PDM_fini_function(void * message_memory)
{
  v2x_msg__msg__PDM__fini(message_memory);
}

size_t PDM__rosidl_typesupport_introspection_c__size_function__VehicleStatusRequest__dataelements(
  const void * untyped_member)
{
  const v2x_msg__msg__VehicleStatusRequest__Sequence * member =
    (const v2x_msg__msg__VehicleStatusRequest__Sequence *)(untyped_member);
  return member->size;
}

const void * PDM__rosidl_typesupport_introspection_c__get_const_function__VehicleStatusRequest__dataelements(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__VehicleStatusRequest__Sequence * member =
    (const v2x_msg__msg__VehicleStatusRequest__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PDM__rosidl_typesupport_introspection_c__get_function__VehicleStatusRequest__dataelements(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__VehicleStatusRequest__Sequence * member =
    (v2x_msg__msg__VehicleStatusRequest__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PDM__rosidl_typesupport_introspection_c__resize_function__VehicleStatusRequest__dataelements(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__VehicleStatusRequest__Sequence * member =
    (v2x_msg__msg__VehicleStatusRequest__Sequence *)(untyped_member);
  v2x_msg__msg__VehicleStatusRequest__Sequence__fini(member);
  return v2x_msg__msg__VehicleStatusRequest__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PDM__rosidl_typesupport_introspection_c__PDM_message_member_array[9] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "directions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, directions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "termtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, termtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "termdistance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, termdistance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "snapshottime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, snapshottime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "snapshotdistance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, snapshotdistance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "txinterval",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, txinterval),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dataelements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__PDM, dataelements),  // bytes offset in struct
    NULL,  // default value
    PDM__rosidl_typesupport_introspection_c__size_function__VehicleStatusRequest__dataelements,  // size() function pointer
    PDM__rosidl_typesupport_introspection_c__get_const_function__VehicleStatusRequest__dataelements,  // get_const(index) function pointer
    PDM__rosidl_typesupport_introspection_c__get_function__VehicleStatusRequest__dataelements,  // get(index) function pointer
    PDM__rosidl_typesupport_introspection_c__resize_function__VehicleStatusRequest__dataelements  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PDM__rosidl_typesupport_introspection_c__PDM_message_members = {
  "v2x_msg__msg",  // message namespace
  "PDM",  // message name
  9,  // number of fields
  sizeof(v2x_msg__msg__PDM),
  PDM__rosidl_typesupport_introspection_c__PDM_message_member_array,  // message members
  PDM__rosidl_typesupport_introspection_c__PDM_init_function,  // function to initialize message memory (memory has to be allocated)
  PDM__rosidl_typesupport_introspection_c__PDM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PDM__rosidl_typesupport_introspection_c__PDM_message_type_support_handle = {
  0,
  &PDM__rosidl_typesupport_introspection_c__PDM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, PDM)() {
  PDM__rosidl_typesupport_introspection_c__PDM_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Sample)();
  PDM__rosidl_typesupport_introspection_c__PDM_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SnapshotTime)();
  PDM__rosidl_typesupport_introspection_c__PDM_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SnapshotDistance)();
  PDM__rosidl_typesupport_introspection_c__PDM_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleStatusRequest)();
  if (!PDM__rosidl_typesupport_introspection_c__PDM_message_type_support_handle.typesupport_identifier) {
    PDM__rosidl_typesupport_introspection_c__PDM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PDM__rosidl_typesupport_introspection_c__PDM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
