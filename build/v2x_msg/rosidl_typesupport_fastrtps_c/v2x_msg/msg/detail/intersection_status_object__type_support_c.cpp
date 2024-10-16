// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/intersection_status_object__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/intersection_status_object__struct.h"
#include "v2x_msg/msg/detail/intersection_status_object__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IntersectionStatusObject__ros_msg_type = v2x_msg__msg__IntersectionStatusObject;

static bool _IntersectionStatusObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IntersectionStatusObject__ros_msg_type * ros_message = static_cast<const _IntersectionStatusObject__ros_msg_type *>(untyped_ros_message);
  // Field name: manualcontrolisenabled
  {
    cdr << ros_message->manualcontrolisenabled;
  }

  // Field name: stoptimeisactivated
  {
    cdr << ros_message->stoptimeisactivated;
  }

  // Field name: failureflash
  {
    cdr << ros_message->failureflash;
  }

  // Field name: preemptisactive
  {
    cdr << ros_message->preemptisactive;
  }

  // Field name: signalpriorityisactive
  {
    cdr << ros_message->signalpriorityisactive;
  }

  // Field name: fixedtimeoperation
  {
    cdr << ros_message->fixedtimeoperation;
  }

  // Field name: trafficdependentoperation
  {
    cdr << ros_message->trafficdependentoperation;
  }

  // Field name: standbyoperation
  {
    cdr << ros_message->standbyoperation;
  }

  // Field name: failuremode
  {
    cdr << ros_message->failuremode;
  }

  // Field name: off
  {
    cdr << ros_message->off;
  }

  // Field name: recentmapmessageupdate
  {
    cdr << ros_message->recentmapmessageupdate;
  }

  // Field name: recentchangeinmapassignedlanesidsused
  {
    cdr << ros_message->recentchangeinmapassignedlanesidsused;
  }

  // Field name: novalidmapisabilableatthistime
  {
    cdr << ros_message->novalidmapisabilableatthistime;
  }

  // Field name: nobalidspatisabilableatthistime
  {
    cdr << ros_message->nobalidspatisabilableatthistime;
  }

  // Field name: reserve14
  {
    cdr << ros_message->reserve14;
  }

  // Field name: reserve15
  {
    cdr << ros_message->reserve15;
  }

  return true;
}

static bool _IntersectionStatusObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IntersectionStatusObject__ros_msg_type * ros_message = static_cast<_IntersectionStatusObject__ros_msg_type *>(untyped_ros_message);
  // Field name: manualcontrolisenabled
  {
    cdr >> ros_message->manualcontrolisenabled;
  }

  // Field name: stoptimeisactivated
  {
    cdr >> ros_message->stoptimeisactivated;
  }

  // Field name: failureflash
  {
    cdr >> ros_message->failureflash;
  }

  // Field name: preemptisactive
  {
    cdr >> ros_message->preemptisactive;
  }

  // Field name: signalpriorityisactive
  {
    cdr >> ros_message->signalpriorityisactive;
  }

  // Field name: fixedtimeoperation
  {
    cdr >> ros_message->fixedtimeoperation;
  }

  // Field name: trafficdependentoperation
  {
    cdr >> ros_message->trafficdependentoperation;
  }

  // Field name: standbyoperation
  {
    cdr >> ros_message->standbyoperation;
  }

  // Field name: failuremode
  {
    cdr >> ros_message->failuremode;
  }

  // Field name: off
  {
    cdr >> ros_message->off;
  }

  // Field name: recentmapmessageupdate
  {
    cdr >> ros_message->recentmapmessageupdate;
  }

  // Field name: recentchangeinmapassignedlanesidsused
  {
    cdr >> ros_message->recentchangeinmapassignedlanesidsused;
  }

  // Field name: novalidmapisabilableatthistime
  {
    cdr >> ros_message->novalidmapisabilableatthistime;
  }

  // Field name: nobalidspatisabilableatthistime
  {
    cdr >> ros_message->nobalidspatisabilableatthistime;
  }

  // Field name: reserve14
  {
    cdr >> ros_message->reserve14;
  }

  // Field name: reserve15
  {
    cdr >> ros_message->reserve15;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__IntersectionStatusObject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntersectionStatusObject__ros_msg_type * ros_message = static_cast<const _IntersectionStatusObject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name manualcontrolisenabled
  {
    size_t item_size = sizeof(ros_message->manualcontrolisenabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stoptimeisactivated
  {
    size_t item_size = sizeof(ros_message->stoptimeisactivated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failureflash
  {
    size_t item_size = sizeof(ros_message->failureflash);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name preemptisactive
  {
    size_t item_size = sizeof(ros_message->preemptisactive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signalpriorityisactive
  {
    size_t item_size = sizeof(ros_message->signalpriorityisactive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fixedtimeoperation
  {
    size_t item_size = sizeof(ros_message->fixedtimeoperation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trafficdependentoperation
  {
    size_t item_size = sizeof(ros_message->trafficdependentoperation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name standbyoperation
  {
    size_t item_size = sizeof(ros_message->standbyoperation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failuremode
  {
    size_t item_size = sizeof(ros_message->failuremode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name off
  {
    size_t item_size = sizeof(ros_message->off);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recentmapmessageupdate
  {
    size_t item_size = sizeof(ros_message->recentmapmessageupdate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recentchangeinmapassignedlanesidsused
  {
    size_t item_size = sizeof(ros_message->recentchangeinmapassignedlanesidsused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name novalidmapisabilableatthistime
  {
    size_t item_size = sizeof(ros_message->novalidmapisabilableatthistime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nobalidspatisabilableatthistime
  {
    size_t item_size = sizeof(ros_message->nobalidspatisabilableatthistime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve14
  {
    size_t item_size = sizeof(ros_message->reserve14);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserve15
  {
    size_t item_size = sizeof(ros_message->reserve15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IntersectionStatusObject__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__IntersectionStatusObject(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__IntersectionStatusObject(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: manualcontrolisenabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stoptimeisactivated
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: failureflash
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: preemptisactive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: signalpriorityisactive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fixedtimeoperation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trafficdependentoperation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: standbyoperation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: failuremode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: off
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: recentmapmessageupdate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: recentchangeinmapassignedlanesidsused
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: novalidmapisabilableatthistime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: nobalidspatisabilableatthistime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve14
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: reserve15
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg__msg__IntersectionStatusObject;
    is_plain =
      (
      offsetof(DataType, reserve15) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _IntersectionStatusObject__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__IntersectionStatusObject(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IntersectionStatusObject = {
  "v2x_msg::msg",
  "IntersectionStatusObject",
  _IntersectionStatusObject__cdr_serialize,
  _IntersectionStatusObject__cdr_deserialize,
  _IntersectionStatusObject__get_serialized_size,
  _IntersectionStatusObject__max_serialized_size
};

static rosidl_message_type_support_t _IntersectionStatusObject__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntersectionStatusObject,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionStatusObject)() {
  return &_IntersectionStatusObject__type_support;
}

#if defined(__cplusplus)
}
#endif
