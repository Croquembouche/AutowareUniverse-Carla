// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_system_msgs:msg/DiagnosticHeader.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__STRUCT_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data_stamp'
// Member 'computation_start'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'runtime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_system_msgs__msg__DiagnosticHeader __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_system_msgs__msg__DiagnosticHeader __declspec(deprecated)
#endif

namespace autoware_auto_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticHeader_
{
  using Type = DiagnosticHeader_<ContainerAllocator>;

  explicit DiagnosticHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data_stamp(_init),
    computation_start(_init),
    runtime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->iterations = 0ul;
    }
  }

  explicit DiagnosticHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    data_stamp(_alloc, _init),
    computation_start(_alloc, _init),
    runtime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->iterations = 0ul;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _data_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _data_stamp_type data_stamp;
  using _computation_start_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _computation_start_type computation_start;
  using _runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _runtime_type runtime;
  using _iterations_type =
    uint32_t;
  _iterations_type iterations;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__data_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->data_stamp = _arg;
    return *this;
  }
  Type & set__computation_start(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->computation_start = _arg;
    return *this;
  }
  Type & set__runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->runtime = _arg;
    return *this;
  }
  Type & set__iterations(
    const uint32_t & _arg)
  {
    this->iterations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_system_msgs__msg__DiagnosticHeader
    std::shared_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_system_msgs__msg__DiagnosticHeader
    std::shared_ptr<autoware_auto_system_msgs::msg::DiagnosticHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticHeader_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->data_stamp != other.data_stamp) {
      return false;
    }
    if (this->computation_start != other.computation_start) {
      return false;
    }
    if (this->runtime != other.runtime) {
      return false;
    }
    if (this->iterations != other.iterations) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticHeader_

// alias to use template instance with default allocator
using DiagnosticHeader =
  autoware_auto_system_msgs::msg::DiagnosticHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DIAGNOSTIC_HEADER__STRUCT_HPP_
