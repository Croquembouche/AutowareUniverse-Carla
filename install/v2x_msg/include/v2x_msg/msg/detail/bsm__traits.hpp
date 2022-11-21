// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__BSM__TRAITS_HPP_

#include "v2x_msg/msg/detail/bsm__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'coredata'
#include "v2x_msg/msg/detail/bsm_core_data__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::BSM & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coredata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coredata:\n";
    to_yaml(msg.coredata, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::BSM & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::BSM>()
{
  return "v2x_msg::msg::BSM";
}

template<>
inline const char * name<v2x_msg::msg::BSM>()
{
  return "v2x_msg/msg/BSM";
}

template<>
struct has_fixed_size<v2x_msg::msg::BSM>
  : std::integral_constant<bool, has_fixed_size<v2x_msg::msg::BSMCoreData>::value> {};

template<>
struct has_bounded_size<v2x_msg::msg::BSM>
  : std::integral_constant<bool, has_bounded_size<v2x_msg::msg::BSMCoreData>::value> {};

template<>
struct is_message<v2x_msg::msg::BSM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__BSM__TRAITS_HPP_
