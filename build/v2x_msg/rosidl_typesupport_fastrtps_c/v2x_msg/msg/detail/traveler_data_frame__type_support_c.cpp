// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/TravelerDataFrame.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/traveler_data_frame__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/traveler_data_frame__struct.h"
#include "v2x_msg/msg/detail/traveler_data_frame__functions.h"
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

#include "rosidl_runtime_c/string.h"  // url
#include "rosidl_runtime_c/string_functions.h"  // url
#include "v2x_msg/msg/detail/content__functions.h"  // content
#include "v2x_msg/msg/detail/geographical_path__functions.h"  // regions
#include "v2x_msg/msg/detail/msg_id__functions.h"  // msgid

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__Content(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Content(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Content)();
size_t get_serialized_size_v2x_msg__msg__GeographicalPath(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__GeographicalPath(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, GeographicalPath)();
size_t get_serialized_size_v2x_msg__msg__MsgID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__MsgID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, MsgID)();


using _TravelerDataFrame__ros_msg_type = v2x_msg__msg__TravelerDataFrame;

static bool _TravelerDataFrame__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TravelerDataFrame__ros_msg_type * ros_message = static_cast<const _TravelerDataFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: notused
  {
    cdr << ros_message->notused;
  }

  // Field name: frametype
  {
    cdr << ros_message->frametype;
  }

  // Field name: msgid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, MsgID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->msgid, cdr))
    {
      return false;
    }
  }

  // Field name: startyear
  {
    cdr << ros_message->startyear;
  }

  // Field name: starttime
  {
    cdr << ros_message->starttime;
  }

  // Field name: durationtime
  {
    cdr << ros_message->durationtime;
  }

  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  // Field name: notused1
  {
    cdr << ros_message->notused1;
  }

  // Field name: regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, GeographicalPath
      )()->data);
    size_t size = ros_message->regions.size;
    auto array_ptr = ros_message->regions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: notused2
  {
    cdr << ros_message->notused2;
  }

  // Field name: notused3
  {
    cdr << ros_message->notused3;
  }

  // Field name: content
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Content
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->content, cdr))
    {
      return false;
    }
  }

  // Field name: url
  {
    const rosidl_runtime_c__String * str = &ros_message->url;
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

static bool _TravelerDataFrame__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TravelerDataFrame__ros_msg_type * ros_message = static_cast<_TravelerDataFrame__ros_msg_type *>(untyped_ros_message);
  // Field name: notused
  {
    cdr >> ros_message->notused;
  }

  // Field name: frametype
  {
    cdr >> ros_message->frametype;
  }

  // Field name: msgid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, MsgID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->msgid))
    {
      return false;
    }
  }

  // Field name: startyear
  {
    cdr >> ros_message->startyear;
  }

  // Field name: starttime
  {
    cdr >> ros_message->starttime;
  }

  // Field name: durationtime
  {
    cdr >> ros_message->durationtime;
  }

  // Field name: priority
  {
    cdr >> ros_message->priority;
  }

  // Field name: notused1
  {
    cdr >> ros_message->notused1;
  }

  // Field name: regions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, GeographicalPath
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->regions.data) {
      v2x_msg__msg__GeographicalPath__Sequence__fini(&ros_message->regions);
    }
    if (!v2x_msg__msg__GeographicalPath__Sequence__init(&ros_message->regions, size)) {
      fprintf(stderr, "failed to create array for field 'regions'");
      return false;
    }
    auto array_ptr = ros_message->regions.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: notused2
  {
    cdr >> ros_message->notused2;
  }

  // Field name: notused3
  {
    cdr >> ros_message->notused3;
  }

  // Field name: content
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Content
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->content))
    {
      return false;
    }
  }

  // Field name: url
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->url.data) {
      rosidl_runtime_c__String__init(&ros_message->url);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->url,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'url'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__TravelerDataFrame(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TravelerDataFrame__ros_msg_type * ros_message = static_cast<const _TravelerDataFrame__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name notused
  {
    size_t item_size = sizeof(ros_message->notused);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frametype
  {
    size_t item_size = sizeof(ros_message->frametype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msgid

  current_alignment += get_serialized_size_v2x_msg__msg__MsgID(
    &(ros_message->msgid), current_alignment);
  // field.name startyear
  {
    size_t item_size = sizeof(ros_message->startyear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name starttime
  {
    size_t item_size = sizeof(ros_message->starttime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name durationtime
  {
    size_t item_size = sizeof(ros_message->durationtime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name notused1
  {
    size_t item_size = sizeof(ros_message->notused1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name regions
  {
    size_t array_size = ros_message->regions.size;
    auto array_ptr = ros_message->regions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__GeographicalPath(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name notused2
  {
    size_t item_size = sizeof(ros_message->notused2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name notused3
  {
    size_t item_size = sizeof(ros_message->notused3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name content

  current_alignment += get_serialized_size_v2x_msg__msg__Content(
    &(ros_message->content), current_alignment);
  // field.name url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->url.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TravelerDataFrame__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__TravelerDataFrame(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__TravelerDataFrame(
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

  // member: notused
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: frametype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: msgid
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__MsgID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: startyear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: starttime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: durationtime
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: priority
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: notused1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: regions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__GeographicalPath(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: notused2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: notused3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: content
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__Content(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: url
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_msg__msg__TravelerDataFrame;
    is_plain =
      (
      offsetof(DataType, url) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TravelerDataFrame__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__TravelerDataFrame(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TravelerDataFrame = {
  "v2x_msg::msg",
  "TravelerDataFrame",
  _TravelerDataFrame__cdr_serialize,
  _TravelerDataFrame__cdr_deserialize,
  _TravelerDataFrame__get_serialized_size,
  _TravelerDataFrame__max_serialized_size
};

static rosidl_message_type_support_t _TravelerDataFrame__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TravelerDataFrame,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, TravelerDataFrame)() {
  return &_TravelerDataFrame__type_support;
}

#if defined(__cplusplus)
}
#endif
