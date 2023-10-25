// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_vehicle_msgs:msg/StationaryLockingCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__STRUCT_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__StationaryLockingCommand __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__msg__StationaryLockingCommand __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StationaryLockingCommand_
{
  using Type = StationaryLockingCommand_<ContainerAllocator>;

  explicit StationaryLockingCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->avoid_stationary_locking = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->avoid_stationary_locking = false;
    }
  }

  explicit StationaryLockingCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->avoid_stationary_locking = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->avoid_stationary_locking = false;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _avoid_stationary_locking_type =
    bool;
  _avoid_stationary_locking_type avoid_stationary_locking;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__avoid_stationary_locking(
    const bool & _arg)
  {
    this->avoid_stationary_locking = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__StationaryLockingCommand
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__msg__StationaryLockingCommand
    std::shared_ptr<autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StationaryLockingCommand_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->avoid_stationary_locking != other.avoid_stationary_locking) {
      return false;
    }
    return true;
  }
  bool operator!=(const StationaryLockingCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StationaryLockingCommand_

// alias to use template instance with default allocator
using StationaryLockingCommand =
  autoware_auto_vehicle_msgs::msg::StationaryLockingCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__MSG__DETAIL__STATIONARY_LOCKING_COMMAND__STRUCT_HPP_
