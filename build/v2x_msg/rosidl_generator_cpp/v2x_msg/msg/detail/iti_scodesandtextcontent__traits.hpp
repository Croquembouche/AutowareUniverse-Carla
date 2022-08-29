// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/ITIScodesandtextcontent.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__TRAITS_HPP_

#include "v2x_msg/msg/detail/iti_scodesandtextcontent__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::ITIScodesandtextcontent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: itis
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "itis: ";
    value_to_yaml(msg.itis, out);
    out << "\n";
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::ITIScodesandtextcontent & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::ITIScodesandtextcontent>()
{
  return "v2x_msg::msg::ITIScodesandtextcontent";
}

template<>
inline const char * name<v2x_msg::msg::ITIScodesandtextcontent>()
{
  return "v2x_msg/msg/ITIScodesandtextcontent";
}

template<>
struct has_fixed_size<v2x_msg::msg::ITIScodesandtextcontent>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::ITIScodesandtextcontent>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::ITIScodesandtextcontent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__ITI_SCODESANDTEXTCONTENT__TRAITS_HPP_
