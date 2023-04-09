// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/PathHistory.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/path_history__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/path_history__struct.h"
#include "v2x_msg/msg/detail/path_history__functions.h"
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

#include "rosidl_runtime_c/string.h"  // currgnssstatus
#include "rosidl_runtime_c/string_functions.h"  // currgnssstatus
#include "v2x_msg/msg/detail/full_position_vector__functions.h"  // initialposition
#include "v2x_msg/msg/detail/path_history_point__functions.h"  // crumbdata

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__FullPositionVector(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector)();
size_t get_serialized_size_v2x_msg__msg__PathHistoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PathHistoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistoryPoint)();


using _PathHistory__ros_msg_type = v2x_msg__msg__PathHistory;

static bool _PathHistory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PathHistory__ros_msg_type * ros_message = static_cast<const _PathHistory__ros_msg_type *>(untyped_ros_message);
  // Field name: initialposition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->initialposition, cdr))
    {
      return false;
    }
  }

  // Field name: currgnssstatus
  {
    const rosidl_runtime_c__String * str = &ros_message->currgnssstatus;
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

  // Field name: crumbdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistoryPoint
      )()->data);
    size_t size = ros_message->crumbdata.size;
    auto array_ptr = ros_message->crumbdata.data;
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

static bool _PathHistory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PathHistory__ros_msg_type * ros_message = static_cast<_PathHistory__ros_msg_type *>(untyped_ros_message);
  // Field name: initialposition
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->initialposition))
    {
      return false;
    }
  }

  // Field name: currgnssstatus
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->currgnssstatus.data) {
      rosidl_runtime_c__String__init(&ros_message->currgnssstatus);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->currgnssstatus,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'currgnssstatus'\n");
      return false;
    }
  }

  // Field name: crumbdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistoryPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->crumbdata.data) {
      v2x_msg__msg__PathHistoryPoint__Sequence__fini(&ros_message->crumbdata);
    }
    if (!v2x_msg__msg__PathHistoryPoint__Sequence__init(&ros_message->crumbdata, size)) {
      fprintf(stderr, "failed to create array for field 'crumbdata'");
      return false;
    }
    auto array_ptr = ros_message->crumbdata.data;
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
size_t get_serialized_size_v2x_msg__msg__PathHistory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PathHistory__ros_msg_type * ros_message = static_cast<const _PathHistory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name initialposition

  current_alignment += get_serialized_size_v2x_msg__msg__FullPositionVector(
    &(ros_message->initialposition), current_alignment);
  // field.name currgnssstatus
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->currgnssstatus.size + 1);
  // field.name crumbdata
  {
    size_t array_size = ros_message->crumbdata.size;
    auto array_ptr = ros_message->crumbdata.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__PathHistoryPoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PathHistory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__PathHistory(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__PathHistory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: initialposition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__FullPositionVector(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: currgnssstatus
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: crumbdata
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PathHistoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PathHistory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__PathHistory(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PathHistory = {
  "v2x_msg::msg",
  "PathHistory",
  _PathHistory__cdr_serialize,
  _PathHistory__cdr_deserialize,
  _PathHistory__get_serialized_size,
  _PathHistory__max_serialized_size
};

static rosidl_message_type_support_t _PathHistory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PathHistory,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistory)() {
  return &_PathHistory__type_support;
}

#if defined(__cplusplus)
}
#endif
