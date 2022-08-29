// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/content__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/content__functions.h"
#include "v2x_msg/msg/detail/content__struct.h"


// Include directives for member types
// Member `advisory`
#include "v2x_msg/msg/iti_scodesandtext.h"
// Member `advisory`
#include "v2x_msg/msg/detail/iti_scodesandtext__rosidl_typesupport_introspection_c.h"
// Member `workzone`
#include "v2x_msg/msg/work_zone.h"
// Member `workzone`
#include "v2x_msg/msg/detail/work_zone__rosidl_typesupport_introspection_c.h"
// Member `genericsign`
#include "v2x_msg/msg/generic_signage.h"
// Member `genericsign`
#include "v2x_msg/msg/detail/generic_signage__rosidl_typesupport_introspection_c.h"
// Member `speedlimit`
#include "v2x_msg/msg/itis_speed_limit.h"
// Member `speedlimit`
#include "v2x_msg/msg/detail/itis_speed_limit__rosidl_typesupport_introspection_c.h"
// Member `exitservice`
#include "v2x_msg/msg/exit_service.h"
// Member `exitservice`
#include "v2x_msg/msg/detail/exit_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Content__rosidl_typesupport_introspection_c__Content_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__Content__init(message_memory);
}

void Content__rosidl_typesupport_introspection_c__Content_fini_function(void * message_memory)
{
  v2x_msg__msg__Content__fini(message_memory);
}

size_t Content__rosidl_typesupport_introspection_c__size_function__ITIScodesandtext__advisory(
  const void * untyped_member)
{
  const v2x_msg__msg__ITIScodesandtext__Sequence * member =
    (const v2x_msg__msg__ITIScodesandtext__Sequence *)(untyped_member);
  return member->size;
}

const void * Content__rosidl_typesupport_introspection_c__get_const_function__ITIScodesandtext__advisory(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__ITIScodesandtext__Sequence * member =
    (const v2x_msg__msg__ITIScodesandtext__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Content__rosidl_typesupport_introspection_c__get_function__ITIScodesandtext__advisory(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__ITIScodesandtext__Sequence * member =
    (v2x_msg__msg__ITIScodesandtext__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Content__rosidl_typesupport_introspection_c__resize_function__ITIScodesandtext__advisory(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__ITIScodesandtext__Sequence * member =
    (v2x_msg__msg__ITIScodesandtext__Sequence *)(untyped_member);
  v2x_msg__msg__ITIScodesandtext__Sequence__fini(member);
  return v2x_msg__msg__ITIScodesandtext__Sequence__init(member, size);
}

size_t Content__rosidl_typesupport_introspection_c__size_function__WorkZone__workzone(
  const void * untyped_member)
{
  const v2x_msg__msg__WorkZone__Sequence * member =
    (const v2x_msg__msg__WorkZone__Sequence *)(untyped_member);
  return member->size;
}

const void * Content__rosidl_typesupport_introspection_c__get_const_function__WorkZone__workzone(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__WorkZone__Sequence * member =
    (const v2x_msg__msg__WorkZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Content__rosidl_typesupport_introspection_c__get_function__WorkZone__workzone(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__WorkZone__Sequence * member =
    (v2x_msg__msg__WorkZone__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Content__rosidl_typesupport_introspection_c__resize_function__WorkZone__workzone(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__WorkZone__Sequence * member =
    (v2x_msg__msg__WorkZone__Sequence *)(untyped_member);
  v2x_msg__msg__WorkZone__Sequence__fini(member);
  return v2x_msg__msg__WorkZone__Sequence__init(member, size);
}

size_t Content__rosidl_typesupport_introspection_c__size_function__GenericSignage__genericsign(
  const void * untyped_member)
{
  const v2x_msg__msg__GenericSignage__Sequence * member =
    (const v2x_msg__msg__GenericSignage__Sequence *)(untyped_member);
  return member->size;
}

const void * Content__rosidl_typesupport_introspection_c__get_const_function__GenericSignage__genericsign(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__GenericSignage__Sequence * member =
    (const v2x_msg__msg__GenericSignage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Content__rosidl_typesupport_introspection_c__get_function__GenericSignage__genericsign(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__GenericSignage__Sequence * member =
    (v2x_msg__msg__GenericSignage__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Content__rosidl_typesupport_introspection_c__resize_function__GenericSignage__genericsign(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__GenericSignage__Sequence * member =
    (v2x_msg__msg__GenericSignage__Sequence *)(untyped_member);
  v2x_msg__msg__GenericSignage__Sequence__fini(member);
  return v2x_msg__msg__GenericSignage__Sequence__init(member, size);
}

size_t Content__rosidl_typesupport_introspection_c__size_function__ITISSpeedLimit__speedlimit(
  const void * untyped_member)
{
  const v2x_msg__msg__ITISSpeedLimit__Sequence * member =
    (const v2x_msg__msg__ITISSpeedLimit__Sequence *)(untyped_member);
  return member->size;
}

const void * Content__rosidl_typesupport_introspection_c__get_const_function__ITISSpeedLimit__speedlimit(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__ITISSpeedLimit__Sequence * member =
    (const v2x_msg__msg__ITISSpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Content__rosidl_typesupport_introspection_c__get_function__ITISSpeedLimit__speedlimit(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__ITISSpeedLimit__Sequence * member =
    (v2x_msg__msg__ITISSpeedLimit__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Content__rosidl_typesupport_introspection_c__resize_function__ITISSpeedLimit__speedlimit(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__ITISSpeedLimit__Sequence * member =
    (v2x_msg__msg__ITISSpeedLimit__Sequence *)(untyped_member);
  v2x_msg__msg__ITISSpeedLimit__Sequence__fini(member);
  return v2x_msg__msg__ITISSpeedLimit__Sequence__init(member, size);
}

size_t Content__rosidl_typesupport_introspection_c__size_function__ExitService__exitservice(
  const void * untyped_member)
{
  const v2x_msg__msg__ExitService__Sequence * member =
    (const v2x_msg__msg__ExitService__Sequence *)(untyped_member);
  return member->size;
}

const void * Content__rosidl_typesupport_introspection_c__get_const_function__ExitService__exitservice(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__ExitService__Sequence * member =
    (const v2x_msg__msg__ExitService__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Content__rosidl_typesupport_introspection_c__get_function__ExitService__exitservice(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__ExitService__Sequence * member =
    (v2x_msg__msg__ExitService__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Content__rosidl_typesupport_introspection_c__resize_function__ExitService__exitservice(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__ExitService__Sequence * member =
    (v2x_msg__msg__ExitService__Sequence *)(untyped_member);
  v2x_msg__msg__ExitService__Sequence__fini(member);
  return v2x_msg__msg__ExitService__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Content__rosidl_typesupport_introspection_c__Content_message_member_array[5] = {
  {
    "advisory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Content, advisory),  // bytes offset in struct
    NULL,  // default value
    Content__rosidl_typesupport_introspection_c__size_function__ITIScodesandtext__advisory,  // size() function pointer
    Content__rosidl_typesupport_introspection_c__get_const_function__ITIScodesandtext__advisory,  // get_const(index) function pointer
    Content__rosidl_typesupport_introspection_c__get_function__ITIScodesandtext__advisory,  // get(index) function pointer
    Content__rosidl_typesupport_introspection_c__resize_function__ITIScodesandtext__advisory  // resize(index) function pointer
  },
  {
    "workzone",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Content, workzone),  // bytes offset in struct
    NULL,  // default value
    Content__rosidl_typesupport_introspection_c__size_function__WorkZone__workzone,  // size() function pointer
    Content__rosidl_typesupport_introspection_c__get_const_function__WorkZone__workzone,  // get_const(index) function pointer
    Content__rosidl_typesupport_introspection_c__get_function__WorkZone__workzone,  // get(index) function pointer
    Content__rosidl_typesupport_introspection_c__resize_function__WorkZone__workzone  // resize(index) function pointer
  },
  {
    "genericsign",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Content, genericsign),  // bytes offset in struct
    NULL,  // default value
    Content__rosidl_typesupport_introspection_c__size_function__GenericSignage__genericsign,  // size() function pointer
    Content__rosidl_typesupport_introspection_c__get_const_function__GenericSignage__genericsign,  // get_const(index) function pointer
    Content__rosidl_typesupport_introspection_c__get_function__GenericSignage__genericsign,  // get(index) function pointer
    Content__rosidl_typesupport_introspection_c__resize_function__GenericSignage__genericsign  // resize(index) function pointer
  },
  {
    "speedlimit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Content, speedlimit),  // bytes offset in struct
    NULL,  // default value
    Content__rosidl_typesupport_introspection_c__size_function__ITISSpeedLimit__speedlimit,  // size() function pointer
    Content__rosidl_typesupport_introspection_c__get_const_function__ITISSpeedLimit__speedlimit,  // get_const(index) function pointer
    Content__rosidl_typesupport_introspection_c__get_function__ITISSpeedLimit__speedlimit,  // get(index) function pointer
    Content__rosidl_typesupport_introspection_c__resize_function__ITISSpeedLimit__speedlimit  // resize(index) function pointer
  },
  {
    "exitservice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__Content, exitservice),  // bytes offset in struct
    NULL,  // default value
    Content__rosidl_typesupport_introspection_c__size_function__ExitService__exitservice,  // size() function pointer
    Content__rosidl_typesupport_introspection_c__get_const_function__ExitService__exitservice,  // get_const(index) function pointer
    Content__rosidl_typesupport_introspection_c__get_function__ExitService__exitservice,  // get(index) function pointer
    Content__rosidl_typesupport_introspection_c__resize_function__ExitService__exitservice  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Content__rosidl_typesupport_introspection_c__Content_message_members = {
  "v2x_msg__msg",  // message namespace
  "Content",  // message name
  5,  // number of fields
  sizeof(v2x_msg__msg__Content),
  Content__rosidl_typesupport_introspection_c__Content_message_member_array,  // message members
  Content__rosidl_typesupport_introspection_c__Content_init_function,  // function to initialize message memory (memory has to be allocated)
  Content__rosidl_typesupport_introspection_c__Content_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Content__rosidl_typesupport_introspection_c__Content_message_type_support_handle = {
  0,
  &Content__rosidl_typesupport_introspection_c__Content_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Content)() {
  Content__rosidl_typesupport_introspection_c__Content_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ITIScodesandtext)();
  Content__rosidl_typesupport_introspection_c__Content_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, WorkZone)();
  Content__rosidl_typesupport_introspection_c__Content_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, GenericSignage)();
  Content__rosidl_typesupport_introspection_c__Content_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ITISSpeedLimit)();
  Content__rosidl_typesupport_introspection_c__Content_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, ExitService)();
  if (!Content__rosidl_typesupport_introspection_c__Content_message_type_support_handle.typesupport_identifier) {
    Content__rosidl_typesupport_introspection_c__Content_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Content__rosidl_typesupport_introspection_c__Content_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
