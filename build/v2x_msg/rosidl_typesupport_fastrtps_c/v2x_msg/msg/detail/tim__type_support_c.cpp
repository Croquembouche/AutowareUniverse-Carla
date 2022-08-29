// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/tim__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/tim__struct.h"
#include "v2x_msg/msg/detail/tim__functions.h"
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

#include "rosidl_runtime_c/string.h"  // urlb
#include "rosidl_runtime_c/string_functions.h"  // urlb
#include "v2x_msg/msg/detail/traveler_data_frame__functions.h"  // dataframes

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__TravelerDataFrame(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__TravelerDataFrame(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TravelerDataFrame)();


using _TIM__ros_msg_type = v2x_msg__msg__TIM;

static bool _TIM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TIM__ros_msg_type * ros_message = static_cast<const _TIM__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr << ros_message->msgcnt;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: packetid
  {
    cdr << ros_message->packetid;
  }

  // Field name: urlb
  {
    const rosidl_runtime_c__String * str = &ros_message->urlb;
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

  // Field name: dataframes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, TravelerDataFrame
      )()->data);
    size_t size = ros_message->dataframes.size;
    auto array_ptr = ros_message->dataframes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _TIM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TIM__ros_msg_type * ros_message = static_cast<_TIM__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr >> ros_message->msgcnt;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: packetid
  {
    cdr >> ros_message->packetid;
  }

  // Field name: urlb
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->urlb.data) {
      rosidl_runtime_c__String__init(&ros_message->urlb);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->urlb,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'urlb'\n");
      return false;
    }
  }

  // Field name: dataframes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, TravelerDataFrame
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->dataframes.data) {
      v2x_msg__msg__TravelerDataFrame__Sequence__fini(&ros_message->dataframes);
    }
    if (!v2x_msg__msg__TravelerDataFrame__Sequence__init(&ros_message->dataframes, size)) {
      fprintf(stderr, "failed to create array for field 'dataframes'");
      return false;
    }
    auto array_ptr = ros_message->dataframes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__TIM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TIM__ros_msg_type * ros_message = static_cast<const _TIM__ros_msg_type *>(untyped_ros_message);
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
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name packetid
  {
    size_t item_size = sizeof(ros_message->packetid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name urlb
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->urlb.size + 1);
  // field.name dataframes
  {
    size_t array_size = ros_message->dataframes.size;
    auto array_ptr = ros_message->dataframes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__TravelerDataFrame(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TIM__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__TIM(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__TIM(
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
  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: packetid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: urlb
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: dataframes
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__TravelerDataFrame(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TIM__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__TIM(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TIM = {
  "v2x_msg::msg",
  "TIM",
  _TIM__cdr_serialize,
  _TIM__cdr_deserialize,
  _TIM__get_serialized_size,
  _TIM__max_serialized_size
};

static rosidl_message_type_support_t _TIM__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TIM,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TIM)() {
  return &_TIM__type_support;
}

#if defined(__cplusplus)
}
#endif
