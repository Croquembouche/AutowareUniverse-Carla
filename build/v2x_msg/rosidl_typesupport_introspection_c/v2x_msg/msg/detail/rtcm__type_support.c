// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/rtcm__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/rtcm__functions.h"
#include "v2x_msg/msg/detail/rtcm__struct.h"


// Include directives for member types
// Member `anchorpoint`
#include "v2x_msg/msg/full_position_vector.h"
// Member `anchorpoint`
#include "v2x_msg/msg/detail/full_position_vector__rosidl_typesupport_introspection_c.h"
// Member `rtcmheader`
#include "v2x_msg/msg/rtc_mheader.h"
// Member `rtcmheader`
#include "v2x_msg/msg/detail/rtc_mheader__rosidl_typesupport_introspection_c.h"
// Member `msgs`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RTCM__rosidl_typesupport_introspection_c__RTCM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__RTCM__init(message_memory);
}

void RTCM__rosidl_typesupport_introspection_c__RTCM_fini_function(void * message_memory)
{
  v2x_msg__msg__RTCM__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RTCM__rosidl_typesupport_introspection_c__RTCM_message_member_array[6] = {
  {
    "msgcnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RTCM, msgcnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RTCM, rev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
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
    offsetof(v2x_msg__msg__RTCM, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchorpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RTCM, anchorpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rtcmheader",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RTCM, rtcmheader),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__RTCM, msgs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RTCM__rosidl_typesupport_introspection_c__RTCM_message_members = {
  "v2x_msg__msg",  // message namespace
  "RTCM",  // message name
  6,  // number of fields
  sizeof(v2x_msg__msg__RTCM),
  RTCM__rosidl_typesupport_introspection_c__RTCM_message_member_array,  // message members
  RTCM__rosidl_typesupport_introspection_c__RTCM_init_function,  // function to initialize message memory (memory has to be allocated)
  RTCM__rosidl_typesupport_introspection_c__RTCM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle = {
  0,
  &RTCM__rosidl_typesupport_introspection_c__RTCM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RTCM)() {
  RTCM__rosidl_typesupport_introspection_c__RTCM_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, FullPositionVector)();
  RTCM__rosidl_typesupport_introspection_c__RTCM_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RTCMheader)();
  if (!RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle.typesupport_identifier) {
    RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RTCM__rosidl_typesupport_introspection_c__RTCM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
