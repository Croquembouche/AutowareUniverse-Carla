// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SSM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SSM__TRAITS_HPP_

#include "v2x_msg/msg/detail/ssm__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'status'
#include "v2x_msg/msg/detail/signal_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: second
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "second: ";
    value_to_yaml(msg.second, out);
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status.size() == 0) {
      out << "status: []\n";
    } else {
      out << "status:\n";
      for (auto item : msg.status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SSM & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SSM>()
{
  return "v2x_msg::msg::SSM";
}

template<>
inline const char * name<v2x_msg::msg::SSM>()
{
  return "v2x_msg/msg/SSM";
}

template<>
struct has_fixed_size<v2x_msg::msg::SSM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::SSM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::SSM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SSM__TRAITS_HPP_
