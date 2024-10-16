// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/TrafficSignalWithJudge.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'signal'
#include "autoware_auto_perception_msgs/msg/detail/traffic_signal__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__TrafficSignalWithJudge __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__TrafficSignalWithJudge __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignalWithJudge_
{
  using Type = TrafficSignalWithJudge_<ContainerAllocator>;

  explicit TrafficSignalWithJudge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : signal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->judge = 0;
      this->has_state = false;
    }
  }

  explicit TrafficSignalWithJudge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : signal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->judge = 0;
      this->has_state = false;
    }
  }

  // field types and members
  using _judge_type =
    uint8_t;
  _judge_type judge;
  using _has_state_type =
    bool;
  _has_state_type has_state;
  using _signal_type =
    autoware_auto_perception_msgs::msg::TrafficSignal_<ContainerAllocator>;
  _signal_type signal;

  // setters for named parameter idiom
  Type & set__judge(
    const uint8_t & _arg)
  {
    this->judge = _arg;
    return *this;
  }
  Type & set__has_state(
    const bool & _arg)
  {
    this->has_state = _arg;
    return *this;
  }
  Type & set__signal(
    const autoware_auto_perception_msgs::msg::TrafficSignal_<ContainerAllocator> & _arg)
  {
    this->signal = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t JUDGE =
    1u;
  static constexpr uint8_t NONE =
    2u;
  static constexpr uint8_t STOP =
    3u;
  static constexpr uint8_t GO =
    4u;

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__TrafficSignalWithJudge
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__TrafficSignalWithJudge
    std::shared_ptr<autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignalWithJudge_ & other) const
  {
    if (this->judge != other.judge) {
      return false;
    }
    if (this->has_state != other.has_state) {
      return false;
    }
    if (this->signal != other.signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignalWithJudge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignalWithJudge_

// alias to use template instance with default allocator
using TrafficSignalWithJudge =
  autoware_auto_perception_msgs::msg::TrafficSignalWithJudge_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalWithJudge_<ContainerAllocator>::JUDGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalWithJudge_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalWithJudge_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalWithJudge_<ContainerAllocator>::GO;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_WITH_JUDGE__STRUCT_HPP_
