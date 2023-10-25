// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_planning_msgs:srv/ModifyTrajectory.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__STRUCT_HPP_
#define AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'original_trajectory'
#include "autoware_auto_planning_msgs/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Request __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyTrajectory_Request_
{
  using Type = ModifyTrajectory_Request_<ContainerAllocator>;

  explicit ModifyTrajectory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : original_trajectory(_init)
  {
    (void)_init;
  }

  explicit ModifyTrajectory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : original_trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _original_trajectory_type =
    autoware_auto_planning_msgs::msg::Trajectory_<ContainerAllocator>;
  _original_trajectory_type original_trajectory;

  // setters for named parameter idiom
  Type & set__original_trajectory(
    const autoware_auto_planning_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->original_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Request
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Request
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyTrajectory_Request_ & other) const
  {
    if (this->original_trajectory != other.original_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyTrajectory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyTrajectory_Request_

// alias to use template instance with default allocator
using ModifyTrajectory_Request =
  autoware_auto_planning_msgs::srv::ModifyTrajectory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_auto_planning_msgs


// Include directives for member types
// Member 'modified_trajectory'
// already included above
// #include "autoware_auto_planning_msgs/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Response __declspec(deprecated)
#endif

namespace autoware_auto_planning_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ModifyTrajectory_Response_
{
  using Type = ModifyTrajectory_Response_<ContainerAllocator>;

  explicit ModifyTrajectory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : modified_trajectory(_init)
  {
    (void)_init;
  }

  explicit ModifyTrajectory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : modified_trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _modified_trajectory_type =
    autoware_auto_planning_msgs::msg::Trajectory_<ContainerAllocator>;
  _modified_trajectory_type modified_trajectory;

  // setters for named parameter idiom
  Type & set__modified_trajectory(
    const autoware_auto_planning_msgs::msg::Trajectory_<ContainerAllocator> & _arg)
  {
    this->modified_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Response
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_planning_msgs__srv__ModifyTrajectory_Response
    std::shared_ptr<autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModifyTrajectory_Response_ & other) const
  {
    if (this->modified_trajectory != other.modified_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModifyTrajectory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModifyTrajectory_Response_

// alias to use template instance with default allocator
using ModifyTrajectory_Response =
  autoware_auto_planning_msgs::srv::ModifyTrajectory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_auto_planning_msgs

namespace autoware_auto_planning_msgs
{

namespace srv
{

struct ModifyTrajectory
{
  using Request = autoware_auto_planning_msgs::srv::ModifyTrajectory_Request;
  using Response = autoware_auto_planning_msgs::srv::ModifyTrajectory_Response;
};

}  // namespace srv

}  // namespace autoware_auto_planning_msgs

#endif  // AUTOWARE_AUTO_PLANNING_MSGS__SRV__DETAIL__MODIFY_TRAJECTORY__STRUCT_HPP_
