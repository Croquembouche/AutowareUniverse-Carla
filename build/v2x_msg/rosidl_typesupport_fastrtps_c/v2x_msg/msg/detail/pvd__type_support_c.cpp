// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_msg:msg/PVD.idl
// generated code does not contain a copyright notice
#include "v2x_msg/msg/detail/pvd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_msg/msg/detail/pvd__struct.h"
#include "v2x_msg/msg/detail/pvd__functions.h"
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

#include "v2x_msg/msg/detail/full_position_vector__functions.h"  // startvector
#include "v2x_msg/msg/detail/snapshot__functions.h"  // snapshots
#include "v2x_msg/msg/detail/vehicle_classification__functions.h"  // vehicletype
#include "v2x_msg/msg/detail/vehicle_ident__functions.h"  // probeid

// forward declare type support functions
size_t get_serialized_size_v2x_msg__msg__FullPositionVector(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__FullPositionVector(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector)();
size_t get_serialized_size_v2x_msg__msg__Snapshot(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__Snapshot(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, Snapshot)();
size_t get_serialized_size_v2x_msg__msg__VehicleClassification(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__VehicleClassification(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleClassification)();
size_t get_serialized_size_v2x_msg__msg__VehicleIdent(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_msg__msg__VehicleIdent(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleIdent)();


using _PVD__ros_msg_type = v2x_msg__msg__PVD;

static bool _PVD__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PVD__ros_msg_type * ros_message = static_cast<const _PVD__ros_msg_type *>(untyped_ros_message);
  // Field name: timstamp
  {
    cdr << ros_message->timstamp;
  }

  // Field name: segnum
  {
    cdr << ros_message->segnum;
  }

  // Field name: probeid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleIdent
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->probeid, cdr))
    {
      return false;
    }
  }

  // Field name: startvector
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->startvector, cdr))
    {
      return false;
    }
  }

  // Field name: vehicletype
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleClassification
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->vehicletype, cdr))
    {
      return false;
    }
  }

  // Field name: snapshots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Snapshot
      )()->data);
    size_t size = ros_message->snapshots.size;
    auto array_ptr = ros_message->snapshots.data;
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

static bool _PVD__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PVD__ros_msg_type * ros_message = static_cast<_PVD__ros_msg_type *>(untyped_ros_message);
  // Field name: timstamp
  {
    cdr >> ros_message->timstamp;
  }

  // Field name: segnum
  {
    cdr >> ros_message->segnum;
  }

  // Field name: probeid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleIdent
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->probeid))
    {
      return false;
    }
  }

  // Field name: startvector
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, FullPositionVector
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->startvector))
    {
      return false;
    }
  }

  // Field name: vehicletype
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, VehicleClassification
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->vehicletype))
    {
      return false;
    }
  }

  // Field name: snapshots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, v2x_msg, msg, Snapshot
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->snapshots.data) {
      v2x_msg__msg__Snapshot__Sequence__fini(&ros_message->snapshots);
    }
    if (!v2x_msg__msg__Snapshot__Sequence__init(&ros_message->snapshots, size)) {
      fprintf(stderr, "failed to create array for field 'snapshots'");
      return false;
    }
    auto array_ptr = ros_message->snapshots.data;
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
size_t get_serialized_size_v2x_msg__msg__PVD(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PVD__ros_msg_type * ros_message = static_cast<const _PVD__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timstamp
  {
    size_t item_size = sizeof(ros_message->timstamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name segnum
  {
    size_t item_size = sizeof(ros_message->segnum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name probeid

  current_alignment += get_serialized_size_v2x_msg__msg__VehicleIdent(
    &(ros_message->probeid), current_alignment);
  // field.name startvector

  current_alignment += get_serialized_size_v2x_msg__msg__FullPositionVector(
    &(ros_message->startvector), current_alignment);
  // field.name vehicletype

  current_alignment += get_serialized_size_v2x_msg__msg__VehicleClassification(
    &(ros_message->vehicletype), current_alignment);
  // field.name snapshots
  {
    size_t array_size = ros_message->snapshots.size;
    auto array_ptr = ros_message->snapshots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_msg__msg__Snapshot(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PVD__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_msg__msg__PVD(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_msg
size_t max_serialized_size_v2x_msg__msg__PVD(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timstamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: segnum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: probeid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__VehicleIdent(
        full_bounded, current_alignment);
    }
  }
  // member: startvector
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__FullPositionVector(
        full_bounded, current_alignment);
    }
  }
  // member: vehicletype
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__VehicleClassification(
        full_bounded, current_alignment);
    }
  }
  // member: snapshots
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_v2x_msg__msg__Snapshot(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PVD__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_v2x_msg__msg__PVD(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PVD = {
  "v2x_msg::msg",
  "PVD",
  _PVD__cdr_serialize,
  _PVD__cdr_deserialize,
  _PVD__get_serialized_size,
  _PVD__max_serialized_size
};

static rosidl_message_type_support_t _PVD__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PVD,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_msg, msg, PVD)() {
  return &_PVD__type_support;
}

#if defined(__cplusplus)
}
#endif
