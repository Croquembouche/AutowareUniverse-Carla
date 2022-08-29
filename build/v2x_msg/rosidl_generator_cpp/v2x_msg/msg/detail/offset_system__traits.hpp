// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/OffsetSystem.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__TRAITS_HPP_

#include "v2x_msg/msg/detail/offset_system__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'offset'
#include "v2x_msg/msg/detail/offset__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::OffsetSystem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    value_to_yaml(msg.scale, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset:\n";
    to_yaml(msg.offset, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::OffsetSystem & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::OffsetSystem>()
{
  return "v2x_msg::msg::OffsetSystem";
}

template<>
inline const char * name<v2x_msg::msg::OffsetSystem>()
{
  return "v2x_msg/msg/OffsetSystem";
}

template<>
struct has_fixed_size<v2x_msg::msg::OffsetSystem>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::Offset>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::OffsetSystem>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::Offset>::value> {};

template<>
struct is_message<v2x_msg::msg::OffsetSystem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__OFFSET_SYSTEM__TRAITS_HPP_
