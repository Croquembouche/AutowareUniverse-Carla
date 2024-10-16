// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_adapi_v1_msgs:msg/RouteSegment.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_HPP_
#define AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'preferred'
// Member 'alternatives'
#include "autoware_adapi_v1_msgs/msg/detail/route_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_adapi_v1_msgs__msg__RouteSegment __attribute__((deprecated))
#else
# define DEPRECATED__autoware_adapi_v1_msgs__msg__RouteSegment __declspec(deprecated)
#endif

namespace autoware_adapi_v1_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteSegment_
{
  using Type = RouteSegment_<ContainerAllocator>;

  explicit RouteSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred(_init)
  {
    (void)_init;
  }

  explicit RouteSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preferred(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _preferred_type =
    autoware_adapi_v1_msgs::msg::RoutePrimitive_<ContainerAllocator>;
  _preferred_type preferred;
  using _alternatives_type =
    std::vector<autoware_adapi_v1_msgs::msg::RoutePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::RoutePrimitive_<ContainerAllocator>>>;
  _alternatives_type alternatives;

  // setters for named parameter idiom
  Type & set__preferred(
    const autoware_adapi_v1_msgs::msg::RoutePrimitive_<ContainerAllocator> & _arg)
  {
    this->preferred = _arg;
    return *this;
  }
  Type & set__alternatives(
    const std::vector<autoware_adapi_v1_msgs::msg::RoutePrimitive_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_adapi_v1_msgs::msg::RoutePrimitive_<ContainerAllocator>>> & _arg)
  {
    this->alternatives = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__RouteSegment
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_adapi_v1_msgs__msg__RouteSegment
    std::shared_ptr<autoware_adapi_v1_msgs::msg::RouteSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteSegment_ & other) const
  {
    if (this->preferred != other.preferred) {
      return false;
    }
    if (this->alternatives != other.alternatives) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteSegment_

// alias to use template instance with default allocator
using RouteSegment =
  autoware_adapi_v1_msgs::msg::RouteSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_adapi_v1_msgs

#endif  // AUTOWARE_ADAPI_V1_MSGS__MSG__DETAIL__ROUTE_SEGMENT__STRUCT_HPP_
