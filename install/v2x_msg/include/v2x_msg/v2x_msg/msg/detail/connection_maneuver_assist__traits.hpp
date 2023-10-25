// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/connection_maneuver_assist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConnectionManeuverAssist & msg,
  std::ostream & out)
{
  out << "{";
  // member: connectionid
  {
    out << "connectionid: ";
    rosidl_generator_traits::value_to_yaml(msg.connectionid, out);
    out << ", ";
  }

  // member: queuelength
  {
    out << "queuelength: ";
    rosidl_generator_traits::value_to_yaml(msg.queuelength, out);
    out << ", ";
  }

  // member: availablestoragelength
  {
    out << "availablestoragelength: ";
    rosidl_generator_traits::value_to_yaml(msg.availablestoragelength, out);
    out << ", ";
  }

  // member: waitonstop
  {
    out << "waitonstop: ";
    rosidl_generator_traits::value_to_yaml(msg.waitonstop, out);
    out << ", ";
  }

  // member: pedbicycledetect
  {
    out << "pedbicycledetect: ";
    rosidl_generator_traits::value_to_yaml(msg.pedbicycledetect, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectionManeuverAssist & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connectionid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connectionid: ";
    rosidl_generator_traits::value_to_yaml(msg.connectionid, out);
    out << "\n";
  }

  // member: queuelength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "queuelength: ";
    rosidl_generator_traits::value_to_yaml(msg.queuelength, out);
    out << "\n";
  }

  // member: availablestoragelength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "availablestoragelength: ";
    rosidl_generator_traits::value_to_yaml(msg.availablestoragelength, out);
    out << "\n";
  }

  // member: waitonstop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waitonstop: ";
    rosidl_generator_traits::value_to_yaml(msg.waitonstop, out);
    out << "\n";
  }

  // member: pedbicycledetect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedbicycledetect: ";
    rosidl_generator_traits::value_to_yaml(msg.pedbicycledetect, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectionManeuverAssist & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::ConnectionManeuverAssist & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::ConnectionManeuverAssist & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::ConnectionManeuverAssist>()
{
  return "v2x_msg::msg::ConnectionManeuverAssist";
}

template<>
inline const char * name<v2x_msg::msg::ConnectionManeuverAssist>()
{
  return "v2x_msg/msg/ConnectionManeuverAssist";
}

template<>
struct has_fixed_size<v2x_msg::msg::ConnectionManeuverAssist>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::ConnectionManeuverAssist>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::ConnectionManeuverAssist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__TRAITS_HPP_
