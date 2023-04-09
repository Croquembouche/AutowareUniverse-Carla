// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_msg/msg/detail/restriction_class_assignment__struct.hpp"
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

void RestrictionClassAssignment_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) v2x_msg::msg::RestrictionClassAssignment(_init);
}

void RestrictionClassAssignment_fini_function(void * message_memory)
{
  auto typed_message = static_cast<v2x_msg::msg::RestrictionClassAssignment *>(message_memory);
  typed_message->~RestrictionClassAssignment();
}

size_t size_function__RestrictionClassAssignment__users(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<v2x_msg::msg::RestrictionUserType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RestrictionClassAssignment__users(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<v2x_msg::msg::RestrictionUserType> *>(untyped_member);
  return &member[index];
}

void * get_function__RestrictionClassAssignment__users(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<v2x_msg::msg::RestrictionUserType> *>(untyped_member);
  return &member[index];
}

void fetch_function__RestrictionClassAssignment__users(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const v2x_msg::msg::RestrictionUserType *>(
    get_const_function__RestrictionClassAssignment__users(untyped_member, index));
  auto & value = *reinterpret_cast<v2x_msg::msg::RestrictionUserType *>(untyped_value);
  value = item;
}

void assign_function__RestrictionClassAssignment__users(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<v2x_msg::msg::RestrictionUserType *>(
    get_function__RestrictionClassAssignment__users(untyped_member, index));
  const auto & value = *reinterpret_cast<const v2x_msg::msg::RestrictionUserType *>(untyped_value);
  item = value;
}

void resize_function__RestrictionClassAssignment__users(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<v2x_msg::msg::RestrictionUserType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RestrictionClassAssignment_message_member_array[2] = {
  {
    "restrictionclassid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RestrictionClassAssignment, restrictionclassid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "users",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<v2x_msg::msg::RestrictionUserType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg::msg::RestrictionClassAssignment, users),  // bytes offset in struct
    nullptr,  // default value
    size_function__RestrictionClassAssignment__users,  // size() function pointer
    get_const_function__RestrictionClassAssignment__users,  // get_const(index) function pointer
    get_function__RestrictionClassAssignment__users,  // get(index) function pointer
    fetch_function__RestrictionClassAssignment__users,  // fetch(index, &value) function pointer
    assign_function__RestrictionClassAssignment__users,  // assign(index, value) function pointer
    resize_function__RestrictionClassAssignment__users  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RestrictionClassAssignment_message_members = {
  "v2x_msg::msg",  // message namespace
  "RestrictionClassAssignment",  // message name
  2,  // number of fields
  sizeof(v2x_msg::msg::RestrictionClassAssignment),
  RestrictionClassAssignment_message_member_array,  // message members
  RestrictionClassAssignment_init_function,  // function to initialize message memory (memory has to be allocated)
  RestrictionClassAssignment_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RestrictionClassAssignment_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RestrictionClassAssignment_message_members,
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
get_message_type_support_handle<v2x_msg::msg::RestrictionClassAssignment>()
{
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RestrictionClassAssignment_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_msg, msg, RestrictionClassAssignment)() {
  return &::v2x_msg::msg::rosidl_typesupport_introspection_cpp::RestrictionClassAssignment_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
