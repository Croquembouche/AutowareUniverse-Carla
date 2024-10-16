// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_vehicle_msgs:srv/AutonomyModeChange.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__STRUCT_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutonomyModeChange_Request_
{
  using Type = AutonomyModeChange_Request_<ContainerAllocator>;

  explicit AutonomyModeChange_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit AutonomyModeChange_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_MANUAL =
    0u;
  static constexpr uint8_t MODE_AUTONOMOUS =
    1u;

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Request
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutonomyModeChange_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutonomyModeChange_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutonomyModeChange_Request_

// alias to use template instance with default allocator
using AutonomyModeChange_Request =
  autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutonomyModeChange_Request_<ContainerAllocator>::MODE_MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AutonomyModeChange_Request_<ContainerAllocator>::MODE_AUTONOMOUS;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace autoware_auto_vehicle_msgs


// Include directives for member types
// Member 'empty'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AutonomyModeChange_Response_
{
  using Type = AutonomyModeChange_Response_<ContainerAllocator>;

  explicit AutonomyModeChange_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : empty(_init)
  {
    (void)_init;
  }

  explicit AutonomyModeChange_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : empty(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _empty_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__empty(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->empty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__AutonomyModeChange_Response
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutonomyModeChange_Response_ & other) const
  {
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutonomyModeChange_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutonomyModeChange_Response_

// alias to use template instance with default allocator
using AutonomyModeChange_Response =
  autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_auto_vehicle_msgs

namespace autoware_auto_vehicle_msgs
{

namespace srv
{

struct AutonomyModeChange
{
  using Request = autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Request;
  using Response = autoware_auto_vehicle_msgs::srv::AutonomyModeChange_Response;
};

}  // namespace srv

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__AUTONOMY_MODE_CHANGE__STRUCT_HPP_
