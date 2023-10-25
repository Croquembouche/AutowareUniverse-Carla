// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/DataParameters.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/data_parameters__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const DataParameters & msg,
  std::ostream & out)
{
  out << "{";
  // member: processmethod
  {
    out << "processmethod: ";
    rosidl_generator_traits::value_to_yaml(msg.processmethod, out);
    out << ", ";
  }

  // member: processagency
  {
    out << "processagency: ";
    rosidl_generator_traits::value_to_yaml(msg.processagency, out);
    out << ", ";
  }

  // member: lastcheckeddate
  {
    out << "lastcheckeddate: ";
    rosidl_generator_traits::value_to_yaml(msg.lastcheckeddate, out);
    out << ", ";
  }

  // member: geoidused
  {
    out << "geoidused: ";
    rosidl_generator_traits::value_to_yaml(msg.geoidused, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DataParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: processmethod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processmethod: ";
    rosidl_generator_traits::value_to_yaml(msg.processmethod, out);
    out << "\n";
  }

  // member: processagency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "processagency: ";
    rosidl_generator_traits::value_to_yaml(msg.processagency, out);
    out << "\n";
  }

  // member: lastcheckeddate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lastcheckeddate: ";
    rosidl_generator_traits::value_to_yaml(msg.lastcheckeddate, out);
    out << "\n";
  }

  // member: geoidused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geoidused: ";
    rosidl_generator_traits::value_to_yaml(msg.geoidused, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DataParameters & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::DataParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::DataParameters & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::DataParameters>()
{
  return "v2x_msg::msg::DataParameters";
}

template<>
inline const char * name<v2x_msg::msg::DataParameters>()
{
  return "v2x_msg/msg/DataParameters";
}

template<>
struct has_fixed_size<v2x_msg::msg::DataParameters>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::DataParameters>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::DataParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__DATA_PARAMETERS__TRAITS_HPP_
