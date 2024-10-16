// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_vehicle_msgs:srv/ControlModeCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__STRUCT_HPP_
#define AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlModeCommand_Request_
{
  using Type = ControlModeCommand_Request_<ContainerAllocator>;

  explicit ControlModeCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  explicit ControlModeCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_COMMAND =
    0u;
  static constexpr uint8_t AUTONOMOUS =
    1u;
  static constexpr uint8_t AUTONOMOUS_STEER_ONLY =
    2u;
  static constexpr uint8_t AUTONOMOUS_VELOCITY_ONLY =
    3u;
  static constexpr uint8_t MANUAL =
    4u;

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Request
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlModeCommand_Request_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlModeCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlModeCommand_Request_

// alias to use template instance with default allocator
using ControlModeCommand_Request =
  autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlModeCommand_Request_<ContainerAllocator>::NO_COMMAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlModeCommand_Request_<ContainerAllocator>::AUTONOMOUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlModeCommand_Request_<ContainerAllocator>::AUTONOMOUS_STEER_ONLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlModeCommand_Request_<ContainerAllocator>::AUTONOMOUS_VELOCITY_ONLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlModeCommand_Request_<ContainerAllocator>::MANUAL;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace autoware_auto_vehicle_msgs


#ifndef _WIN32
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response __declspec(deprecated)
#endif

namespace autoware_auto_vehicle_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlModeCommand_Response_
{
  using Type = ControlModeCommand_Response_<ContainerAllocator>;

  explicit ControlModeCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ControlModeCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_vehicle_msgs__srv__ControlModeCommand_Response
    std::shared_ptr<autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlModeCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlModeCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlModeCommand_Response_

// alias to use template instance with default allocator
using ControlModeCommand_Response =
  autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace autoware_auto_vehicle_msgs

namespace autoware_auto_vehicle_msgs
{

namespace srv
{

struct ControlModeCommand
{
  using Request = autoware_auto_vehicle_msgs::srv::ControlModeCommand_Request;
  using Response = autoware_auto_vehicle_msgs::srv::ControlModeCommand_Response;
};

}  // namespace srv

}  // namespace autoware_auto_vehicle_msgs

#endif  // AUTOWARE_AUTO_VEHICLE_MSGS__SRV__DETAIL__CONTROL_MODE_COMMAND__STRUCT_HPP_
