// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/PSM.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/psm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/psm__struct.h"
#include "v2x_msg/msg/detail/psm__functions.h"
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

#include "rosidl_runtime_c/string.h"  // activitysubtype, activitytype, assisttype, id, sizing, usestate
#include "rosidl_runtime_c/string_functions.h"  // activitysubtype, activitytype, assisttype, id, sizing, usestate
#include "v2x_msg/msg/detail/acceleration_set4_way__functions.h"  // accelset
#include "v2x_msg/msg/detail/path_history__functions.h"  // pathhistory
#include "v2x_msg/msg/detail/path_prediction__functions.h"  // pathprediction
#include "v2x_msg/msg/detail/position3_d__functions.h"  // position
#include "v2x_msg/msg/detail/positional_accuracy__functions.h"  // accuracy
#include "v2x_msg/msg/detail/propelled_information__functions.h"  // propulsion

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__AccelerationSet4Way(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__AccelerationSet4Way(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way)();
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
size_t get_serialized_size_v2x_msg__msg__Position3D(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Position3D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Position3D)();
size_t get_serialized_size_v2x_msg__msg__PositionalAccuracy(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PositionalAccuracy(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy)();
size_t get_serialized_size_v2x_msg__msg__PropelledInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__PropelledInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PropelledInformation)();


using _PSM__ros_msg_type = v2x_msg__msg__PSM;

static bool _PSM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PSM__ros_msg_type * ros_message = static_cast<const _PSM__ros_msg_type *>(untyped_ros_message);
  // Field name: basictype
  {
    cdr << ros_message->basictype;
  }

  // Field name: secmark
  {
    cdr << ros_message->secmark;
  }

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

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accuracy, cdr))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: accelset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->accelset, cdr))
    {
      return false;
    }
  }

  // Field name: pathhistory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pathhistory, cdr))
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

  // Field name: propulsion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PropelledInformation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->propulsion, cdr))
    {
      return false;
    }
  }

  // Field name: usestate
  {
    const rosidl_runtime_c__String * str = &ros_message->usestate;
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

  // Field name: crossrequest
  {
    cdr << (ros_message->crossrequest ? true : false);
  }

  // Field name: crossstate
  {
    cdr << (ros_message->crossstate ? true : false);
  }

  // Field name: clustersize
  {
    cdr << ros_message->clustersize;
  }

  // Field name: clusterradius
  {
    cdr << ros_message->clusterradius;
  }

  // Field name: eventrespondertype
  {
    cdr << ros_message->eventrespondertype;
  }

  // Field name: activitytype
  {
    const rosidl_runtime_c__String * str = &ros_message->activitytype;
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

  // Field name: activitysubtype
  {
    const rosidl_runtime_c__String * str = &ros_message->activitysubtype;
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

  // Field name: assisttype
  {
    const rosidl_runtime_c__String * str = &ros_message->assisttype;
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

  // Field name: sizing
  {
    const rosidl_runtime_c__String * str = &ros_message->sizing;
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

  // Field name: attachment
  {
    cdr << ros_message->attachment;
  }

  // Field name: attachmentradius
  {
    cdr << ros_message->attachmentradius;
  }

  // Field name: animaltype
  {
    cdr << ros_message->animaltype;
  }

  return true;
}

static bool _PSM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PSM__ros_msg_type * ros_message = static_cast<_PSM__ros_msg_type *>(untyped_ros_message);
  // Field name: basictype
  {
    cdr >> ros_message->basictype;
  }

  // Field name: secmark
  {
    cdr >> ros_message->secmark;
  }

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

  // Field name: accuracy
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PositionalAccuracy
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accuracy))
    {
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: accelset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, AccelerationSet4Way
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->accelset))
    {
      return false;
    }
  }

  // Field name: pathhistory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PathHistory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pathhistory))
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

  // Field name: propulsion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, PropelledInformation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->propulsion))
    {
      return false;
    }
  }

  // Field name: usestate
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->usestate.data) {
      rosidl_runtime_c__String__init(&ros_message->usestate);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->usestate,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'usestate'\n");
      return false;
    }
  }

  // Field name: crossrequest
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->crossrequest = tmp ? true : false;
  }

  // Field name: crossstate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->crossstate = tmp ? true : false;
  }

  // Field name: clustersize
  {
    cdr >> ros_message->clustersize;
  }

  // Field name: clusterradius
  {
    cdr >> ros_message->clusterradius;
  }

  // Field name: eventrespondertype
  {
    cdr >> ros_message->eventrespondertype;
  }

  // Field name: activitytype
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->activitytype.data) {
      rosidl_runtime_c__String__init(&ros_message->activitytype);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->activitytype,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'activitytype'\n");
      return false;
    }
  }

  // Field name: activitysubtype
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->activitysubtype.data) {
      rosidl_runtime_c__String__init(&ros_message->activitysubtype);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->activitysubtype,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'activitysubtype'\n");
      return false;
    }
  }

  // Field name: assisttype
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->assisttype.data) {
      rosidl_runtime_c__String__init(&ros_message->assisttype);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->assisttype,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'assisttype'\n");
      return false;
    }
  }

  // Field name: sizing
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->sizing.data) {
      rosidl_runtime_c__String__init(&ros_message->sizing);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->sizing,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'sizing'\n");
      return false;
    }
  }

  // Field name: attachment
  {
    cdr >> ros_message->attachment;
  }

  // Field name: attachmentradius
  {
    cdr >> ros_message->attachmentradius;
  }

  // Field name: animaltype
  {
    cdr >> ros_message->animaltype;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t get_serialized_size_v2x_msg__msg__PSM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PSM__ros_msg_type * ros_message = static_cast<const _PSM__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name basictype
  {
    size_t item_size = sizeof(ros_message->basictype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name secmark
  {
    size_t item_size = sizeof(ros_message->secmark);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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
  // field.name position

  current_alignment += get_serialized_size_v2x_msg__msg__Position3D(
    &(ros_message->position), current_alignment);
  // field.name accuracy

  current_alignment += get_serialized_size_v2x_msg__msg__PositionalAccuracy(
    &(ros_message->accuracy), current_alignment);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accelset

  current_alignment += get_serialized_size_v2x_msg__msg__AccelerationSet4Way(
    &(ros_message->accelset), current_alignment);
  // field.name pathhistory

  current_alignment += get_serialized_size_v2x_msg__msg__PathHistory(
    &(ros_message->pathhistory), current_alignment);
  // field.name pathprediction

  current_alignment += get_serialized_size_v2x_msg__msg__PathPrediction(
    &(ros_message->pathprediction), current_alignment);
  // field.name propulsion

  current_alignment += get_serialized_size_v2x_msg__msg__PropelledInformation(
    &(ros_message->propulsion), current_alignment);
  // field.name usestate
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->usestate.size + 1);
  // field.name crossrequest
  {
    size_t item_size = sizeof(ros_message->crossrequest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crossstate
  {
    size_t item_size = sizeof(ros_message->crossstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clustersize
  {
    size_t item_size = sizeof(ros_message->clustersize);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clusterradius
  {
    size_t item_size = sizeof(ros_message->clusterradius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eventrespondertype
  {
    size_t item_size = sizeof(ros_message->eventrespondertype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name activitytype
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->activitytype.size + 1);
  // field.name activitysubtype
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->activitysubtype.size + 1);
  // field.name assisttype
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->assisttype.size + 1);
  // field.name sizing
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->sizing.size + 1);
  // field.name attachment
  {
    size_t item_size = sizeof(ros_message->attachment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attachmentradius
  {
    size_t item_size = sizeof(ros_message->attachmentradius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name animaltype
  {
    size_t item_size = sizeof(ros_message->animaltype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PSM__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__PSM(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__PSM(
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

  // member: basictype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: secmark
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: msgcnt
  {
    size_t array_size = 1;

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
  // member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Position3D(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: accuracy
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PositionalAccuracy(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: accelset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__AccelerationSet4Way(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pathhistory
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PathHistory(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: pathprediction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PathPrediction(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: propulsion
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_v2x_msg__msg__PropelledInformation(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: usestate
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
  // member: crossrequest
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crossstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clustersize
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: clusterradius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: eventrespondertype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: activitytype
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
  // member: activitysubtype
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
  // member: assisttype
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
  // member: sizing
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
  // member: attachment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: attachmentradius
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: animaltype
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _PSM__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_msg__msg__PSM(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PSM = {
  "v2x_msg::msg",
  "PSM",
  _PSM__cdr_serialize,
  _PSM__cdr_deserialize,
  _PSM__get_serialized_size,
  _PSM__max_serialized_size
};

static rosidl_message_type_support_t _PSM__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PSM,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PSM)() {
  return &_PSM__type_support;
}

#if defined(__cplusplus)
}
#endif
