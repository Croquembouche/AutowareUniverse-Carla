// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RequestorPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__TRAITS_HPP_

#include "v2x_msg/msg/detail/requestor_position_vector__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "v2x_msg/msg/detail/position3_d__traits.hpp"
// Member 'speed'
#include "v2x_msg/msg/detail/transmission_and_speed__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RequestorPositionVector & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed:\n";
    to_yaml(msg.speed, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RequestorPositionVector & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::RequestorPositionVector>()
{
  return "v2x_msg::msg::RequestorPositionVector";
}

template<>
inline const char * name<v2x_msg::msg::RequestorPositionVector>()
{
  return "v2x_msg/msg/RequestorPositionVector";
}

template<>
struct has_fixed_size<v2x_msg::msg::RequestorPositionVector>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::Position3D>::value && has_fixed_size<v2x_msg::msg::TransmissionAndSpeed>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::RequestorPositionVector>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::Position3D>::value && has_bounded_size<v2x_msg::msg::TransmissionAndSpeed>::value> {};

template<>
struct is_message<v2x_msg::msg::RequestorPositionVector>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_POSITION_VECTOR__TRAITS_HPP_
