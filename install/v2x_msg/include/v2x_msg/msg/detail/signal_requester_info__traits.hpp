// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SignalRequesterInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__TRAITS_HPP_

#include "v2x_msg/msg/detail/signal_requester_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/vehicle_id__traits.hpp"
// Member 'typedata'
#include "v2x_msg/msg/detail/requestor_type__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SignalRequesterInfo & msg,
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

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request: ";
    value_to_yaml(msg.request, out);
    out << "\n";
  }

  // member: sequencenumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequencenumber: ";
    value_to_yaml(msg.sequencenumber, out);
    out << "\n";
  }

  // member: basicvehiclerole
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basicvehiclerole: ";
    value_to_yaml(msg.basicvehiclerole, out);
    out << "\n";
  }

  // member: typedata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "typedata:\n";
    to_yaml(msg.typedata, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SignalRequesterInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SignalRequesterInfo>()
{
  return "v2x_msg::msg::SignalRequesterInfo";
}

template<>
inline const char * name<v2x_msg::msg::SignalRequesterInfo>()
{
  return "v2x_msg/msg/SignalRequesterInfo";
}

template<>
struct has_fixed_size<v2x_msg::msg::SignalRequesterInfo>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::RequestorType>::value && has_fixed_size<v2x_msg::msg::VehicleID>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::SignalRequesterInfo>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::RequestorType>::value && has_bounded_size<v2x_msg::msg::VehicleID>::value> {};

template<>
struct is_message<v2x_msg::msg::SignalRequesterInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_REQUESTER_INFO__TRAITS_HPP_
