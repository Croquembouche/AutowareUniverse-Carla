// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/propelled_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const PropelledInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: human
  {
    out << "human: ";
    rosidl_generator_traits::value_to_yaml(msg.human, out);
    out << ", ";
  }

  // member: animal
  {
    out << "animal: ";
    rosidl_generator_traits::value_to_yaml(msg.animal, out);
    out << ", ";
  }

  // member: motor
  {
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PropelledInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: human
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human: ";
    rosidl_generator_traits::value_to_yaml(msg.human, out);
    out << "\n";
  }

  // member: animal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "animal: ";
    rosidl_generator_traits::value_to_yaml(msg.animal, out);
    out << "\n";
  }

  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor: ";
    rosidl_generator_traits::value_to_yaml(msg.motor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PropelledInformation & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::PropelledInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::PropelledInformation & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::PropelledInformation>()
{
  return "v2x_msg::msg::PropelledInformation";
}

template<>
inline const char * name<v2x_msg::msg::PropelledInformation>()
{
  return "v2x_msg/msg/PropelledInformation";
}

template<>
struct has_fixed_size<v2x_msg::msg::PropelledInformation>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::PropelledInformation>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::PropelledInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_
