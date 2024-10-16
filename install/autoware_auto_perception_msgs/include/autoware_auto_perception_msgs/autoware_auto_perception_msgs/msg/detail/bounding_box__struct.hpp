// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_perception_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'centroid'
// Member 'size'
// Member 'corners'
#include "geometry_msgs/msg/detail/point32__struct.hpp"
// Member 'orientation'
#include "autoware_auto_geometry_msgs/msg/detail/quaternion32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBox __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBox __declspec(deprecated)
#endif

namespace autoware_auto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBox_
{
  using Type = BoundingBox_<ContainerAllocator>;

  explicit BoundingBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid(_init),
    size(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->velocity = 0.0f;
      this->heading = 0.0f;
      this->heading_rate = 0.0f;
      this->vehicle_label = 0;
      this->signal_label = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->velocity = 0.0f;
      this->heading = 0.0f;
      this->heading_rate = 0.0f;
      std::fill<typename std::array<float, 8>::iterator, float>(this->variance.begin(), this->variance.end(), 0.0f);
      this->value = 0.0f;
      this->vehicle_label = 0;
      this->signal_label = 0;
      this->class_likelihood = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->corners.fill(geometry_msgs::msg::Point32_<ContainerAllocator>{_init});
      std::fill<typename std::array<float, 8>::iterator, float>(this->variance.begin(), this->variance.end(), 0.0f);
      this->value = 0.0f;
      this->class_likelihood = 0.0f;
    }
  }

  explicit BoundingBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : centroid(_alloc, _init),
    size(_alloc, _init),
    orientation(_alloc, _init),
    corners(_alloc),
    variance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->velocity = 0.0f;
      this->heading = 0.0f;
      this->heading_rate = 0.0f;
      this->vehicle_label = 0;
      this->signal_label = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->velocity = 0.0f;
      this->heading = 0.0f;
      this->heading_rate = 0.0f;
      std::fill<typename std::array<float, 8>::iterator, float>(this->variance.begin(), this->variance.end(), 0.0f);
      this->value = 0.0f;
      this->vehicle_label = 0;
      this->signal_label = 0;
      this->class_likelihood = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->corners.fill(geometry_msgs::msg::Point32_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<float, 8>::iterator, float>(this->variance.begin(), this->variance.end(), 0.0f);
      this->value = 0.0f;
      this->class_likelihood = 0.0f;
    }
  }

  // field types and members
  using _centroid_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _centroid_type centroid;
  using _size_type =
    geometry_msgs::msg::Point32_<ContainerAllocator>;
  _size_type size;
  using _orientation_type =
    autoware_auto_geometry_msgs::msg::Quaternion32_<ContainerAllocator>;
  _orientation_type orientation;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _heading_type =
    float;
  _heading_type heading;
  using _heading_rate_type =
    float;
  _heading_rate_type heading_rate;
  using _corners_type =
    std::array<geometry_msgs::msg::Point32_<ContainerAllocator>, 4>;
  _corners_type corners;
  using _variance_type =
    std::array<float, 8>;
  _variance_type variance;
  using _value_type =
    float;
  _value_type value;
  using _vehicle_label_type =
    uint8_t;
  _vehicle_label_type vehicle_label;
  using _signal_label_type =
    uint8_t;
  _signal_label_type signal_label;
  using _class_likelihood_type =
    float;
  _class_likelihood_type class_likelihood;

  // setters for named parameter idiom
  Type & set__centroid(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->centroid = _arg;
    return *this;
  }
  Type & set__size(
    const geometry_msgs::msg::Point32_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__orientation(
    const autoware_auto_geometry_msgs::msg::Quaternion32_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_rate(
    const float & _arg)
  {
    this->heading_rate = _arg;
    return *this;
  }
  Type & set__corners(
    const std::array<geometry_msgs::msg::Point32_<ContainerAllocator>, 4> & _arg)
  {
    this->corners = _arg;
    return *this;
  }
  Type & set__variance(
    const std::array<float, 8> & _arg)
  {
    this->variance = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__vehicle_label(
    const uint8_t & _arg)
  {
    this->vehicle_label = _arg;
    return *this;
  }
  Type & set__signal_label(
    const uint8_t & _arg)
  {
    this->signal_label = _arg;
    return *this;
  }
  Type & set__class_likelihood(
    const float & _arg)
  {
    this->class_likelihood = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_LABEL =
    0u;
  static constexpr uint8_t CAR =
    1u;
  static constexpr uint8_t PEDESTRIAN =
    2u;
  static constexpr uint8_t CYCLIST =
    3u;
  static constexpr uint8_t MOTORCYCLE =
    4u;
  static constexpr uint8_t NO_SIGNAL =
    0u;
  static constexpr uint8_t LEFT_SIGNAL =
    1u;
  static constexpr uint8_t RIGHT_SIGNAL =
    2u;
  static constexpr uint8_t BRAKE =
    3u;
  static constexpr uint32_t POSE_X =
    0u;
  static constexpr uint32_t POSE_Y =
    1u;
  static constexpr uint32_t VELOCITY =
    2u;
  static constexpr uint32_t HEADING =
    3u;
  static constexpr uint32_t TURN_RATE =
    4u;
  static constexpr uint32_t SIZE_X =
    5u;
  static constexpr uint32_t SIZE_Y =
    6u;
  static constexpr uint32_t ACCELERATION =
    7u;

  // pointer types
  using RawPtr =
    autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBox
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_perception_msgs__msg__BoundingBox
    std::shared_ptr<autoware_auto_perception_msgs::msg::BoundingBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBox_ & other) const
  {
    if (this->centroid != other.centroid) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_rate != other.heading_rate) {
      return false;
    }
    if (this->corners != other.corners) {
      return false;
    }
    if (this->variance != other.variance) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->vehicle_label != other.vehicle_label) {
      return false;
    }
    if (this->signal_label != other.signal_label) {
      return false;
    }
    if (this->class_likelihood != other.class_likelihood) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBox_

// alias to use template instance with default allocator
using BoundingBox =
  autoware_auto_perception_msgs::msg::BoundingBox_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::NO_LABEL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::NO_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::LEFT_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::RIGHT_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BoundingBox_<ContainerAllocator>::BRAKE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::POSE_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::POSE_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::HEADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::TURN_RATE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::SIZE_X;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::SIZE_Y;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t BoundingBox_<ContainerAllocator>::ACCELERATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace autoware_auto_perception_msgs

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
