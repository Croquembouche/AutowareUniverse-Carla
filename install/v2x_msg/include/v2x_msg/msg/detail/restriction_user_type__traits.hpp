// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__RESTRICTION_USER_TYPE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__RESTRICTION_USER_TYPE__TRAITS_HPP_

#include "v2x_msg/msg/detail/restriction_user_type__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RestrictionUserType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: basictype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basictype: ";
    value_to_yaml(msg.basictype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RestrictionUserType & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::RestrictionUserType>()
{
  return "v2x_msg::msg::RestrictionUserType";
}

template<>
inline const char * name<v2x_msg::msg::RestrictionUserType>()
{
  return "v2x_msg/msg/RestrictionUserType";
}

template<>
struct has_fixed_size<v2x_msg::msg::RestrictionUserType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::RestrictionUserType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::RestrictionUserType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__RESTRICTION_USER_TYPE__TRAITS_HPP_
