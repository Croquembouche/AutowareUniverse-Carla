// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/EVA.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__EVA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__EVA__TRAITS_HPP_

#include "v2x_msg/msg/detail/eva__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'rsamsg'
#include "v2x_msg/msg/detail/rsa__traits.hpp"
// Member 'details'
#include "v2x_msg/msg/detail/emergency_details__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::EVA & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: rsamsg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rsamsg:\n";
    to_yaml(msg.rsamsg, out, indentation + 2);
  }

  // member: responsetype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responsetype: ";
    value_to_yaml(msg.responsetype, out);
    out << "\n";
  }

  // member: details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "details:\n";
    to_yaml(msg.details, out, indentation + 2);
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: basictype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basictype: ";
    value_to_yaml(msg.basictype, out);
    out << "\n";
  }

  // member: vehicletype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicletype: ";
    value_to_yaml(msg.vehicletype, out);
    out << "\n";
  }

  // member: responseequip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responseequip: ";
    value_to_yaml(msg.responseequip, out);
    out << "\n";
  }

  // member: respondertype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "respondertype: ";
    value_to_yaml(msg.respondertype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::EVA & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
