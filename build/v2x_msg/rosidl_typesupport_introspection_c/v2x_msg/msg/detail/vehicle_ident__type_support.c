// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/VehicleIdent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/vehicle_ident__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/vehicle_ident__functions.h"
#include "v2x_msg/msg/detail/vehicle_ident__struct.h"


// Include directives for member types
// Member `name`
// Member `vin`
// Member `ownercode`
#include "rosidl_runtime_c/string_functions.h"
// Member `id`
#include "v2x_msg/msg/vehicle_id.h"
// Member `id`
#include "v2x_msg/msg/detail/vehicle_id__rosidl_typesupport_introspection_c.h"
// Member `vehicleclass`
#include "v2x_msg/msg/vehicle_class.h"
// Member `vehicleclass`
#include "v2x_msg/msg/detail/vehicle_class__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__VehicleIdent__init(message_memory);
}

void VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_fini_function(void * message_memory)
{
  v2x_msg__msg__VehicleIdent__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_member_array[6] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleIdent, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleIdent, vin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ownercode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleIdent, ownercode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
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
    offsetof(v2x_msg__msg__VehicleIdent, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicletype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleIdent, vehicletype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicleclass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__VehicleIdent, vehicleclass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_members = {
  "v2x_msg__msg",  // message namespace
  "VehicleIdent",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__VehicleIdent),
  VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_member_array,  // message members
  VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_type_support_handle = {
  0,
  &VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleIdent)() {
  VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleID)();
  VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, VehicleClass)();
  if (!VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_type_support_handle.typesupport_identifier) {
    VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleIdent__rosidl_typesupport_introspection_c__VehicleIdent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
