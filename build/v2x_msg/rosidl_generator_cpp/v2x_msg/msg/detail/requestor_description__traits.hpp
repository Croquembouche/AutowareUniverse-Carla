// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RequestorDescription.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__TRAITS_HPP_

#include "v2x_msg/msg/detail/requestor_description__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__traits.hpp"
// Member 'type'
#include "v2x_msg/msg/detail/requestor_type__traits.hpp"
// Member 'position'
#include "v2x_msg/msg/detail/requestor_position_vector__traits.hpp"
// Member 'transitstatus'
#include "v2x_msg/msg/detail/transit_vehicle_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RequestorDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_yaml(msg.id, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_yaml(msg.type, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_yaml(msg.position, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: routename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "routename: ";
    value_to_yaml(msg.routename, out);
    out << "\n";
  }

  // member: transitstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transitstatus:\n";
    to_yaml(msg.transitstatus, out, indentation + 2);
  }

  // member: transitoccupancy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transitoccupancy: ";
    value_to_yaml(msg.transitoccupancy, out);
    out << "\n";
  }

  // member: transitschedule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transitschedule: ";
    value_to_yaml(msg.transitschedule, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RequestorDescription & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::RequestorDescription>()
{
  return "v2x_msg::msg::RequestorDescription";
}

template<>
inline const char * name<v2x_msg::msg::RequestorDescription>()
{
  return "v2x_msg/msg/RequestorDescription";
}

template<>
struct has_fixed_size<v2x_msg::msg::RequestorDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::RequestorDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::RequestorDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__TRAITS_HPP_
