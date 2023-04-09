// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/intersection_status_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionStatusObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: manualcontrolisenabled
  {
    out << "manualcontrolisenabled: ";
    rosidl_generator_traits::value_to_yaml(msg.manualcontrolisenabled, out);
    out << ", ";
  }

  // member: stoptimeisactivated
  {
    out << "stoptimeisactivated: ";
    rosidl_generator_traits::value_to_yaml(msg.stoptimeisactivated, out);
    out << ", ";
  }

  // member: failureflash
  {
    out << "failureflash: ";
    rosidl_generator_traits::value_to_yaml(msg.failureflash, out);
    out << ", ";
  }

  // member: preemptisactive
  {
    out << "preemptisactive: ";
    rosidl_generator_traits::value_to_yaml(msg.preemptisactive, out);
    out << ", ";
  }

  // member: signalpriorityisactive
  {
    out << "signalpriorityisactive: ";
    rosidl_generator_traits::value_to_yaml(msg.signalpriorityisactive, out);
    out << ", ";
  }

  // member: fixedtimeoperation
  {
    out << "fixedtimeoperation: ";
    rosidl_generator_traits::value_to_yaml(msg.fixedtimeoperation, out);
    out << ", ";
  }

  // member: trafficdependentoperation
  {
    out << "trafficdependentoperation: ";
    rosidl_generator_traits::value_to_yaml(msg.trafficdependentoperation, out);
    out << ", ";
  }

  // member: standbyoperation
  {
    out << "standbyoperation: ";
    rosidl_generator_traits::value_to_yaml(msg.standbyoperation, out);
    out << ", ";
  }

  // member: failuremode
  {
    out << "failuremode: ";
    rosidl_generator_traits::value_to_yaml(msg.failuremode, out);
    out << ", ";
  }

  // member: off
  {
    out << "off: ";
    rosidl_generator_traits::value_to_yaml(msg.off, out);
    out << ", ";
  }

  // member: recentmapmessageupdate
  {
    out << "recentmapmessageupdate: ";
    rosidl_generator_traits::value_to_yaml(msg.recentmapmessageupdate, out);
    out << ", ";
  }

  // member: recentchangeinmapassignedlanesidsused
  {
    out << "recentchangeinmapassignedlanesidsused: ";
    rosidl_generator_traits::value_to_yaml(msg.recentchangeinmapassignedlanesidsused, out);
    out << ", ";
  }

  // member: novalidmapisabilableatthistime
  {
    out << "novalidmapisabilableatthistime: ";
    rosidl_generator_traits::value_to_yaml(msg.novalidmapisabilableatthistime, out);
    out << ", ";
  }

  // member: nobalidspatisabilableatthistime
  {
    out << "nobalidspatisabilableatthistime: ";
    rosidl_generator_traits::value_to_yaml(msg.nobalidspatisabilableatthistime, out);
    out << ", ";
  }

  // member: reserve14
  {
    out << "reserve14: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve14, out);
    out << ", ";
  }

  // member: reserve15
  {
    out << "reserve15: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve15, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntersectionStatusObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: manualcontrolisenabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manualcontrolisenabled: ";
    rosidl_generator_traits::value_to_yaml(msg.manualcontrolisenabled, out);
    out << "\n";
  }

  // member: stoptimeisactivated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stoptimeisactivated: ";
    rosidl_generator_traits::value_to_yaml(msg.stoptimeisactivated, out);
    out << "\n";
  }

  // member: failureflash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failureflash: ";
    rosidl_generator_traits::value_to_yaml(msg.failureflash, out);
    out << "\n";
  }

  // member: preemptisactive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preemptisactive: ";
    rosidl_generator_traits::value_to_yaml(msg.preemptisactive, out);
    out << "\n";
  }

  // member: signalpriorityisactive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signalpriorityisactive: ";
    rosidl_generator_traits::value_to_yaml(msg.signalpriorityisactive, out);
    out << "\n";
  }

  // member: fixedtimeoperation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixedtimeoperation: ";
    rosidl_generator_traits::value_to_yaml(msg.fixedtimeoperation, out);
    out << "\n";
  }

  // member: trafficdependentoperation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trafficdependentoperation: ";
    rosidl_generator_traits::value_to_yaml(msg.trafficdependentoperation, out);
    out << "\n";
  }

  // member: standbyoperation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standbyoperation: ";
    rosidl_generator_traits::value_to_yaml(msg.standbyoperation, out);
    out << "\n";
  }

  // member: failuremode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failuremode: ";
    rosidl_generator_traits::value_to_yaml(msg.failuremode, out);
    out << "\n";
  }

  // member: off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "off: ";
    rosidl_generator_traits::value_to_yaml(msg.off, out);
    out << "\n";
  }

  // member: recentmapmessageupdate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recentmapmessageupdate: ";
    rosidl_generator_traits::value_to_yaml(msg.recentmapmessageupdate, out);
    out << "\n";
  }

  // member: recentchangeinmapassignedlanesidsused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recentchangeinmapassignedlanesidsused: ";
    rosidl_generator_traits::value_to_yaml(msg.recentchangeinmapassignedlanesidsused, out);
    out << "\n";
  }

  // member: novalidmapisabilableatthistime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "novalidmapisabilableatthistime: ";
    rosidl_generator_traits::value_to_yaml(msg.novalidmapisabilableatthistime, out);
    out << "\n";
  }

  // member: nobalidspatisabilableatthistime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nobalidspatisabilableatthistime: ";
    rosidl_generator_traits::value_to_yaml(msg.nobalidspatisabilableatthistime, out);
    out << "\n";
  }

  // member: reserve14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve14: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve14, out);
    out << "\n";
  }

  // member: reserve15
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve15: ";
    rosidl_generator_traits::value_to_yaml(msg.reserve15, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionStatusObject & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::IntersectionStatusObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::IntersectionStatusObject & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::IntersectionStatusObject>()
{
  return "v2x_msg::msg::IntersectionStatusObject";
}

template<>
inline const char * name<v2x_msg::msg::IntersectionStatusObject>()
{
  return "v2x_msg/msg/IntersectionStatusObject";
}

template<>
struct has_fixed_size<v2x_msg::msg::IntersectionStatusObject>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::IntersectionStatusObject>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::IntersectionStatusObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__TRAITS_HPP_
