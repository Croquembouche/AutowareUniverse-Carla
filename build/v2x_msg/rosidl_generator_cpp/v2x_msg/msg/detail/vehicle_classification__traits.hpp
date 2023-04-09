// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/vehicle_classification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleClassification & msg,
  std::ostream & out)
{
  out << "{";
  // member: keytype
  {
    out << "keytype: ";
    rosidl_generator_traits::value_to_yaml(msg.keytype, out);
    out << ", ";
  }

  // member: role
  {
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
    out << ", ";
  }

  // member: iso3883
  {
    out << "iso3883: ";
    rosidl_generator_traits::value_to_yaml(msg.iso3883, out);
    out << ", ";
  }

  // member: hpmstype
  {
    out << "hpmstype: ";
    rosidl_generator_traits::value_to_yaml(msg.hpmstype, out);
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
    out << ", ";
  }

  // member: fueltype
  {
    out << "fueltype: ";
    rosidl_generator_traits::value_to_yaml(msg.fueltype, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: keytype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "keytype: ";
    rosidl_generator_traits::value_to_yaml(msg.keytype, out);
    out << "\n";
  }

  // member: role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role: ";
    rosidl_generator_traits::value_to_yaml(msg.role, out);
    out << "\n";
  }

  // member: iso3883
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iso3883: ";
    rosidl_generator_traits::value_to_yaml(msg.iso3883, out);
    out << "\n";
  }

  // member: hpmstype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpmstype: ";
    rosidl_generator_traits::value_to_yaml(msg.hpmstype, out);
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

  // member: fueltype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fueltype: ";
    rosidl_generator_traits::value_to_yaml(msg.fueltype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleClassification & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::VehicleClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::VehicleClassification & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleClassification>()
{
  return "v2x_msg::msg::VehicleClassification";
}

template<>
inline const char * name<v2x_msg::msg::VehicleClassification>()
{
  return "v2x_msg/msg/VehicleClassification";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleClassification>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleClassification>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::VehicleClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
