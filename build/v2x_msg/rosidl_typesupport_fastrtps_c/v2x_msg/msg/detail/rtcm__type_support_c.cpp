// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/RTCM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/rtcm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/rtcm__struct.h"
#include "v2x_msg/msg/detail/rtcm__functions.h"
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

#include "rosidl_runtime_c/string.h"  // msgs
#include "rosidl_runtime_c/string_functions.h"  // msgs
#include "v2x_msg/msg/detail/full_position_vector__functions.h"  // anchorpoint
#include "v2x_msg/msg/detail/rtc_mheader__functions.h"  // rtcmheader

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__FullPositionVector(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector)();
size_t get_serialized_size_v2x_msg__msg__RTCMheader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__RTCMheader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RTCMheader)();


using _RTCM__ros_msg_type = v2x_msg__msg__RTCM;

static bool _RTCM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RTCM__ros_msg_type * ros_message = static_cast<const _RTCM__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr << ros_message->msgcnt;
  }

  // Field name: rev
  {
    cdr << ros_message->rev;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: anchorpoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->anchorpoint, cdr))
    {
      return false;
    }
  }

  // Field name: rtcmheader
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RTCMheader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rtcmheader, cdr))
    {
      return false;
    }
  }

  // Field name: msgs
  {
    size_t size = ros_message->msgs.size;
    auto array_ptr = ros_message->msgs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  return true;
}

static bool _RTCM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RTCM__ros_msg_type * ros_message = static_cast<_RTCM__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr >> ros_message->msgcnt;
  }

  // Field name: rev
  {
    cdr >> ros_message->rev;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: anchorpoint
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->anchorpoint))
    {
      return false;
    }
  }

  // Field name: rtcmheader
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, RTCMheader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rtcmheader))
    {
      return false;
    }
  }

  // Field name: msgs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->msgs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->msgs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->msgs, size)) {
      fprintf(stderr, "failed to create array for field 'msgs'");
      return false;
    }
    auto array_ptr = ros_message->msgs.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'msgs'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__RTCM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RTCM__ros_msg_type * ros_message = static_cast<const _RTCM__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name msgcnt
  {
    size_t item_size = sizeof(ros_message->msgcnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rev
  {
    size_t item_size = sizeof(ros_message->rev);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anchorpoint

  current_alignment += get_serialized_size_v2x_msg__msg__FullPositionVector(
    &(ros_message->anchorpoint), current_alignment);
  // field.name rtcmheader

  current_alignment += get_serialized_size_v2x_msg__msg__RTCMheader(
    &(ros_message->rtcmheader), current_alignment);
  // field.name msgs
  {
    size_t array_size = ros_message->msgs.size;
    auto array_ptr = ros_message->msgs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RTCM__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__RTCM(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__RTCM(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: msgcnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rev
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: anchorpoint
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__FullPositionVector(
        full_bounded, current_alignment);
    }
  }
  // member: rtcmheader
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__RTCMheader(
        full_bounded, current_alignment);
    }
  }
  // member: msgs
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RTCM__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__RTCM(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RTCM = {
  "v2x_msg::msg",
  "RTCM",
  _RTCM__cdr_serialize,
  _RTCM__cdr_deserialize,
  _RTCM__get_serialized_size,
  _RTCM__max_serialized_size
};

static rosidl_message_type_support_t _RTCM__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RTCM,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RTCM)() {
  return &_RTCM__type_support;
}

#if defined(__cplusplus)
}
#endif
