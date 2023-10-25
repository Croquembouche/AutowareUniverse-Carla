// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/EVA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EVA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__EVA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/eva__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'rsamsg'
#include "v2x_msg/msg/detail/rsa__traits.hpp"
// Member 'details'
#include "v2x_msg/msg/detail/emergency_details__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const EVA & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: rsamsg
  {
    out << "rsamsg: ";
    to_flow_style_yaml(msg.rsamsg, out);
    out << ", ";
  }

  // member: responsetype
  {
    out << "responsetype: ";
    rosidl_generator_traits::value_to_yaml(msg.responsetype, out);
    out << ", ";
  }

  // member: details
  {
    out << "details: ";
    to_flow_style_yaml(msg.details, out);
    out << ", ";
  }

  // member: mass
  {
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << ", ";
  }

  // member: basictype
  {
    out << "basictype: ";
    rosidl_generator_traits::value_to_yaml(msg.basictype, out);
    out << ", ";
  }

  // member: vehicletype
  {
    out << "vehicletype: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicletype, out);
    out << ", ";
  }

  // member: responseequip
  {
    out << "responseequip: ";
    rosidl_generator_traits::value_to_yaml(msg.responseequip, out);
    out << ", ";
  }

  // member: respondertype
  {
    out << "respondertype: ";
    rosidl_generator_traits::value_to_yaml(msg.respondertype, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EVA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: rsamsg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsamsg:\n";
    to_block_style_yaml(msg.rsamsg, out, indentation + 2);
  }

  // member: responsetype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responsetype: ";
    rosidl_generator_traits::value_to_yaml(msg.responsetype, out);
    out << "\n";
  }

  // member: details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "details:\n";
    to_block_style_yaml(msg.details, out, indentation + 2);
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: basictype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basictype: ";
    rosidl_generator_traits::value_to_yaml(msg.basictype, out);
    out << "\n";
  }

  // member: vehicletype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicletype: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicletype, out);
    out << "\n";
  }

  // member: responseequip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responseequip: ";
    rosidl_generator_traits::value_to_yaml(msg.responseequip, out);
    out << "\n";
  }

  // member: respondertype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respondertype: ";
    rosidl_generator_traits::value_to_yaml(msg.respondertype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EVA & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::EVA & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::EVA & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::EVA>()
{
  return "v2x_msg::msg::EVA";
}

template<>
inline const char * name<v2x_msg::msg::EVA>()
{
  return "v2x_msg/msg/EVA";
}

template<>
struct has_fixed_size<v2x_msg::msg::EVA>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::EVA>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::EVA>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__EVA__TRAITS_HPP_
