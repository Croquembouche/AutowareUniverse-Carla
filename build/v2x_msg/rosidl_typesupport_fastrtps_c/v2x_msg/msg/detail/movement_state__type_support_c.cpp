// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/movement_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/movement_state__struct.h"
#include "v2x_msg/msg/detail/movement_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // movementname
#include "rosidl_runtime_c/string_functions.h"  // movementname
#include "v2x_msg/msg/detail/connection_maneuver_assist__functions.h"  // maneuverassistlist
#include "v2x_msg/msg/detail/movement_event__functions.h"  // statetimespeed

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__ConnectionManeuverAssist(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ConnectionManeuverAssist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConnectionManeuverAssist)();
size_t get_serialized_size_v2x_msg__msg__MovementEvent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__MovementEvent(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, MovementEvent)();


using _MovementState__ros_msg_type = v2x_msg__msg__MovementState;

static bool _MovementState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MovementState__ros_msg_type * ros_message = static_cast<const _MovementState__ros_msg_type *>(untyped_ros_message);
  // Field name: movementname
  {
    const rosidl_runtime_c__String * str = &ros_message->movementname;
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

  // Field name: signalgroupid
  {
    cdr << ros_message->signalgroupid;
  }

  // Field name: statetimespeed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, MovementEvent
      )()->data);
    size_t size = ros_message->statetimespeed.size;
    auto array_ptr = ros_message->statetimespeed.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: maneuverassistlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConnectionManeuverAssist
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->maneuverassistlist, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _MovementState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MovementState__ros_msg_type * ros_message = static_cast<_MovementState__ros_msg_type *>(untyped_ros_message);
  // Field name: movementname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->movementname.data) {
      rosidl_runtime_c__String__init(&ros_message->movementname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->movementname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'movementname'\n");
      return false;
    }
  }

  // Field name: signalgroupid
  {
    cdr >> ros_message->signalgroupid;
  }

  // Field name: statetimespeed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, MovementEvent
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->statetimespeed.data) {
      v2x_msg__msg__MovementEvent__Sequence__fini(&ros_message->statetimespeed);
    }
    if (!v2x_msg__msg__MovementEvent__Sequence__init(&ros_message->statetimespeed, size)) {
      fprintf(stderr, "failed to create array for field 'statetimespeed'");
      return false;
    }
    auto array_ptr = ros_message->statetimespeed.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: maneuverassistlist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ConnectionManeuverAssist
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->maneuverassistlist))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__MovementState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MovementState__ros_msg_type * ros_message = static_cast<const _MovementState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name movementname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->movementname.size + 1);
  // field.name signalgroupid
  {
    size_t item_size = sizeof(ros_message->signalgroupid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name statetimespeed
  {
    size_t array_size = ros_message->statetimespeed.size;
    auto array_ptr = ros_message->statetimespeed.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__MovementEvent(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name maneuverassistlist

  current_alignment += get_serialized_size_v2x_msg__msg__ConnectionManeuverAssist(
    &(ros_message->maneuverassistlist), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _MovementState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__MovementState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__MovementState(
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

  // member: movementname
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
  // member: signalgroupid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: statetimespeed
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
        max_serialized_size_v2x_msg__msg__MovementEvent(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: maneuverassistlist
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ConnectionManeuverAssist(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MovementState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__MovementState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MovementState = {
  "v2x_msg::msg",
  "MovementState",
  _MovementState__cdr_serialize,
  _MovementState__cdr_deserialize,
  _MovementState__get_serialized_size,
  _MovementState__max_serialized_size
};

static rosidl_message_type_support_t _MovementState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MovementState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, MovementState)() {
  return &_MovementState__type_support;
}

#if defined(__cplusplus)
}
#endif
