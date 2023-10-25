// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'utctime'
#include "v2x_msg/msg/detail/d_date_time__struct.hpp"
// Member 'speed'
#include "v2x_msg/msg/detail/transmission_and_speed__struct.hpp"
// Member 'posaccuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.hpp"
// Member 'posconfidence'
#include "v2x_msg/msg/detail/position_confidence_set__struct.hpp"
// Member 'speedconfidence'
#include "v2x_msg/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__FullPositionVector __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__FullPositionVector __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FullPositionVector_
{
  using Type = FullPositionVector_<ContainerAllocator>;

  explicit FullPositionVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utctime(_init),
    speed(_init),
    posaccuracy(_init),
    posconfidence(_init),
    speedconfidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0ll;
      this->lat = 0ll;
      this->elevation = 0ll;
      this->heading = 0ll;
      this->timeconfidence = 0ll;
    }
  }

  explicit FullPositionVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utctime(_alloc, _init),
    speed(_alloc, _init),
    posaccuracy(_alloc, _init),
    posconfidence(_alloc, _init),
    speedconfidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0ll;
      this->lat = 0ll;
      this->elevation = 0ll;
      this->heading = 0ll;
      this->timeconfidence = 0ll;
    }
  }

  // field types and members
  using _utctime_type =
    v2x_msg::msg::DDateTime_<ContainerAllocator>;
  _utctime_type utctime;
  using _longitude_type =
    int64_t;
  _longitude_type longitude;
  using _lat_type =
    int64_t;
  _lat_type lat;
  using _elevation_type =
    int64_t;
  _elevation_type elevation;
  using _heading_type =
    int64_t;
  _heading_type heading;
  using _speed_type =
    v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator>;
  _speed_type speed;
  using _posaccuracy_type =
    v2x_msg::msg::PositionalAccuracy_<ContainerAllocator>;
  _posaccuracy_type posaccuracy;
  using _timeconfidence_type =
    int64_t;
  _timeconfidence_type timeconfidence;
  using _posconfidence_type =
    v2x_msg::msg::PositionConfidenceSet_<ContainerAllocator>;
  _posconfidence_type posconfidence;
  using _speedconfidence_type =
    v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>;
  _speedconfidence_type speedconfidence;

  // setters for named parameter idiom
  Type & set__utctime(
    const v2x_msg::msg::DDateTime_<ContainerAllocator> & _arg)
  {
    this->utctime = _arg;
    return *this;
  }
  Type & set__longitude(
    const int64_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__lat(
    const int64_t & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__elevation(
    const int64_t & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__heading(
    const int64_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const v2x_msg::msg::TransmissionAndSpeed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__posaccuracy(
    const v2x_msg::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->posaccuracy = _arg;
    return *this;
  }
  Type & set__timeconfidence(
    const int64_t & _arg)
  {
    this->timeconfidence = _arg;
    return *this;
  }
  Type & set__posconfidence(
    const v2x_msg::msg::PositionConfidenceSet_<ContainerAllocator> & _arg)
  {
    this->posconfidence = _arg;
    return *this;
  }
  Type & set__speedconfidence(
    const v2x_msg::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> & _arg)
  {
    this->speedconfidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::FullPositionVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::FullPositionVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::FullPositionVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::FullPositionVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__FullPositionVector
    std::shared_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__FullPositionVector
    std::shared_ptr<v2x_msg::msg::FullPositionVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FullPositionVector_ & other) const
  {
    if (this->utctime != other.utctime) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->posaccuracy != other.posaccuracy) {
      return false;
    }
    if (this->timeconfidence != other.timeconfidence) {
      return false;
    }
    if (this->posconfidence != other.posconfidence) {
      return false;
    }
    if (this->speedconfidence != other.speedconfidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const FullPositionVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FullPositionVector_

// alias to use template instance with default allocator
using FullPositionVector =
  v2x_msg::msg::FullPositionVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_HPP_
