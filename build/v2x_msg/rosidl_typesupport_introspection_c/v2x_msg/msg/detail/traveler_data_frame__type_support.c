// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/traveler_data_frame__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/traveler_data_frame__functions.h"
#include "v2x_msg/msg/detail/traveler_data_frame__struct.h"


// Include directives for member types
// Member `msgid`
#include "v2x_msg/msg/msg_id.h"
// Member `msgid`
#include "v2x_msg/msg/detail/msg_id__rosidl_typesupport_introspection_c.h"
// Member `regions`
#include "v2x_msg/msg/geographical_path.h"
// Member `regions`
#include "v2x_msg/msg/detail/geographical_path__rosidl_typesupport_introspection_c.h"
// Member `content`
#include "v2x_msg/msg/content.h"
// Member `content`
#include "v2x_msg/msg/detail/content__rosidl_typesupport_introspection_c.h"
// Member `url`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__TravelerDataFrame__init(message_memory);
}

void TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_fini_function(void * message_memory)
{
  v2x_msg__msg__TravelerDataFrame__fini(message_memory);
}

size_t TravelerDataFrame__rosidl_typesupport_introspection_c__size_function__GeographicalPath__regions(
  const void * untyped_member)
{
  const v2x_msg__msg__GeographicalPath__Sequence * member =
    (const v2x_msg__msg__GeographicalPath__Sequence *)(untyped_member);
  return member->size;
}

const void * TravelerDataFrame__rosidl_typesupport_introspection_c__get_const_function__GeographicalPath__regions(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__GeographicalPath__Sequence * member =
    (const v2x_msg__msg__GeographicalPath__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TravelerDataFrame__rosidl_typesupport_introspection_c__get_function__GeographicalPath__regions(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__GeographicalPath__Sequence * member =
    (v2x_msg__msg__GeographicalPath__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TravelerDataFrame__rosidl_typesupport_introspection_c__resize_function__GeographicalPath__regions(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__GeographicalPath__Sequence * member =
    (v2x_msg__msg__GeographicalPath__Sequence *)(untyped_member);
  v2x_msg__msg__GeographicalPath__Sequence__fini(member);
  return v2x_msg__msg__GeographicalPath__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_member_array[13] = {
  {
    "notused",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, notused),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frametype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, frametype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, msgid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "startyear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, startyear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "starttime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, starttime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "durationtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, durationtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "notused1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, notused1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, regions),  // bytes offset in struct
    NULL,  // default value
    TravelerDataFrame__rosidl_typesupport_introspection_c__size_function__GeographicalPath__regions,  // size() function pointer
    TravelerDataFrame__rosidl_typesupport_introspection_c__get_const_function__GeographicalPath__regions,  // get_const(index) function pointer
    TravelerDataFrame__rosidl_typesupport_introspection_c__get_function__GeographicalPath__regions,  // get(index) function pointer
    TravelerDataFrame__rosidl_typesupport_introspection_c__resize_function__GeographicalPath__regions  // resize(index) function pointer
  },
  {
    "notused2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, notused2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "notused3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, notused3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "url",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__TravelerDataFrame, url),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_members = {
  "v2x_msg__msg",  // message namespace
  "TravelerDataFrame",  // message name
  13,  // number of fields
  sizeof(v2x_msg__msg__TravelerDataFrame),
  TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_member_array,  // message members
  TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_type_support_handle = {
  0,
  &TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, TravelerDataFrame)() {
  TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, MsgID)();
  TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, GeographicalPath)();
  TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, Content)();
  if (!TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_type_support_handle.typesupport_identifier) {
    TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TravelerDataFrame__rosidl_typesupport_introspection_c__TravelerDataFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
