// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/HeadlightsReport.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_REPORT__STRUCT_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_REPORT__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__HeadlightsReport __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__HeadlightsReport __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeadlightsReport_
{
  using Type = HeadlightsReport_<ContainerAllocator>;

  explicit HeadlightsReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit HeadlightsReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__HeadlightsReport
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__HeadlightsReport
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::HeadlightsReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadlightsReport_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->report != other.report) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadlightsReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadlightsReport_

// alias to use template instance with default allocator
using HeadlightsReport =
  autoware_auto_vehicle_msgs::msg::HeadlightsReport_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeadlightsReport_<ContainerAllocator>::DISABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeadlightsReport_<ContainerAllocator>::ENABLE_LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HeadlightsReport_<ContainerAllocator>::ENABLE_HIGH;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__HEADLIGHTS_REPORT__STRUCT_HPP_
