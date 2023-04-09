// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/MovementEvent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/movement_event__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace v2x_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MovementEvent_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::MovementEvent(_init);
}

void MovementEvent_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::MovementEvent *>(message_memory);
  typed_message->~MovementEvent();
}

size_t size_function__MovementEvent__speeds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::AdvisorySpeed> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MovementEvent__speeds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::AdvisorySpeed> *>(untyped_member);
  return &member[index];
}

void * get_function__MovementEvent__speeds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::AdvisorySpeed> *>(untyped_member);
  return &member[index];
}

void fetch_function__MovementEvent__speeds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::AdvisorySpeed *>(
    get_const_function__MovementEvent__speeds(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::AdvisorySpeed *>(untyped_value);
  value = item;
}

void assign_function__MovementEvent__speeds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::AdvisorySpeed *>(
    get_function__MovementEvent__speeds(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::AdvisorySpeed *>(untyped_value);
  item = value;
}

void resize_function__MovementEvent__speeds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::AdvisorySpeed> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MovementEvent_message_member_array[3] = {
  {
    "movementphasestate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MovementEvent, movementphasestate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timing",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::TimeChangeDetails>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MovementEvent, timing),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speeds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::AdvisorySpeed>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::MovementEvent, speeds),  // bytes offset in struct
    nullptr,  // default value
    size_function__MovementEvent__speeds,  // size() function pointer
    get_const_function__MovementEvent__speeds,  // get_const(index) function pointer
    get_function__MovementEvent__speeds,  // get(index) function pointer
    fetch_function__MovementEvent__speeds,  // fetch(index, &value) function pointer
    assign_function__MovementEvent__speeds,  // assign(index, value) function pointer
    resize_function__MovementEvent__speeds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MovementEvent_message_members = {
  "v2x_msg::msg",  // message namespace
  "MovementEvent",  // message name
  3,  // number of fields
  sizeof(v2x_msg::msg::MovementEvent),
  MovementEvent_message_member_array,  // message members
  MovementEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  MovementEvent_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MovementEvent_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MovementEvent_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace v2x_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_msg::msg::MovementEvent>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::MovementEvent_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, MovementEvent)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::MovementEvent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
