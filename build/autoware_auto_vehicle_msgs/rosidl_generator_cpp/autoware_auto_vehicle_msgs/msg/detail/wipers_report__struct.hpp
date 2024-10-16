// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/WipersReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_REPORT__STRUCT_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_REPORT__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__WipersReport __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__WipersReport __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WipersReport_
{
  using Type = WipersReport_<ContainerAllocator>;

  explicit WipersReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->report = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->report = 0;
    }
  }

  explicit WipersReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->report = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->report = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _report_type =
    uint8_t;
  _report_type report;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__report(
    const uint8_t & _arg)
  {
    this->report = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DISABLE =
    1u;
  static constexpr uint8_t ENABLE_LOW =
    2u;
  static constexpr uint8_t ENABLE_HIGH =
    3u;
  static constexpr uint8_t ENABLE_INT_1 =
    4u;
  static constexpr uint8_t ENABLE_INT_2 =
    5u;
  static constexpr uint8_t ENABLE_INT_3 =
    6u;
  static constexpr uint8_t ENABLE_INT_4 =
    7u;
  static constexpr uint8_t ENABLE_INT_5 =
    8u;
  static constexpr uint8_t ENABLE_INT_6 =
    9u;
  static constexpr uint8_t ENABLE_INT_7 =
    10u;
  static constexpr uint8_t ENABLE_INT_8 =
    11u;
  static constexpr uint8_t ENABLE_INT_9 =
    12u;
  static constexpr uint8_t ENABLE_INT_10 =
    13u;
  static constexpr uint8_t ENABLE_CLEAN =
    14u;

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__WipersReport
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__WipersReport
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::WipersReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WipersReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->report != other.report) {
      return false;
    }
    return true;
  }
  bool operator!=(const WipersReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WipersReport_

// alias to use template instance with default allocator
using WipersReport =
  autoware_auto_vehicle_msgs::msg::WipersReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::DISABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_8;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_9;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_INT_10;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WipersReport_<ContainerAllocator>::ENABLE_CLEAN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__WIPERS_REPORT__STRUCT_HPP_
