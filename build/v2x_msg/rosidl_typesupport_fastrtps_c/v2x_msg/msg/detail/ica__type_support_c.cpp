// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/ICA.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/ica__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/ica__struct.h"
#include "v2x_msg/msg/detail/ica__functions.h"
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

#include "rosidl_runtime_c/string.h"  // eventflag, id
#include "rosidl_runtime_c/string_functions.h"  // eventflag, id
#include "v2x_msg/msg/detail/approach_or_lane__functions.h"  // lanenumber
#include "v2x_msg/msg/detail/bsm_core_data__functions.h"  // partone
#include "v2x_msg/msg/detail/intersection_reference_id__functions.h"  // intersectionid
#include "v2x_msg/msg/detail/path_history__functions.h"  // path
#include "v2x_msg/msg/detail/path_prediction__functions.h"  // pathprediction

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__ApproachOrLane(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__ApproachOrLane(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ApproachOrLane)();
size_t get_serialized_size_v2x_msg__msg__BSMCoreData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__BSMCoreData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, BSMCoreData)();
size_t get_serialized_size_v2x_msg__msg__IntersectionReferenceID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__IntersectionReferenceID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID)();
size_t get_serialized_size_v2x_msg__msg__PathHistory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PathHistory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistory)();
size_t get_serialized_size_v2x_msg__msg__PathPrediction(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PathPrediction(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathPrediction)();


using _ICA__ros_msg_type = v2x_msg__msg__ICA;

static bool _ICA__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ICA__ros_msg_type * ros_message = static_cast<const _ICA__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr << ros_message->msgcnt;
  }

  // Field name: id
  {
    const rosidl_runtime_c__String * str = &ros_message->id;
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

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: partone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, BSMCoreData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->partone, cdr))
    {
      return false;
    }
  }

  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->path, cdr))
    {
      return false;
    }
  }

  // Field name: pathprediction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathPrediction
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pathprediction, cdr))
    {
      return false;
    }
  }

  // Field name: intersectionid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->intersectionid, cdr))
    {
      return false;
    }
  }

  // Field name: lanenumber
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ApproachOrLane
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lanenumber, cdr))
    {
      return false;
    }
  }

  // Field name: eventflag
  {
    const rosidl_runtime_c__String * str = &ros_message->eventflag;
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

static bool _ICA__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ICA__ros_msg_type * ros_message = static_cast<_ICA__ros_msg_type *>(untyped_ros_message);
  // Field name: msgcnt
  {
    cdr >> ros_message->msgcnt;
  }

  // Field name: id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->id.data) {
      rosidl_runtime_c__String__init(&ros_message->id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'id'\n");
      return false;
    }
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: partone
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, BSMCoreData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->partone))
    {
      return false;
    }
  }

  // Field name: path
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->path))
    {
      return false;
    }
  }

  // Field name: pathprediction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathPrediction
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pathprediction))
    {
      return false;
    }
  }

  // Field name: intersectionid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, IntersectionReferenceID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->intersectionid))
    {
      return false;
    }
  }

  // Field name: lanenumber
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, ApproachOrLane
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lanenumber))
    {
      return false;
    }
  }

  // Field name: eventflag
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eventflag.data) {
      rosidl_runtime_c__String__init(&ros_message->eventflag);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eventflag,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eventflag'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__ICA(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ICA__ros_msg_type * ros_message = static_cast<const _ICA__ros_msg_type *>(untyped_ros_message);
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
  // field.name id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->id.size + 1);
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name partone

  current_alignment += get_serialized_size_v2x_msg__msg__BSMCoreData(
    &(ros_message->partone), current_alignment);
  // field.name path

  current_alignment += get_serialized_size_v2x_msg__msg__PathHistory(
    &(ros_message->path), current_alignment);
  // field.name pathprediction

  current_alignment += get_serialized_size_v2x_msg__msg__PathPrediction(
    &(ros_message->pathprediction), current_alignment);
  // field.name intersectionid

  current_alignment += get_serialized_size_v2x_msg__msg__IntersectionReferenceID(
    &(ros_message->intersectionid), current_alignment);
  // field.name lanenumber

  current_alignment += get_serialized_size_v2x_msg__msg__ApproachOrLane(
    &(ros_message->lanenumber), current_alignment);
  // field.name eventflag
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eventflag.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ICA__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__ICA(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__ICA(
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

  // member: msgcnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: id
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
  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: partone
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__BSMCoreData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: path
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__PathHistory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pathprediction
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__PathPrediction(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: intersectionid
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__IntersectionReferenceID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: lanenumber
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_msg__msg__ApproachOrLane(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: eventflag
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
    using DataType = v2x_msg__msg__ICA;
    is_plain =
      (
      offsetof(DataType, eventflag) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ICA__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__ICA(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ICA = {
  "v2x_msg::msg",
  "ICA",
  _ICA__cdr_serialize,
  _ICA__cdr_deserialize,
  _ICA__get_serialized_size,
  _ICA__max_serialized_size
};

static rosidl_message_type_support_t _ICA__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ICA,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, ICA)() {
  return &_ICA__type_support;
}

#if defined(__cplusplus)
}
#endif
