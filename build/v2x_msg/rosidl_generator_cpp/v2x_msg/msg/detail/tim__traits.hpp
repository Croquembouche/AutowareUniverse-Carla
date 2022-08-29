// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/TIM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__TIM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__TIM__TRAITS_HPP_

#include "v2x_msg/msg/detail/tim__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'dataframes'
#include "v2x_msg/msg/detail/traveler_data_frame__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::TIM & msg,
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

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: packetid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "packetid: ";
    value_to_yaml(msg.packetid, out);
    out << "\n";
  }

  // member: urlb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "urlb: ";
    value_to_yaml(msg.urlb, out);
    out << "\n";
  }

  // member: dataframes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dataframes.size() == 0) {
      out << "dataframes: []\n";
    } else {
      out << "dataframes:\n";
      for (auto item : msg.dataframes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::TIM & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::TIM>()
{
  return "v2x_msg::msg::TIM";
}

template<>
inline const char * name<v2x_msg::msg::TIM>()
{
  return "v2x_msg/msg/TIM";
}

template<>
struct has_fixed_size<v2x_msg::msg::TIM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::TIM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::TIM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__TIM__TRAITS_HPP_
