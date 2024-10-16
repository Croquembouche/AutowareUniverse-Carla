// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_system_msgs:msg/EmergencyState.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_system_msgs__msg__EmergencyState __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_system_msgs__msg__EmergencyState __declspec(deprecated)
#endif

namespace autoware_auto_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyState_
{
  using Type = EmergencyState_<ContainerAllocator>;

  explicit EmergencyState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit EmergencyState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NORMAL =
    1u;
  static constexpr uint8_t OVERRIDE_REQUESTING =
    2u;
  static constexpr uint8_t MRM_OPERATING =
    3u;
  static constexpr uint8_t MRM_SUCCEEDED =
    4u;
  static constexpr uint8_t MRM_FAILED =
    5u;

  // pointer types
  using RawPtr =
    autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_system_msgs__msg__EmergencyState
    std::shared_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_system_msgs__msg__EmergencyState
    std::shared_ptr<autoware_auto_system_msgs::msg::EmergencyState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyState_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyState_

// alias to use template instance with default allocator
using EmergencyState =
  autoware_auto_system_msgs::msg::EmergencyState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyState_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyState_<ContainerAllocator>::OVERRIDE_REQUESTING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyState_<ContainerAllocator>::MRM_OPERATING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyState_<ContainerAllocator>::MRM_SUCCEEDED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EmergencyState_<ContainerAllocator>::MRM_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__EMERGENCY_STATE__STRUCT_HPP_
