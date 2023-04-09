// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/RSA.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/rsa__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/rsa__struct.h"
#include "v2x_msg/msg/detail/rsa__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // desrciption
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // desrciption
#include "rosidl_runtime_c/string.h"  // furtherinfoid, heading, priority
#include "rosidl_runtime_c/string_functions.h"  // furtherinfoid, heading, priority
#include "v2x_msg/msg/detail/full_position_vector__functions.h"  // position

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


using _RSA__ros_msg_type = v2x_msg__msg__RSA;

static bool _RSA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RSA__ros_msg_type * ros_message = static_cast<const _RSA__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr << ros_message->msgcnt;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: typeevent
  {
    cdr << ros_message->typeevent;
  }

  // Field name: desrciption
  {
    size_t size = ros_message->desrciption.size;
    auto array_ptr = ros_message->desrciption.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: priority
  {
    const rosidl_runtime_c__String * str = &ros_message->priority;
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

  // Field name: heading
  {
    const rosidl_runtime_c__String * str = &ros_message->heading;
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

  // Field name: extent
  {
    cdr << ros_message->extent;
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: furtherinfoid
  {
    const rosidl_runtime_c__String * str = &ros_message->furtherinfoid;
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

static bool _RSA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RSA__ros_msg_type * ros_message = static_cast<_RSA__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr >> ros_message->msgcnt;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: typeevent
  {
    cdr >> ros_message->typeevent;
  }

  // Field name: desrciption
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->desrciption.data) {
      rosidl_runtime_c__int64__Sequence__fini(&ros_message->desrciption);
    }
    if (!rosidl_runtime_c__int64__Sequence__init(&ros_message->desrciption, size)) {
      fprintf(stderr, "failed to create array for field 'desrciption'");
      return false;
    }
    auto array_ptr = ros_message->desrciption.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: priority
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->priority.data) {
      rosidl_runtime_c__String__init(&ros_message->priority);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->priority,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'priority'\n");
      return false;
    }
  }

  // Field name: heading
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->heading.data) {
      rosidl_runtime_c__String__init(&ros_message->heading);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->heading,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'heading'\n");
      return false;
    }
  }

  // Field name: extent
  {
    cdr >> ros_message->extent;
  }

  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: furtherinfoid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->furtherinfoid.data) {
      rosidl_runtime_c__String__init(&ros_message->furtherinfoid);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->furtherinfoid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'furtherinfoid'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__RSA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RSA__ros_msg_type * ros_message = static_cast<const _RSA__ros_msg_type *>(untyped_ros_message);
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
  // field.name typeevent
  {
    size_t item_size = sizeof(ros_message->typeevent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name desrciption
  {
    size_t array_size = ros_message->desrciption.size;
    auto array_ptr = ros_message->desrciption.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name priority
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->priority.size + 1);
  // field.name heading
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->heading.size + 1);
  // field.name extent
  {
    size_t item_size = sizeof(ros_message->extent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position

  current_alignment += get_serialized_size_v2x_msg__msg__FullPositionVector(
    &(ros_message->position), current_alignment);
  // field.name furtherinfoid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->furtherinfoid.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RSA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__RSA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__RSA(
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
  // member: typeevent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: desrciption
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: priority
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
  // member: heading
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
  // member: extent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: position
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
  // member: furtherinfoid
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

  return current_alignment - initial_alignment;
}

static size_t _RSA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__RSA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RSA = {
  "v2x_msg::msg",
  "RSA",
  _RSA__cdr_serialize,
  _RSA__cdr_deserialize,
  _RSA__get_serialized_size,
  _RSA__max_serialized_size
};

static rosidl_message_type_support_t _RSA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RSA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, RSA)() {
  return &_RSA__type_support;
}

#if defined(__cplusplus)
}
#endif
