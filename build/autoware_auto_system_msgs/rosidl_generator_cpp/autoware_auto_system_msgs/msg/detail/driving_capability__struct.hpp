// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_system_msgs:msg/DrivingCapability.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__STRUCT_HPP_
#define AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__STRUCT_HPP_

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
// Member 'autonomous_driving'
// Member 'remote_control'
#include "autoware_auto_system_msgs/msg/detail/hazard_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_system_msgs__msg__DrivingCapability __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_system_msgs__msg__DrivingCapability __declspec(deprecated)
#endif

namespace autoware_auto_system_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrivingCapability_
{
  using Type = DrivingCapability_<ContainerAllocator>;

  explicit DrivingCapability_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    autonomous_driving(_init),
    remote_control(_init)
  {
    (void)_init;
  }

  explicit DrivingCapability_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    autonomous_driving(_alloc, _init),
    remote_control(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _autonomous_driving_type =
    autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>;
  _autonomous_driving_type autonomous_driving;
  using _remote_control_type =
    autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator>;
  _remote_control_type remote_control;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__autonomous_driving(
    const autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> & _arg)
  {
    this->autonomous_driving = _arg;
    return *this;
  }
  Type & set__remote_control(
    const autoware_auto_system_msgs::msg::HazardStatus_<ContainerAllocator> & _arg)
  {
    this->remote_control = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_system_msgs__msg__DrivingCapability
    std::shared_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_system_msgs__msg__DrivingCapability
    std::shared_ptr<autoware_auto_system_msgs::msg::DrivingCapability_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrivingCapability_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->autonomous_driving != other.autonomous_driving) {
      return false;
    }
    if (this->remote_control != other.remote_control) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrivingCapability_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrivingCapability_

// alias to use template instance with default allocator
using DrivingCapability =
  autoware_auto_system_msgs::msg::DrivingCapability_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_system_msgs

#endif  // AUTOWARE_AUTO_SYSTEM_MSGS__MSG__DETAIL__DRIVING_CAPABILITY__STRUCT_HPP_
