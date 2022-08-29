// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'bumpers'
#include "v2x_msg/msg/detail/bumper_heights__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: bumpers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bumpers:\n";
    to_yaml(msg.bumpers, out, indentation + 2);
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass: ";
    value_to_yaml(msg.mass, out);
    out << "\n";
  }

  // member: trailerweight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trailerweight: ";
    value_to_yaml(msg.trailerweight, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
