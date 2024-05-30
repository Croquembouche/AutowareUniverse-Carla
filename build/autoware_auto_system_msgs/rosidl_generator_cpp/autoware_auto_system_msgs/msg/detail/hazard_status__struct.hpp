// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_system_msgs:msg/HazardStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'diag_no_fault'
// Member 'diag_safe_fault'
// Member 'diag_latent_fault'
// Member 'diag_single_point_fault'
#include "diagnostic_msgs/msg/detail/diagnostic_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_system_msgs__msg__HazardStatus __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_system_msgs__msg__HazardStatus __declspec(deprecated)
#endif

namespace autoware_auto_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HazardStatus_
{
  using Type = HazardStatus_<ContainerAllocator>;

  explicit HazardStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->level = 0;
      this->emergency = false;
      this->emergency_holding = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->level = 0;
      this->emergency = false;
      this->emergency_holding = false;
    }
  }

  explicit HazardStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->level = 0;
      this->emergency = false;
      this->emergency_holding = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->level = 0;
      this->emergency = false;
      this->emergency_holding = false;
    }
  }

  // field types and members
  using _level_type =
    uint8_t;
  _level_type level;
  using _emergency_type =
    bool;
  _emergency_type emergency;
  using _emergency_holding_type =
    bool;
  _emergency_holding_type emergency_holding;
  using _diag_no_fault_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diag_no_fault_type diag_no_fault;
  using _diag_safe_fault_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diag_safe_fault_type diag_safe_fault;
  using _diag_latent_fault_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diag_latent_fault_type diag_latent_fault;
  using _diag_single_point_fault_type =
    std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>;
  _diag_single_point_fault_type diag_single_point_fault;

  // setters for named parameter idiom
  Type & set__level(
    const uint8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__emergency(
    const bool & _arg)
  {
    this->emergency = _arg;
    return *this;
  }
  Type & set__emergency_holding(
    const bool & _arg)
  {
    this->emergency_holding = _arg;
    return *this;
  }
  Type & set__diag_no_fault(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diag_no_fault = _arg;
    return *this;
  }
  Type & set__diag_safe_fault(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diag_safe_fault = _arg;
    return *this;
  }
  Type & set__diag_latent_fault(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diag_latent_fault = _arg;
    return *this;
  }
  Type & set__diag_single_point_fault(
    const std::vector<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<diagnostic_msgs::msg::DiagnosticStatus_<ContainerAllocator>>> & _arg)
  {
    this->diag_single_point_fault = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_FAULT =
    0u;
  static constexpr uint8_t SAFE_FAULT =
    1u;
  static constexpr uint8_t LATENT_FAULT =
    2u;
  static constexpr uint8_t SINGLE_POINT_FAULT =
    3u;

  // pointer types
  using RawPtr =
    autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_system_msgs__msg__HazardStatus
    std::shared_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_system_msgs__msg__HazardStatus
    std::shared_ptr<autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HazardStatus_ & other) const
  {
    if (this->level != other.level) {
      return false;
    }
    if (this->emergency != other.emergency) {
      return false;
    }
    if (this->emergency_holding != other.emergency_holding) {
      return false;
    }
    if (this->diag_no_fault != other.diag_no_fault) {
      return false;
    }
    if (this->diag_safe_fault != other.diag_safe_fault) {
      return false;
    }
    if (this->diag_latent_fault != other.diag_latent_fault) {
      return false;
    }
    if (this->diag_single_point_fault != other.diag_single_point_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const HazardStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HazardStatus_

// alias to use template instance with default allocator
using HazardStatus =
  autoware_auto_system_msgs::msg::HazardStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HazardStatus_<ContainerAllocator>::NO_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HazardStatus_<ContainerAllocator>::SAFE_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HazardStatus_<ContainerAllocator>::LATENT_FAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HazardStatus_<ContainerAllocator>::SINGLE_POINT_FAULT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__HAZARD_STATUS__STRUCT_HPP_
