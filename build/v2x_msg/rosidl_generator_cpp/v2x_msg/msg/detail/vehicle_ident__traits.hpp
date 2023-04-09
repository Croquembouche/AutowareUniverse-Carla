// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleIdent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/vehicle_ident__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__traits.hpp"
// Member 'vehicleclass'
#include "v2x_msg/msg/detail/vehicle_class__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleIdent & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: vin
  {
    out << "vin: ";
    rosidl_generator_traits::value_to_yaml(msg.vin, out);
    out << ", ";
  }

  // member: ownercode
  {
    out << "ownercode: ";
    rosidl_generator_traits::value_to_yaml(msg.ownercode, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: vehicletype
  {
    out << "vehicletype: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicletype, out);
    out << ", ";
  }

  // member: vehicleclass
  {
    out << "vehicleclass: ";
    to_flow_style_yaml(msg.vehicleclass, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleIdent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: vin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vin: ";
    rosidl_generator_traits::value_to_yaml(msg.vin, out);
    out << "\n";
  }

  // member: ownercode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ownercode: ";
    rosidl_generator_traits::value_to_yaml(msg.ownercode, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
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

  // member: vehicleclass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicleclass:\n";
    to_block_style_yaml(msg.vehicleclass, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleIdent & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::VehicleIdent & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::VehicleIdent & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleIdent>()
{
  return "v2x_msg::msg::VehicleIdent";
}

template<>
inline const char * name<v2x_msg::msg::VehicleIdent>()
{
  return "v2x_msg/msg/VehicleIdent";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleIdent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleIdent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::VehicleIdent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_IDENT__TRAITS_HPP_
