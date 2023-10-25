// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/tim__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/tim__functions.h"
#include "v2x_msg/msg/detail/tim__struct.h"


// Include directives for member types
// Member `urlb`
#include "rosidl_runtime_c/string_functions.h"
// Member `dataframes`
#include "v2x_msg/msg/traveler_data_frame.h"
// Member `dataframes`
#include "v2x_msg/msg/detail/traveler_data_frame__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__TIM__init(message_memory);
}

void v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_fini_function(void * message_memory)
{
  v2x_msg__msg__TIM__fini(message_memory);
}

size_t v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__size_function__TIM__dataframes(
  const void * untyped_member)
{
  const v2x_msg__msg__TravelerDataFrame__Sequence * member =
    (const v2x_msg__msg__TravelerDataFrame__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__get_const_function__TIM__dataframes(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__TravelerDataFrame__Sequence * member =
    (const v2x_msg__msg__TravelerDataFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__get_function__TIM__dataframes(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__TravelerDataFrame__Sequence * member =
    (v2x_msg__msg__TravelerDataFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__fetch_function__TIM__dataframes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msg__msg__TravelerDataFrame * item =
    ((const v2x_msg__msg__TravelerDataFrame *)
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__get_const_function__TIM__dataframes(untyped_member, index));
  v2x_msg__msg__TravelerDataFrame * value =
    (v2x_msg__msg__TravelerDataFrame *)(untyped_value);
  *value = *item;
}

void v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__assign_function__TIM__dataframes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msg__msg__TravelerDataFrame * item =
    ((v2x_msg__msg__TravelerDataFrame *)
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__get_function__TIM__dataframes(untyped_member, index));
  const v2x_msg__msg__TravelerDataFrame * value =
    (const v2x_msg__msg__TravelerDataFrame *)(untyped_value);
  *item = *value;
}

bool v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__resize_function__TIM__dataframes(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__TravelerDataFrame__Sequence * member =
    (v2x_msg__msg__TravelerDataFrame__Sequence *)(untyped_member);
  v2x_msg__msg__TravelerDataFrame__Sequence__fini(member);
  return v2x_msg__msg__TravelerDataFrame__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_member_array[5] = {
  {
    "msgcnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TIM, msgcnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TIM, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "packetid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TIM, packetid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "urlb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TIM, urlb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dataframes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TIM, dataframes),  // bytes offset in struct
    NULL,  // default value
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__size_function__TIM__dataframes,  // size() function pointer
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__get_const_function__TIM__dataframes,  // get_const(index) function pointer
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__get_function__TIM__dataframes,  // get(index) function pointer
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__fetch_function__TIM__dataframes,  // fetch(index, &value) function pointer
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__assign_function__TIM__dataframes,  // assign(index, value) function pointer
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__resize_function__TIM__dataframes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_members = {
  "v2x_msg__msg",  // message namespace
  "TIM",  // message name
  5,  // number of fields
  sizeof(v2x_msg__msg__TIM),
  v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_member_array,  // message members
  v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_type_support_handle = {
  0,
  &v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, TIM)() {
  v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, TravelerDataFrame)();
  if (!v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_type_support_handle.typesupport_identifier) {
    v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msg__msg__TIM__rosidl_typesupport_introspection_c__TIM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
