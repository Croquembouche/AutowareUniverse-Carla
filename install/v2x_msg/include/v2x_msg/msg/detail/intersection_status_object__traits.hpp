// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__TRAITS_HPP_

#include "v2x_msg/msg/detail/intersection_status_object__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::IntersectionStatusObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: manualcontrolisenabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manualcontrolisenabled: ";
    value_to_yaml(msg.manualcontrolisenabled, out);
    out << "\n";
  }

  // member: stoptimeisactivated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stoptimeisactivated: ";
    value_to_yaml(msg.stoptimeisactivated, out);
    out << "\n";
  }

  // member: failureflash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failureflash: ";
    value_to_yaml(msg.failureflash, out);
    out << "\n";
  }

  // member: preemptisactive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preemptisactive: ";
    value_to_yaml(msg.preemptisactive, out);
    out << "\n";
  }

  // member: signalpriorityisactive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signalpriorityisactive: ";
    value_to_yaml(msg.signalpriorityisactive, out);
    out << "\n";
  }

  // member: fixedtimeoperation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixedtimeoperation: ";
    value_to_yaml(msg.fixedtimeoperation, out);
    out << "\n";
  }

  // member: trafficdependentoperation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trafficdependentoperation: ";
    value_to_yaml(msg.trafficdependentoperation, out);
    out << "\n";
  }

  // member: standbyoperation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "standbyoperation: ";
    value_to_yaml(msg.standbyoperation, out);
    out << "\n";
  }

  // member: failuremode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failuremode: ";
    value_to_yaml(msg.failuremode, out);
    out << "\n";
  }

  // member: off
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "off: ";
    value_to_yaml(msg.off, out);
    out << "\n";
  }

  // member: recentmapmessageupdate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recentmapmessageupdate: ";
    value_to_yaml(msg.recentmapmessageupdate, out);
    out << "\n";
  }

  // member: recentchangeinmapassignedlanesidsused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "recentchangeinmapassignedlanesidsused: ";
    value_to_yaml(msg.recentchangeinmapassignedlanesidsused, out);
    out << "\n";
  }

  // member: novalidmapisabilableatthistime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "novalidmapisabilableatthistime: ";
    value_to_yaml(msg.novalidmapisabilableatthistime, out);
    out << "\n";
  }

  // member: nobalidspatisabilableatthistime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nobalidspatisabilableatthistime: ";
    value_to_yaml(msg.nobalidspatisabilableatthistime, out);
    out << "\n";
  }

  // member: reserve14
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve14: ";
    value_to_yaml(msg.reserve14, out);
    out << "\n";
  }

  // member: reserve15
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserve15: ";
    value_to_yaml(msg.reserve15, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::IntersectionStatusObject & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
