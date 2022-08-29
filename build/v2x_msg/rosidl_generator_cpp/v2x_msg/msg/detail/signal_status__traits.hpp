// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_msg:msg/SignalStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__TRAITS_HPP_
#define V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__TRAITS_HPP_

#include "v2x_msg/msg/detail/signal_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'id'
#include "v2x_msg/msg/detail/intersection_reference_id__traits.hpp"
// Member 'sigstatus'
#include "v2x_msg/msg/detail/signal_status_package__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const v2x_msg::msg::SignalStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sequencenumber
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequencenumber: ";
    value_to_yaml(msg.sequencenumber, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_yaml(msg.id, out, indentation + 2);
  }

  // member: sigstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sigstatus.size() == 0) {
      out << "sigstatus: []\n";
    } else {
      out << "sigstatus:\n";
      for (auto item : msg.sigstatus) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const v2x_msg::msg::SignalStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<v2x_msg::msg::SignalStatus>()
{
  return "v2x_msg::msg::SignalStatus";
}

template<>
inline const char * name<v2x_msg::msg::SignalStatus>()
{
  return "v2x_msg/msg/SignalStatus";
}

template<>
struct has_fixed_size<v2x_msg::msg::SignalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_msg::msg::SignalStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_msg::msg::SignalStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_MSG__MSG__DETAIL__SIGNAL_STATUS__TRAITS_HPP_
