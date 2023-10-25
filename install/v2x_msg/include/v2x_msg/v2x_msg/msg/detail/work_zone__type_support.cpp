// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/WorkZone.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/work_zone__struct.hpp"
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

void WorkZone_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::WorkZone(_init);
}

void WorkZone_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::WorkZone *>(message_memory);
  typed_message->~WorkZone();
}

size_t size_function__WorkZone__item(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::WorkZonecontent> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WorkZone__item(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::WorkZonecontent> *>(untyped_member);
  return &member[index];
}

void * get_function__WorkZone__item(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::WorkZonecontent> *>(untyped_member);
  return &member[index];
}

void fetch_function__WorkZone__item(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::WorkZonecontent *>(
    get_const_function__WorkZone__item(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::WorkZonecontent *>(untyped_value);
  value = item;
}

void assign_function__WorkZone__item(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::WorkZonecontent *>(
    get_function__WorkZone__item(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::WorkZonecontent *>(untyped_value);
  item = value;
}

void resize_function__WorkZone__item(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::WorkZonecontent> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WorkZone_message_member_array[1] = {
  {
    "item",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::WorkZonecontent>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::WorkZone, item),  // bytes offset in struct
    nullptr,  // default value
    size_function__WorkZone__item,  // size() function pointer
    get_const_function__WorkZone__item,  // get_const(index) function pointer
    get_function__WorkZone__item,  // get(index) function pointer
    fetch_function__WorkZone__item,  // fetch(index, &value) function pointer
    assign_function__WorkZone__item,  // assign(index, value) function pointer
    resize_function__WorkZone__item  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WorkZone_message_members = {
  "v2x_msg::msg",  // message namespace
  "WorkZone",  // message name
  1,  // number of fields
  sizeof(v2x_msg::msg::WorkZone),
  WorkZone_message_member_array,  // message members
  WorkZone_init_function,  // function to initialize message memory (memory has to be allocated)
  WorkZone_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WorkZone_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WorkZone_message_members,
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
get_message_type_support_handle<v2x_msg::msg::WorkZone>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::WorkZone_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, WorkZone)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::WorkZone_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
