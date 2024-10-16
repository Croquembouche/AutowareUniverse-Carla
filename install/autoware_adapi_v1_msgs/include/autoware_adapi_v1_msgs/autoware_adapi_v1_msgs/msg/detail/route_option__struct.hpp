// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/RouteOption.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__RouteOption __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__RouteOption __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteOption_
{
  using Type = RouteOption_<ContainerAllocator>;

  explicit RouteOption_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->allow_goal_modification = false;
    }
  }

  explicit RouteOption_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->allow_goal_modification = false;
    }
  }

  // field types and members
  using _allow_goal_modification_type =
    bool;
  _allow_goal_modification_type allow_goal_modification;

  // setters for named parameter idiom
  Type & set__allow_goal_modification(
    const bool & _arg)
  {
    this->allow_goal_modification = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__RouteOption
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__RouteOption
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteOption_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteOption_ & other) const
  {
    if (this->allow_goal_modification != other.allow_goal_modification) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteOption_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteOption_

// alias to use template instance with default allocator
using RouteOption =
  autoware_adapi_v1_msgs::msg::RouteOption_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_OPTION__STRUCT_HPP_
