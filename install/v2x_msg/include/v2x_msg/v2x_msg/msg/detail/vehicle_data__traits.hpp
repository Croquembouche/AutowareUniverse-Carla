// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/vehicle_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'bumpers'
#include "v2x_msg/msg/detail/bumper_heights__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleData & msg,
  std::ostream & out)
{
  out << "{";
  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: bumpers
  {
    out << "bumpers: ";
    to_flow_style_yaml(msg.bumpers, out);
    out << ", ";
  }

  // member: mass
  {
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << ", ";
  }

  // member: trailerweight
  {
    out << "trailerweight: ";
    rosidl_generator_traits::value_to_yaml(msg.trailerweight, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: bumpers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bumpers:\n";
    to_block_style_yaml(msg.bumpers, out, indentation + 2);
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    rosidl_generator_traits::value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: trailerweight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trailerweight: ";
    rosidl_generator_traits::value_to_yaml(msg.trailerweight, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleData & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::VehicleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::VehicleData & msg)
{
  return v2x_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleData>()
{
  return "v2x_msg::msg::VehicleData";
}

template<>
inline const char * name<v2x_msg::msg::VehicleData>()
{
  return "v2x_msg/msg/VehicleData";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleData>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::BumperHeights>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleData>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::BumperHeights>::value> {};

template<>
struct is_message<v2x_msg::msg::VehicleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
