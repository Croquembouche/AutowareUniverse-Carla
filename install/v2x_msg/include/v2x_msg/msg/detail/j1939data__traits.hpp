// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/J1939data.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__J1939DATA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__J1939DATA__TRAITS_HPP_

#include "v2x_msg/msg/detail/j1939data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'tires'
#include "v2x_msg/msg/detail/tire_data__traits.hpp"
// Member 'axles'
#include "v2x_msg/msg/detail/axle_weight__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::J1939data & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tires
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tires.size() == 0) {
      out << "tires: []\n";
    } else {
      out << "tires:\n";
      for (auto item : msg.tires) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: axles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.axles.size() == 0) {
      out << "axles: []\n";
    } else {
      out << "axles:\n";
      for (auto item : msg.axles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

  // member: cargoweight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cargoweight: ";
    value_to_yaml(msg.cargoweight, out);
    out << "\n";
  }

  // member: steeringaxletemperture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringaxletemperture: ";
    value_to_yaml(msg.steeringaxletemperture, out);
    out << "\n";
  }

  // member: driveaxlelocation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driveaxlelocation: ";
    value_to_yaml(msg.driveaxlelocation, out);
    out << "\n";
  }

  // member: driveaxleliftairpressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driveaxleliftairpressure: ";
    value_to_yaml(msg.driveaxleliftairpressure, out);
    out << "\n";
  }

  // member: driveaxletemperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driveaxletemperature: ";
    value_to_yaml(msg.driveaxletemperature, out);
    out << "\n";
  }

  // member: driveaxlelubpressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driveaxlelubpressure: ";
    value_to_yaml(msg.driveaxlelubpressure, out);
    out << "\n";
  }

  // member: steeringaxlelubepressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steeringaxlelubepressure: ";
    value_to_yaml(msg.steeringaxlelubepressure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::J1939data & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::J1939data>()
{
  return "v2x_msg::msg::J1939data";
}

template<>
inline const char * name<v2x_msg::msg::J1939data>()
{
  return "v2x_msg/msg/J1939data";
}

template<>
struct has_fixed_size<v2x_msg::msg::J1939data>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::J1939data>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::J1939data>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__J1939DATA__TRAITS_HPP_
