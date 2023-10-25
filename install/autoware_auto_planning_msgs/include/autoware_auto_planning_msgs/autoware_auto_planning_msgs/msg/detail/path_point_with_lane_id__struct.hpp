// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:msg/PathPointWithLaneId.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'point'
#include "autoware_auto_planning_msgs/msg/detail/path_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathPointWithLaneId __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__msg__PathPointWithLaneId __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPointWithLaneId_
{
  using Type = PathPointWithLaneId_<ContainerAllocator>;

  explicit PathPointWithLaneId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    (void)_init;
  }

  explicit PathPointWithLaneId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _point_type =
    autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator>;
  _point_type point;
  using _lane_ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _lane_ids_type lane_ids;

  // setters for named parameter idiom
  Type & set__point(
    const autoware_auto_planning_msgs::msg::PathPoint_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__lane_ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->lane_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathPointWithLaneId
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__msg__PathPointWithLaneId
    std::shared_ptr<autoware_auto_planning_msgs::msg::PathPointWithLaneId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPointWithLaneId_ & other) const
  {
    if (this->point != other.point) {
      return false;
    }
    if (this->lane_ids != other.lane_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPointWithLaneId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPointWithLaneId_

// alias to use template instance with default allocator
using PathPointWithLaneId =
  autoware_auto_planning_msgs::msg::PathPointWithLaneId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__MSG__DETAIL__PATH_POINT_WITH_LANE_ID__STRUCT_HPP_
