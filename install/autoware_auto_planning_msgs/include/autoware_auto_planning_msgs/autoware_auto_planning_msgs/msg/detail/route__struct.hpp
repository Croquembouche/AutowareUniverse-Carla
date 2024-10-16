// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_

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
// Member 'start_point'
// Member 'goal_point'
#include "autoware_auto_planning_msgs/msg/detail/trajectory_point__struct.hpp"
// Member 'primitives'
#include "autoware_auto_mapping_msgs/msg/detail/map_primitive__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__msg__Route __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__Route __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Route_
{
  using Type = Route_<ContainerAllocator>;

  explicit Route_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    start_point(_init),
    goal_point(_init)
  {
    (void)_init;
  }

  explicit Route_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    start_point(_alloc, _init),
    goal_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _start_point_type =
    autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>;
  _start_point_type start_point;
  using _goal_point_type =
    autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>;
  _goal_point_type goal_point;
  using _primitives_type =
    rosidl_runtime_cpp::BoundedVector<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>, 100, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>>;
  _primitives_type primitives;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__start_point(
    const autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->start_point = _arg;
    return *this;
  }
  Type & set__goal_point(
    const autoware_auto_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->goal_point = _arg;
    return *this;
  }
  Type & set__primitives(
    const rosidl_runtime_cpp::BoundedVector<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>, 100, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<autoware_auto_mapping_msgs::msg::MapPrimitive_<ContainerAllocator>>> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CAPACITY =
    100u;

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::Route_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::Route_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::Route_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::Route_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__Route
    std::shared_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__Route
    std::shared_ptr<autoware_auto_planning_msgs::msg::Route_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Route_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->start_point != other.start_point) {
      return false;
    }
    if (this->goal_point != other.goal_point) {
      return false;
    }
    if (this->primitives != other.primitives) {
      return false;
    }
    return true;
  }
  bool operator!=(const Route_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Route_

// alias to use template instance with default allocator
using Route =
  autoware_auto_planning_msgs::msg::Route_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Route_<ContainerAllocator>::CAPACITY;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
