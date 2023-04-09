// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleStatusRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/vehicle_status_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStatusRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: datatype
  {
    out << "datatype: ";
    rosidl_generator_traits::value_to_yaml(msg.datatype, out);
    out << ", ";
  }

  // member: subtype
  {
    out << "subtype: ";
    rosidl_generator_traits::value_to_yaml(msg.subtype, out);
    out << ", ";
  }

  // member: sendonlessthenvalue
  {
    out << "sendonlessthenvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.sendonlessthenvalue, out);
    out << ", ";
  }

  // member: sendonmorethenvalue
  {
    out << "sendonmorethenvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.sendonmorethenvalue, out);
    out << ", ";
  }

  // member: sendall
  {
    out << "sendall: ";
    rosidl_generator_traits::value_to_yaml(msg.sendall, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStatusRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: datatype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datatype: ";
    rosidl_generator_traits::value_to_yaml(msg.datatype, out);
    out << "\n";
  }

  // member: subtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subtype: ";
    rosidl_generator_traits::value_to_yaml(msg.subtype, out);
    out << "\n";
  }

  // member: sendonlessthenvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sendonlessthenvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.sendonlessthenvalue, out);
    out << "\n";
  }

  // member: sendonmorethenvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sendonmorethenvalue: ";
    rosidl_generator_traits::value_to_yaml(msg.sendonmorethenvalue, out);
    out << "\n";
  }

  // member: sendall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sendall: ";
    rosidl_generator_traits::value_to_yaml(msg.sendall, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStatusRequest & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::VehicleStatusRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::VehicleStatusRequest & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleStatusRequest>()
{
  return "v2x_msg::msg::VehicleStatusRequest";
}

template<>
inline const char * name<v2x_msg::msg::VehicleStatusRequest>()
{
  return "v2x_msg/msg/VehicleStatusRequest";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleStatusRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleStatusRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::VehicleStatusRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__TRAITS_HPP_
