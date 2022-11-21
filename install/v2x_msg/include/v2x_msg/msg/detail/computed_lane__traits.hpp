// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_

#include "v2x_msg/msg/detail/computed_lane__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'offsetxaxis'
#include "v2x_msg/msg/detail/offset_xaxis__traits.hpp"
// Member 'offsetyaxis'
#include "v2x_msg/msg/detail/offset_yaxis__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ComputedLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: referencelaneid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "referencelaneid: ";
    value_to_yaml(msg.referencelaneid, out);
    out << "\n";
  }

  // member: offsetxaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offsetxaxis:\n";
    to_yaml(msg.offsetxaxis, out, indentation + 2);
  }

  // member: offsetyaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offsetyaxis:\n";
    to_yaml(msg.offsetyaxis, out, indentation + 2);
  }

  // member: rotatexy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotatexy: ";
    value_to_yaml(msg.rotatexy, out);
    out << "\n";
  }

  // member: scalexaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scalexaxis: ";
    value_to_yaml(msg.scalexaxis, out);
    out << "\n";
  }

  // member: scaleyaxis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scaleyaxis: ";
    value_to_yaml(msg.scaleyaxis, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ComputedLane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ComputedLane>()
{
  return "v2x_msg::msg::ComputedLane";
}

template<>
inline const char * name<v2x_msg::msg::ComputedLane>()
{
  return "v2x_msg/msg/ComputedLane";
}

template<>
struct has_fixed_size<v2x_msg::msg::ComputedLane>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::OffsetXaxis>::value && has_fixed_size<v2x_msg::msg::OffsetYaxis>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::ComputedLane>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::OffsetXaxis>::value && has_bounded_size<v2x_msg::msg::OffsetYaxis>::value> {};

template<>
struct is_message<v2x_msg::msg::ComputedLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__COMPUTED_LANE__TRAITS_HPP_
