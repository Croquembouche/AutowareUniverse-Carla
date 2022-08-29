// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/Content.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/content__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/content__struct.h"
#include "v2x_msg/msg/detail/content__functions.h"
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

#include "v2x_msg/msg/detail/exit_service__functions.h"  // exitservice
#include "v2x_msg/msg/detail/generic_signage__functions.h"  // genericsign
#include "v2x_msg/msg/detail/iti_scodesandtext__functions.h"  // advisory
#include "v2x_msg/msg/detail/itis_speed_limit__functions.h"  // speedlimit
#include "v2x_msg/msg/detail/work_zone__functions.h"  // workzone

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__ExitService(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ExitService(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ExitService)();
size_t get_serialized_size_v2x_msg__msg__GenericSignage(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__GenericSignage(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, GenericSignage)();
size_t get_serialized_size_v2x_msg__msg__ITISSpeedLimit(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ITISSpeedLimit(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ITISSpeedLimit)();
size_t get_serialized_size_v2x_msg__msg__ITIScodesandtext(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ITIScodesandtext(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ITIScodesandtext)();
size_t get_serialized_size_v2x_msg__msg__WorkZone(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__WorkZone(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, WorkZone)();


using _Content__ros_msg_type = v2x_msg__msg__Content;

static bool _Content__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Content__ros_msg_type * ros_message = static_cast<const _Content__ros_msg_type *>(untyped_ros_message);
  // Field name: advisory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ITIScodesandtext
      )()->data);
    size_t size = ros_message->advisory.size;
    auto array_ptr = ros_message->advisory.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: workzone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, WorkZone
      )()->data);
    size_t size = ros_message->workzone.size;
    auto array_ptr = ros_message->workzone.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: genericsign
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, GenericSignage
      )()->data);
    size_t size = ros_message->genericsign.size;
    auto array_ptr = ros_message->genericsign.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: speedlimit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ITISSpeedLimit
      )()->data);
    size_t size = ros_message->speedlimit.size;
    auto array_ptr = ros_message->speedlimit.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: exitservice
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ExitService
      )()->data);
    size_t size = ros_message->exitservice.size;
    auto array_ptr = ros_message->exitservice.data;
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

static bool _Content__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Content__ros_msg_type * ros_message = static_cast<_Content__ros_msg_type *>(untyped_ros_message);
  // Field name: advisory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ITIScodesandtext
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->advisory.data) {
      v2x_msg__msg__ITIScodesandtext__Sequence__fini(&ros_message->advisory);
    }
    if (!v2x_msg__msg__ITIScodesandtext__Sequence__init(&ros_message->advisory, size)) {
      fprintf(stderr, "failed to create array for field 'advisory'");
      return false;
    }
    auto array_ptr = ros_message->advisory.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: workzone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, WorkZone
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->workzone.data) {
      v2x_msg__msg__WorkZone__Sequence__fini(&ros_message->workzone);
    }
    if (!v2x_msg__msg__WorkZone__Sequence__init(&ros_message->workzone, size)) {
      fprintf(stderr, "failed to create array for field 'workzone'");
      return false;
    }
    auto array_ptr = ros_message->workzone.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: genericsign
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, GenericSignage
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->genericsign.data) {
      v2x_msg__msg__GenericSignage__Sequence__fini(&ros_message->genericsign);
    }
    if (!v2x_msg__msg__GenericSignage__Sequence__init(&ros_message->genericsign, size)) {
      fprintf(stderr, "failed to create array for field 'genericsign'");
      return false;
    }
    auto array_ptr = ros_message->genericsign.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: speedlimit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ITISSpeedLimit
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->speedlimit.data) {
      v2x_msg__msg__ITISSpeedLimit__Sequence__fini(&ros_message->speedlimit);
    }
    if (!v2x_msg__msg__ITISSpeedLimit__Sequence__init(&ros_message->speedlimit, size)) {
      fprintf(stderr, "failed to create array for field 'speedlimit'");
      return false;
    }
    auto array_ptr = ros_message->speedlimit.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: exitservice
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ExitService
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->exitservice.data) {
      v2x_msg__msg__ExitService__Sequence__fini(&ros_message->exitservice);
    }
    if (!v2x_msg__msg__ExitService__Sequence__init(&ros_message->exitservice, size)) {
      fprintf(stderr, "failed to create array for field 'exitservice'");
      return false;
    }
    auto array_ptr = ros_message->exitservice.data;
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
size_t get_serialized_size_v2x_msg__msg__Content(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Content__ros_msg_type * ros_message = static_cast<const _Content__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name advisory
  {
    size_t array_size = ros_message->advisory.size;
    auto array_ptr = ros_message->advisory.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__ITIScodesandtext(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name workzone
  {
    size_t array_size = ros_message->workzone.size;
    auto array_ptr = ros_message->workzone.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__WorkZone(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name genericsign
  {
    size_t array_size = ros_message->genericsign.size;
    auto array_ptr = ros_message->genericsign.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__GenericSignage(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name speedlimit
  {
    size_t array_size = ros_message->speedlimit.size;
    auto array_ptr = ros_message->speedlimit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__ITISSpeedLimit(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name exitservice
  {
    size_t array_size = ros_message->exitservice.size;
    auto array_ptr = ros_message->exitservice.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__ExitService(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Content__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__Content(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__Content(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: advisory
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ITIScodesandtext(
        full_bounded, current_alignment);
    }
  }
  // member: workzone
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__WorkZone(
        full_bounded, current_alignment);
    }
  }
  // member: genericsign
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__GenericSignage(
        full_bounded, current_alignment);
    }
  }
  // member: speedlimit
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ITISSpeedLimit(
        full_bounded, current_alignment);
    }
  }
  // member: exitservice
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__ExitService(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Content__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__Content(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Content = {
  "v2x_msg::msg",
  "Content",
  _Content__cdr_serialize,
  _Content__cdr_deserialize,
  _Content__get_serialized_size,
  _Content__max_serialized_size
};

static rosidl_message_type_support_t _Content__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Content,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Content)() {
  return &_Content__type_support;
}

#if defined(__cplusplus)
}
#endif
