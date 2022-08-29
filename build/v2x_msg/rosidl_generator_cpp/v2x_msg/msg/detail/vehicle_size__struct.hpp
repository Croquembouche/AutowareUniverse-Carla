// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/VehicleSize.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_SIZE__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_SIZE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__VehicleSize __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__VehicleSize __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSize_
{
  using Type = VehicleSize_<ContainerAllocator>;

  explicit VehicleSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ll;
      this->length = 0ll;
    }
  }

  explicit VehicleSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0ll;
      this->length = 0ll;
    }
  }

  // field types and members
  using _width_type =
    int64_t;
  _width_type width;
  using _length_type =
    int64_t;
  _length_type length;

  // setters for named parameter idiom
  Type & set__width(
    const int64_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const int64_t & _arg)
  {
    this->length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::VehicleSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::VehicleSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__VehicleSize
    std::shared_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__VehicleSize
    std::shared_ptr<v2x_msg::msg::VehicleSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSize_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSize_

// alias to use template instance with default allocator
using VehicleSize =
  v2x_msg::msg::VehicleSize_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_SIZE__STRUCT_HPP_
