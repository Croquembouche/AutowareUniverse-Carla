// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from autoware_auto_geometry_msgs:msg/RelativePositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
#define AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__STRUCT_HPP_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped __attribute__((deprecated))
#else
# define DEPRECATED__autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped __declspec(deprecated)
#endif

namespace autoware_auto_geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RelativePositionWithCovarianceStamped_
{
  using Type = RelativePositionWithCovarianceStamped_<ContainerAllocator>;

  explicit RelativePositionWithCovarianceStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  explicit RelativePositionWithCovarianceStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    child_frame_id(_alloc),
    position(_alloc, _init),
    covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_frame_id = "";
      std::fill<typename std::array<double, 9>::iterator, double>(this->covariance.begin(), this->covariance.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _child_frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _child_frame_id_type child_frame_id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _covariance_type =
    std::array<double, 9>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__child_frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->child_frame_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::array<double, 9> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped
    std::shared_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__autoware_auto_geometry_msgs__msg__RelativePositionWithCovarianceStamped
    std::shared_ptr<autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RelativePositionWithCovarianceStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->child_frame_id != other.child_frame_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const RelativePositionWithCovarianceStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RelativePositionWithCovarianceStamped_

// alias to use template instance with default allocator
using RelativePositionWithCovarianceStamped =
  autoware_auto_geometry_msgs::msg::RelativePositionWithCovarianceStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace autoware_auto_geometry_msgs

#endif  // AUTOWARE_AUTO_GEOMETRY_MSGS__MSG__DETAIL__RELATIVE_POSITION_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
