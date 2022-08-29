// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/RoadSignID.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/road_sign_id__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/road_sign_id__struct.h"
#include "v2x_msg/msg/detail/road_sign_id__functions.h"
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

#include "rosidl_runtime_c/string.h"  // msgcrc, viewangle
#include "rosidl_runtime_c/string_functions.h"  // msgcrc, viewangle
#include "v2x_msg/msg/detail/position3_d__functions.h"  // position

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Position3D(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Position3D)();


using _RoadSignID__ros_msg_type = v2x_msg__msg__RoadSignID;

static bool _RoadSignID__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RoadSignID__ros_msg_type * ros_message = static_cast<const _RoadSignID__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Position3D
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: viewangle
  {
    const rosidl_runtime_c__String * str = &ros_message->viewangle;
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

  // Field name: mutcdcode
  {
    cdr << ros_message->mutcdcode;
  }

  // Field name: msgcrc
  {
    const rosidl_runtime_c__String * str = &ros_message->msgcrc;
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

  return true;
}

static bool _RoadSignID__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RoadSignID__ros_msg_type * ros_message = static_cast<_RoadSignID__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Position3D
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: viewangle
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->viewangle.data) {
      rosidl_runtime_c__String__init(&ros_message->viewangle);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->viewangle,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'viewangle'\n");
      return false;
    }
  }

  // Field name: mutcdcode
  {
    cdr >> ros_message->mutcdcode;
  }

  // Field name: msgcrc
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->msgcrc.data) {
      rosidl_runtime_c__String__init(&ros_message->msgcrc);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->msgcrc,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'msgcrc'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__RoadSignID(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoadSignID__ros_msg_type * ros_message = static_cast<const _RoadSignID__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position

  current_alignment += get_serialized_size_v2x_msg__msg__Position3D(
    &(ros_message->position), current_alignment);
  // field.name viewangle
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->viewangle.size + 1);
  // field.name mutcdcode
  {
    size_t item_size = sizeof(ros_message->mutcdcode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msgcrc
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->msgcrc.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RoadSignID__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__RoadSignID(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__RoadSignID(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Position3D(
        full_bounded, current_alignment);
    }
  }
  // member: viewangle
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mutcdcode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: msgcrc
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RoadSignID__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__RoadSignID(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RoadSignID = {
  "v2x_msg::msg",
  "RoadSignID",
  _RoadSignID__cdr_serialize,
  _RoadSignID__cdr_deserialize,
  _RoadSignID__get_serialized_size,
  _RoadSignID__max_serialized_size
};

static rosidl_message_type_support_t _RoadSignID__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoadSignID,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RoadSignID)() {
  return &_RoadSignID__type_support;
}

#if defined(__cplusplus)
}
#endif
