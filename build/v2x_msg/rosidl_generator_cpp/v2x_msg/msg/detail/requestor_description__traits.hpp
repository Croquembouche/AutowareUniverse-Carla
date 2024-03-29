// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RequestorDescription.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_msg/msg/detail/requestor_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__traits.hpp"
// Member 'type'
#include "v2x_msg/msg/detail/requestor_type__traits.hpp"
// Member 'position'
#include "v2x_msg/msg/detail/requestor_position_vector__traits.hpp"

namespace v2x_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RequestorDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: routename
  {
    out << "routename: ";
    rosidl_generator_traits::value_to_yaml(msg.routename, out);
    out << ", ";
  }

  // member: transitstatus
  {
    out << "transitstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.transitstatus, out);
    out << ", ";
  }

  // member: transitoccupancy
  {
    out << "transitoccupancy: ";
    rosidl_generator_traits::value_to_yaml(msg.transitoccupancy, out);
    out << ", ";
  }

  // member: transitschedule
  {
    out << "transitschedule: ";
    rosidl_generator_traits::value_to_yaml(msg.transitschedule, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestorDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: routename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "routename: ";
    rosidl_generator_traits::value_to_yaml(msg.routename, out);
    out << "\n";
  }

  // member: transitstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transitstatus: ";
    rosidl_generator_traits::value_to_yaml(msg.transitstatus, out);
    out << "\n";
  }

  // member: transitoccupancy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transitoccupancy: ";
    rosidl_generator_traits::value_to_yaml(msg.transitoccupancy, out);
    out << "\n";
  }

  // member: transitschedule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transitschedule: ";
    rosidl_generator_traits::value_to_yaml(msg.transitschedule, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestorDescription & msg, bool use_flow_style = false)
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
  const v2x_msg::msg::RequestorDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_msg::msg::RequestorDescription & msg)
{
  return v2x_msg::msg::to_yaml(msg);
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
