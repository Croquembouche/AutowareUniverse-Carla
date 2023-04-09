// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/j1939data__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/j1939data__functions.h"
#include "v2x_msg/msg/detail/j1939data__struct.h"


// Include directives for member types
// Member `tires`
#include "v2x_msg/msg/tire_data.h"
// Member `tires`
#include "v2x_msg/msg/detail/tire_data__rosidl_typesupport_introspection_c.h"
// Member `axles`
#include "v2x_msg/msg/axle_weight.h"
// Member `axles`
#include "v2x_msg/msg/detail/axle_weight__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__J1939data__init(message_memory);
}

void v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_fini_function(void * message_memory)
{
  v2x_msg__msg__J1939data__fini(message_memory);
}

size_t v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__size_function__J1939data__tires(
  const void * untyped_member)
{
  const v2x_msg__msg__TireData__Sequence * member =
    (const v2x_msg__msg__TireData__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_const_function__J1939data__tires(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__TireData__Sequence * member =
    (const v2x_msg__msg__TireData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_function__J1939data__tires(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__TireData__Sequence * member =
    (v2x_msg__msg__TireData__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__fetch_function__J1939data__tires(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__TireData * item =
    ((const v2x_msg__msg__TireData *)
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_const_function__J1939data__tires(untyped_member, index));
  v2x_msg__msg__TireData * value =
    (v2x_msg__msg__TireData *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__assign_function__J1939data__tires(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__TireData * item =
    ((v2x_msg__msg__TireData *)
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_function__J1939data__tires(untyped_member, index));
  const v2x_msg__msg__TireData * value =
    (const v2x_msg__msg__TireData *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__resize_function__J1939data__tires(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__TireData__Sequence * member =
    (v2x_msg__msg__TireData__Sequence *)(untyped_member);
  v2x_msg__msg__TireData__Sequence__fini(member);
  return v2x_msg__msg__TireData__Sequence__init(member, size);
}

size_t v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__size_function__J1939data__axles(
  const void * untyped_member)
{
  const v2x_msg__msg__AxleWeight__Sequence * member =
    (const v2x_msg__msg__AxleWeight__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_const_function__J1939data__axles(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__AxleWeight__Sequence * member =
    (const v2x_msg__msg__AxleWeight__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_function__J1939data__axles(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__AxleWeight__Sequence * member =
    (v2x_msg__msg__AxleWeight__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__fetch_function__J1939data__axles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__AxleWeight * item =
    ((const v2x_msg__msg__AxleWeight *)
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_const_function__J1939data__axles(untyped_member, index));
  v2x_msg__msg__AxleWeight * value =
    (v2x_msg__msg__AxleWeight *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__assign_function__J1939data__axles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__AxleWeight * item =
    ((v2x_msg__msg__AxleWeight *)
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_function__J1939data__axles(untyped_member, index));
  const v2x_msg__msg__AxleWeight * value =
    (const v2x_msg__msg__AxleWeight *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__resize_function__J1939data__axles(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__AxleWeight__Sequence * member =
    (v2x_msg__msg__AxleWeight__Sequence *)(untyped_member);
  v2x_msg__msg__AxleWeight__Sequence__fini(member);
  return v2x_msg__msg__AxleWeight__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_member_array[10] = {
  {
    "tires",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, tires),  // bytes offset in struct
    NULL,  // default value
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__size_function__J1939data__tires,  // size() function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_const_function__J1939data__tires,  // get_const(index) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_function__J1939data__tires,  // get(index) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__fetch_function__J1939data__tires,  // fetch(index, &value) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__assign_function__J1939data__tires,  // assign(index, value) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__resize_function__J1939data__tires  // resize(index) function pointer
  },
  {
    "axles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, axles),  // bytes offset in struct
    NULL,  // default value
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__size_function__J1939data__axles,  // size() function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_const_function__J1939data__axles,  // get_const(index) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__get_function__J1939data__axles,  // get(index) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__fetch_function__J1939data__axles,  // fetch(index, &value) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__assign_function__J1939data__axles,  // assign(index, value) function pointer
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__resize_function__J1939data__axles  // resize(index) function pointer
  },
  {
    "trailerweight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, trailerweight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cargoweight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, cargoweight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steeringaxletemperture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, steeringaxletemperture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "driveaxlelocation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, driveaxlelocation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "driveaxleliftairpressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, driveaxleliftairpressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "driveaxletemperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, driveaxletemperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "driveaxlelubpressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, driveaxlelubpressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steeringaxlelubepressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__J1939data, steeringaxlelubepressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_members = {
  "v2x_msg__msg",  // message namespace
  "J1939data",  // message name
  10,  // number of fields
  sizeof(v2x_msg__msg__J1939data),
  v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_member_array,  // message members
  v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_type_support_handle = {
  0,
  &v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, J1939data)() {
  v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, TireData)();
  v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, AxleWeight)();
  if (!v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__J1939data__rosidl_typesupport_introspection_c__J1939data_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
