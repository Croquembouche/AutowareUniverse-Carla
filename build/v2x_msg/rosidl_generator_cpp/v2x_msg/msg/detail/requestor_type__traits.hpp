// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/RequestorType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__TRAITS_HPP_

#include "v2x_msg/msg/detail/requestor_type__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::RequestorType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role: ";
    value_to_yaml(msg.role, out);
    out << "\n";
  }

  // member: subrole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "subrole: ";
    value_to_yaml(msg.subrole, out);
    out << "\n";
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    value_to_yaml(msg.request, out);
    out << "\n";
  }

  // member: iso3833vehicletype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iso3833vehicletype: ";
    value_to_yaml(msg.iso3833vehicletype, out);
    out << "\n";
  }

  // member: hpmstype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpmstype: ";
    value_to_yaml(msg.hpmstype, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::RequestorType & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::RequestorType>()
{
  return "v2x_msg::msg::RequestorType";
}

template<>
inline const char * name<v2x_msg::msg::RequestorType>()
{
  return "v2x_msg/msg/RequestorType";
}

template<>
struct has_fixed_size<v2x_msg::msg::RequestorType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_msg::msg::RequestorType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_msg::msg::RequestorType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__REQUESTOR_TYPE__TRAITS_HPP_
