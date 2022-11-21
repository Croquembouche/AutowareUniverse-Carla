// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/VehicleData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'bumpers'
#include "v2x_msg/msg/detail/bumper_heights__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__VehicleData __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__VehicleData __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleData_
{
  using Type = VehicleData_<ContainerAllocator>;

  explicit VehicleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bumpers(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ll;
      this->mass = 0ll;
      this->trailerweight = 0ll;
      this->type = 0ll;
    }
  }

  explicit VehicleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bumpers(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height = 0ll;
      this->mass = 0ll;
      this->trailerweight = 0ll;
      this->type = 0ll;
    }
  }

  // field types and members
  using _height_type =
    int64_t;
  _height_type height;
  using _bumpers_type =
    v2x_msg::msg::BumperHeights_<ContainerAllocator>;
  _bumpers_type bumpers;
  using _mass_type =
    int64_t;
  _mass_type mass;
  using _trailerweight_type =
    int64_t;
  _trailerweight_type trailerweight;
  using _type_type =
    int64_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__height(
    const int64_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__bumpers(
    const v2x_msg::msg::BumperHeights_<ContainerAllocator> & _arg)
  {
    this->bumpers = _arg;
    return *this;
  }
  Type & set__mass(
    const int64_t & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__trailerweight(
    const int64_t & _arg)
  {
    this->trailerweight = _arg;
    return *this;
  }
  Type & set__type(
    const int64_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::VehicleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::VehicleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__VehicleData
    std::shared_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__VehicleData
    std::shared_ptr<v2x_msg::msg::VehicleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleData_ & other) const
  {
    if (this->height != other.height) {
      return false;
    }
    if (this->bumpers != other.bumpers) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->trailerweight != other.trailerweight) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleData_

// alias to use template instance with default allocator
using VehicleData =
  v2x_msg::msg::VehicleData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
