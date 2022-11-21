// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_

#include "v2x_msg/msg/detail/path_history__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'initialposition'
#include "v2x_msg/msg/detail/full_position_vector__traits.hpp"
// Member 'crumbdata'
#include "v2x_msg/msg/detail/path_history_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::PathHistory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: initialposition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initialposition:\n";
    to_yaml(msg.initialposition, out, indentation + 2);
  }

  // member: currgnssstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "currgnssstatus: ";
    value_to_yaml(msg.currgnssstatus, out);
    out << "\n";
  }

  // member: crumbdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.crumbdata.size() == 0) {
      out << "crumbdata: []\n";
    } else {
      out << "crumbdata:\n";
      for (auto item : msg.crumbdata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::PathHistory & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::PathHistory>()
{
  return "v2x_msg::msg::PathHistory";
}

template<>
inline const char * name<v2x_msg::msg::PathHistory>()
{
  return "v2x_msg/msg/PathHistory";
}

template<>
struct has_fixed_size<v2x_msg::msg::PathHistory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::PathHistory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::PathHistory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__PATH_HISTORY__TRAITS_HPP_
