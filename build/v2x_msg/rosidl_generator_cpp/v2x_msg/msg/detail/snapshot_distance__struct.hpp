// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/SnapshotDistance.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__SnapshotDistance __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__SnapshotDistance __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SnapshotDistance_
{
  using Type = SnapshotDistance_<ContainerAllocator>;

  explicit SnapshotDistance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance1 = 0ll;
      this->speed1 = 0ll;
      this->distance2 = 0ll;
      this->speed2 = 0ll;
    }
  }

  explicit SnapshotDistance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance1 = 0ll;
      this->speed1 = 0ll;
      this->distance2 = 0ll;
      this->speed2 = 0ll;
    }
  }

  // field types and members
  using _distance1_type =
    int64_t;
  _distance1_type distance1;
  using _speed1_type =
    int64_t;
  _speed1_type speed1;
  using _distance2_type =
    int64_t;
  _distance2_type distance2;
  using _speed2_type =
    int64_t;
  _speed2_type speed2;

  // setters for named parameter idiom
  Type & set__distance1(
    const int64_t & _arg)
  {
    this->distance1 = _arg;
    return *this;
  }
  Type & set__speed1(
    const int64_t & _arg)
  {
    this->speed1 = _arg;
    return *this;
  }
  Type & set__distance2(
    const int64_t & _arg)
  {
    this->distance2 = _arg;
    return *this;
  }
  Type & set__speed2(
    const int64_t & _arg)
  {
    this->speed2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::SnapshotDistance_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::SnapshotDistance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SnapshotDistance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::SnapshotDistance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__SnapshotDistance
    std::shared_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__SnapshotDistance
    std::shared_ptr<v2x_msg::msg::SnapshotDistance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SnapshotDistance_ & other) const
  {
    if (this->distance1 != other.distance1) {
      return false;
    }
    if (this->speed1 != other.speed1) {
      return false;
    }
    if (this->distance2 != other.distance2) {
      return false;
    }
    if (this->speed2 != other.speed2) {
      return false;
    }
    return true;
  }
  bool operator!=(const SnapshotDistance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SnapshotDistance_

// alias to use template instance with default allocator
using SnapshotDistance =
  v2x_msg::msg::SnapshotDistance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT_DISTANCE__STRUCT_HPP_
