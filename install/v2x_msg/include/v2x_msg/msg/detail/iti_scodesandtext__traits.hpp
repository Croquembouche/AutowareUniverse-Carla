// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ITIScodesandtext.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXT__TRAITS_HPP_

#include "v2x_msg/msg/detail/iti_scodesandtext__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'item'
#include "v2x_msg/msg/detail/iti_scodesandtextcontent__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ITIScodesandtext & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: item
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.item.size() == 0) {
      out << "item: []\n";
    } else {
      out << "item:\n";
      for (auto item : msg.item) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ITIScodesandtext & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ITIScodesandtext>()
{
  return "v2x_msg::msg::ITIScodesandtext";
}

template<>
inline const char * name<v2x_msg::msg::ITIScodesandtext>()
{
  return "v2x_msg/msg/ITIScodesandtext";
}

template<>
struct has_fixed_size<v2x_msg::msg::ITIScodesandtext>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::ITIScodesandtext>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::ITIScodesandtext>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXT__TRAITS_HPP_
