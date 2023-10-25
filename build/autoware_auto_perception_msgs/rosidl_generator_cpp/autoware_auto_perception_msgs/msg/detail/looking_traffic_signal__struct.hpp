// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/LookingTrafficSignal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'perception'
// Member 'external'
// Member 'result'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal_with_judge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__LookingTrafficSignal __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__LookingTrafficSignal __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LookingTrafficSignal_
{
  using Type = LookingTrafficSignal_<ContainerAllocator>;

  explicit LookingTrafficSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    perception(_init),
    external(_init),
    result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_module_running = false;
    }
  }

  explicit LookingTrafficSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    perception(_alloc, _init),
    external(_alloc, _init),
    result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_module_running = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_module_running_type =
    bool;
  _is_module_running_type is_module_running;
  using _perception_type =
    autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>;
  _perception_type perception;
  using _external_type =
    autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>;
  _external_type external;
  using _result_type =
    autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_module_running(
    const bool & _arg)
  {
    this->is_module_running = _arg;
    return *this;
  }
  Type & set__perception(
    const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> & _arg)
  {
    this->perception = _arg;
    return *this;
  }
  Type & set__external(
    const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> & _arg)
  {
    this->external = _arg;
    return *this;
  }
  Type & set__result(
    const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__LookingTrafficSignal
    std::shared_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__LookingTrafficSignal
    std::shared_ptr<autoware_auto_perception_msgs::msg::LookingTrafficSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookingTrafficSignal_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_module_running != other.is_module_running) {
      return false;
    }
    if (this->perception != other.perception) {
      return false;
    }
    if (this->external != other.external) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookingTrafficSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookingTrafficSignal_

// alias to use template instance with default allocator
using LookingTrafficSignal =
  autoware_auto_perception_msgs::msg::LookingTrafficSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__LOOKING_TRAFFIC_SIGNAL__STRUCT_HPP_
