// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/VehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_

#include "v2x_msg/msg/detail/vehicle_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'wipers'
#include "v2x_msg/msg/detail/wiper_set__traits.hpp"
// Member 'brakestatus'
#include "v2x_msg/msg/detail/brake_system_status__traits.hpp"
// Member 'steering'
#include "v2x_msg/msg/detail/steering__traits.hpp"
// Member 'accelsets'
#include "v2x_msg/msg/detail/accel_sets__traits.hpp"
// Member 'object'
#include "v2x_msg/msg/detail/object__traits.hpp"
// Member 'fullpos'
#include "v2x_msg/msg/detail/full_position_vector__traits.hpp"
// Member 'speedheadc'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__traits.hpp"
// Member 'vehicledata'
#include "v2x_msg/msg/detail/vehicle_data__traits.hpp"
// Member 'vehicleident'
#include "v2x_msg/msg/detail/vehicle_ident__traits.hpp"
// Member 'j1939data'
#include "v2x_msg/msg/detail/j1939data__traits.hpp"
// Member 'weatherreport'
#include "v2x_msg/msg/detail/weather_report__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::VehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lights: ";
    value_to_yaml(msg.lights, out);
    out << "\n";
  }

  // member: lightbar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lightbar: ";
    value_to_yaml(msg.lightbar, out);
    out << "\n";
  }

  // member: wipers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wipers:\n";
    to_yaml(msg.wipers, out, indentation + 2);
  }

  // member: brakestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brakestatus:\n";
    to_yaml(msg.brakestatus, out, indentation + 2);
  }

  // member: roadfriction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roadfriction: ";
    value_to_yaml(msg.roadfriction, out);
    out << "\n";
  }

  // member: sundata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sundata: ";
    value_to_yaml(msg.sundata, out);
    out << "\n";
  }

  // member: raindata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raindata: ";
    value_to_yaml(msg.raindata, out);
    out << "\n";
  }

  // member: airtemp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airtemp: ";
    value_to_yaml(msg.airtemp, out);
    out << "\n";
  }

  // member: airpres
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airpres: ";
    value_to_yaml(msg.airpres, out);
    out << "\n";
  }

  // member: steering
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering:\n";
    to_yaml(msg.steering, out, indentation + 2);
  }

  // member: accelsets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelsets:\n";
    to_yaml(msg.accelsets, out, indentation + 2);
  }

  // member: object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object:\n";
    to_yaml(msg.object, out, indentation + 2);
  }

  // member: fullpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fullpos:\n";
    to_yaml(msg.fullpos, out, indentation + 2);
  }

  // member: throttlepos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttlepos: ";
    value_to_yaml(msg.throttlepos, out);
    out << "\n";
  }

  // member: speedheadc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speedheadc:\n";
    to_yaml(msg.speedheadc, out, indentation + 2);
  }

  // member: speedc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speedc: ";
    value_to_yaml(msg.speedc, out);
    out << "\n";
  }

  // member: vehicledata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicledata:\n";
    to_yaml(msg.vehicledata, out, indentation + 2);
  }

  // member: vehicleident
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicleident:\n";
    to_yaml(msg.vehicleident, out, indentation + 2);
  }

  // member: j1939data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "j1939data:\n";
    to_yaml(msg.j1939data, out, indentation + 2);
  }

  // member: weatherreport
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weatherreport:\n";
    to_yaml(msg.weatherreport, out, indentation + 2);
  }

  // member: gnssstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnssstatus: ";
    value_to_yaml(msg.gnssstatus, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::VehicleStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::VehicleStatus>()
{
  return "v2x_msg::msg::VehicleStatus";
}

template<>
inline const char * name<v2x_msg::msg::VehicleStatus>()
{
  return "v2x_msg/msg/VehicleStatus";
}

template<>
struct has_fixed_size<v2x_msg::msg::VehicleStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::VehicleStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::VehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_STATUS__TRAITS_HPP_
