// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleStatusRequest.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS_REQUEST__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_status_request__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleStatusRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: datatype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "datatype: ";
    value_to_yaml(msg.datatype, out);
    out << "\n";
  }

  // member: subtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subtype: ";
    value_to_yaml(msg.subtype, out);
    out << "\n";
  }

  // member: sendonlessthenvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sendonlessthenvalue: ";
    value_to_yaml(msg.sendonlessthenvalue, out);
    out << "\n";
  }

  // member: sendonmorethenvalue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sendonmorethenvalue: ";
    value_to_yaml(msg.sendonmorethenvalue, out);
    out << "\n";
  }

  // member: sendall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sendall: ";
    value_to_yaml(msg.sendall, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleStatusRequest & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
