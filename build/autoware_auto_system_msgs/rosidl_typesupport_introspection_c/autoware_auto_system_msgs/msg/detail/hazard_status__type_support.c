// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "autoware_auto_system_msgs/msg/detail/hazard_status__rosidl_typesupport_introspection_c.h"
#include "autoware_auto_system_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "autoware_auto_system_msgs/msg/detail/hazard_status__functions.h"
#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.h"


// Include directives for member types
// Member `diag_no_fault`
// Member `diag_safe_fault`
// Member `diag_latent_fault`
// Member `diag_single_point_fault`
#include "diagnostic_msgs/msg/diagnostic_status.h"
// Member `diag_no_fault`
// Member `diag_safe_fault`
// Member `diag_latent_fault`
// Member `diag_single_point_fault`
#include "diagnostic_msgs/msg/detail/diagnostic_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  autoware_auto_system_msgs__msg__HazardStatus__init(message_memory);
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_fini_function(void * message_memory)
{
  autoware_auto_system_msgs__msg__HazardStatus__fini(message_memory);
}

size_t autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_no_fault(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_no_fault(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_no_fault(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_no_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_no_fault(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_no_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_no_fault(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_no_fault(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

size_t autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_safe_fault(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_safe_fault(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_safe_fault(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_safe_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_safe_fault(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_safe_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_safe_fault(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_safe_fault(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

size_t autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_latent_fault(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_latent_fault(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_latent_fault(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_latent_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_latent_fault(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_latent_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_latent_fault(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_latent_fault(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

size_t autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_single_point_fault(
  const void * untyped_member)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_single_point_fault(
  const void * untyped_member, size_t index)
{
  const diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (const diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_single_point_fault(
  void * untyped_member, size_t index)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_single_point_fault(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const diagnostic_msgs__msg__DiagnosticStatus * item =
    ((const diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_single_point_fault(untyped_member, index));
  diagnostic_msgs__msg__DiagnosticStatus * value =
    (diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *value = *item;
}

void autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_single_point_fault(
  void * untyped_member, size_t index, const void * untyped_value)
{
  diagnostic_msgs__msg__DiagnosticStatus * item =
    ((diagnostic_msgs__msg__DiagnosticStatus *)
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_single_point_fault(untyped_member, index));
  const diagnostic_msgs__msg__DiagnosticStatus * value =
    (const diagnostic_msgs__msg__DiagnosticStatus *)(untyped_value);
  *item = *value;
}

bool autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_single_point_fault(
  void * untyped_member, size_t size)
{
  diagnostic_msgs__msg__DiagnosticStatus__Sequence * member =
    (diagnostic_msgs__msg__DiagnosticStatus__Sequence *)(untyped_member);
  diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(member);
  return diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[7] = {
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__HazardStatus, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__HazardStatus, emergency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_holding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__HazardStatus, emergency_holding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_no_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__HazardStatus, diag_no_fault),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_no_fault,  // size() function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_no_fault,  // get_const(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_no_fault,  // get(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_no_fault,  // fetch(index, &value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_no_fault,  // assign(index, value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_no_fault  // resize(index) function pointer
  },
  {
    "diag_safe_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__HazardStatus, diag_safe_fault),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_safe_fault,  // size() function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_safe_fault,  // get_const(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_safe_fault,  // get(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_safe_fault,  // fetch(index, &value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_safe_fault,  // assign(index, value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_safe_fault  // resize(index) function pointer
  },
  {
    "diag_latent_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__HazardStatus, diag_latent_fault),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_latent_fault,  // size() function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_latent_fault,  // get_const(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_latent_fault,  // get(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_latent_fault,  // fetch(index, &value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_latent_fault,  // assign(index, value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_latent_fault  // resize(index) function pointer
  },
  {
    "diag_single_point_fault",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(autoware_auto_system_msgs__msg__HazardStatus, diag_single_point_fault),  // bytes offset in struct
    NULL,  // default value
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__size_function__HazardStatus__diag_single_point_fault,  // size() function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_const_function__HazardStatus__diag_single_point_fault,  // get_const(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__get_function__HazardStatus__diag_single_point_fault,  // get(index) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__fetch_function__HazardStatus__diag_single_point_fault,  // fetch(index, &value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__assign_function__HazardStatus__diag_single_point_fault,  // assign(index, value) function pointer
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__resize_function__HazardStatus__diag_single_point_fault  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_members = {
  "autoware_auto_system_msgs__msg",  // message namespace
  "HazardStatus",  // message name
  7,  // number of fields
  sizeof(autoware_auto_system_msgs__msg__HazardStatus),
  autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array,  // message members
  autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle = {
  0,
  &autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_autoware_auto_system_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, autoware_auto_system_msgs, msg, HazardStatus)() {
  autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, diagnostic_msgs, msg, DiagnosticStatus)();
  if (!autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle.typesupport_identifier) {
    autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &autoware_auto_system_msgs__msg__HazardStatus__rosidl_typesupport_introspection_c__HazardStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
