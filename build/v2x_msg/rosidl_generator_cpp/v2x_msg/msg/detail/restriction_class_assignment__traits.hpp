// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/restriction_class_assignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'users'
#include "v2x_msg/msg/detail/restriction_user_type__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RestrictionClassAssignment & msg,
  std::ostream & out)
{
  out << "{";
  // member: restrictionclassid
  {
    out << "restrictionclassid: ";
    rosidl_generator_traits::value_to_yaml(msg.restrictionclassid, out);
    out << ", ";
  }

  // member: users
  {
    if (msg.users.size() == 0) {
      out << "users: []";
    } else {
      out << "users: [";
      size_t pending_items = msg.users.size();
      for (auto item : msg.users) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RestrictionClassAssignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: restrictionclassid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restrictionclassid: ";
    rosidl_generator_traits::value_to_yaml(msg.restrictionclassid, out);
    out << "\n";
  }

  // member: users
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.users.size() == 0) {
      out << "users: []\n";
    } else {
      out << "users:\n";
      for (auto item : msg.users) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RestrictionClassAssignment & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace v2x_msg

namespace rosidl_generator_traits
{

[[deprecated("use v2x_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_msg::msg::RestrictionClassAssignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::RestrictionClassAssignment & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::RestrictionClassAssignment>()
{
  return "v2x_msg::msg::RestrictionClassAssignment";
}

template<>
inline const char * name<v2x_msg::msg::RestrictionClassAssignment>()
{
  return "v2x_msg/msg/RestrictionClassAssignment";
}

template<>
struct has_fixed_size<v2x_msg::msg::RestrictionClassAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::RestrictionClassAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::RestrictionClassAssignment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__TRAITS_HPP_
