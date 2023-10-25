// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Snapshot.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__SNAPSHOT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__SNAPSHOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'theposition'
#include "v2x_msg/msg/detail/full_position_vector__struct.hpp"
// Member 'safetyext'
#include "v2x_msg/msg/detail/vehicle_safety_extensions__struct.hpp"
// Member 'dataset'
#include "v2x_msg/msg/detail/vehicle_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Snapshot __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Snapshot __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Snapshot_
{
  using Type = Snapshot_<ContainerAllocator>;

  explicit Snapshot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : theposition(_init),
    safetyext(_init),
    dataset(_init)
  {
    (void)_init;
  }

  explicit Snapshot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : theposition(_alloc, _init),
    safetyext(_alloc, _init),
    dataset(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _theposition_type =
    v2x_msg::msg::FullPositionVector_<ContainerAllocator>;
  _theposition_type theposition;
  using _safetyext_type =
    v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator>;
  _safetyext_type safetyext;
  using _dataset_type =
    v2x_msg::msg::VehicleStatus_<ContainerAllocator>;
  _dataset_type dataset;

  // setters for named parameter idiom
  Type & set__theposition(
    const v2x_msg::msg::FullPositionVector_<ContainerAllocator> & _arg)
  {
    this->theposition = _arg;
    return *this;
  }
  Type & set__safetyext(
    const v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator> & _arg)
  {
    this->safetyext = _arg;
    return *this;
  }
  Type & set__dataset(
    const v2x_msg::msg::VehicleStatus_<ContainerAllocator> & _arg)
  {
    this->dataset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Snapshot_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Snapshot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Snapshot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Snapshot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Snapshot
    std::shared_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Snapshot
    std::shared_ptr<v2x_msg::msg::Snapshot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Snapshot_ & other) const
  {
    if (this->theposition != other.theposition) {
      return false;
    }
    if (this->safetyext != other.safetyext) {
      return false;
    }
    if (this->dataset != other.dataset) {
      return false;
    }
    return true;
  }
  bool operator!=(const Snapshot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Snapshot_

// alias to use template instance with default allocator
using Snapshot =
  v2x_msg::msg::Snapshot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__SNAPSHOT__STRUCT_HPP_
