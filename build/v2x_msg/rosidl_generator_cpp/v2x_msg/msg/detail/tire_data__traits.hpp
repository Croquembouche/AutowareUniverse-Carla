// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TireData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIRE_DATA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TIRE_DATA__TRAITS_HPP_

#include "v2x_msg/msg/detail/tire_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::TireData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    value_to_yaml(msg.location, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: wheelsensorstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelsensorstatus: ";
    value_to_yaml(msg.wheelsensorstatus, out);
    out << "\n";
  }

  // member: wheelendelectfault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelendelectfault: ";
    value_to_yaml(msg.wheelendelectfault, out);
    out << "\n";
  }

  // member: leakagerate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "leakagerate: ";
    value_to_yaml(msg.leakagerate, out);
    out << "\n";
  }

  // member: detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection: ";
    value_to_yaml(msg.detection, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::TireData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::TireData>()
{
  return "v2x_msg::msg::TireData";
}

template<>
inline const char * name<v2x_msg::msg::TireData>()
{
  return "v2x_msg/msg/TireData";
}

template<>
struct has_fixed_size<v2x_msg::msg::TireData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::TireData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::TireData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TIRE_DATA__TRAITS_HPP_
