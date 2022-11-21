// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_

#include "v2x_msg/msg/detail/bsm_core_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__traits.hpp"
// Member 'accelset'
#include "v2x_msg/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'brakes'
#include "v2x_msg/msg/detail/brake_system_status__traits.hpp"
// Member 'size'
#include "v2x_msg/msg/detail/vehicle_size__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::BSMCoreData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msgcnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgcnt: ";
    value_to_yaml(msg.msgcnt, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: secmark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secmark: ";
    value_to_yaml(msg.secmark, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: elev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elev: ";
    value_to_yaml(msg.elev, out);
    out << "\n";
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: transmission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission: ";
    value_to_yaml(msg.transmission, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: accelset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelset:\n";
    to_yaml(msg.accelset, out, indentation + 2);
  }

  // member: brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brakes:\n";
    to_yaml(msg.brakes, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_yaml(msg.size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::BSMCoreData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::BSMCoreData>()
{
  return "v2x_msg::msg::BSMCoreData";
}

template<>
inline const char * name<v2x_msg::msg::BSMCoreData>()
{
  return "v2x_msg/msg/BSMCoreData";
}

template<>
struct has_fixed_size<v2x_msg::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::BSMCoreData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
