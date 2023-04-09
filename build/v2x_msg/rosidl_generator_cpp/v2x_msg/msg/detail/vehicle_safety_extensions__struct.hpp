// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pathhistory'
#include "v2x_msg/msg/detail/path_history__struct.hpp"
// Member 'pathprediction'
#include "v2x_msg/msg/detail/path_prediction__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__VehicleSafetyExtensions __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__VehicleSafetyExtensions __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSafetyExtensions_
{
  using Type = VehicleSafetyExtensions_<ContainerAllocator>;

  explicit VehicleSafetyExtensions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pathhistory(_init),
    pathprediction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicleeventflags = "";
      this->texteriorlights = "";
    }
  }

  explicit VehicleSafetyExtensions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicleeventflags(_alloc),
    pathhistory(_alloc, _init),
    pathprediction(_alloc, _init),
    texteriorlights(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vehicleeventflags = "";
      this->texteriorlights = "";
    }
  }

  // field types and members
  using _vehicleeventflags_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _vehicleeventflags_type vehicleeventflags;
  using _pathhistory_type =
    v2x_msg::msg::PathHistory_<ContainerAllocator>;
  _pathhistory_type pathhistory;
  using _pathprediction_type =
    v2x_msg::msg::PathPrediction_<ContainerAllocator>;
  _pathprediction_type pathprediction;
  using _texteriorlights_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _texteriorlights_type texteriorlights;

  // setters for named parameter idiom
  Type & set__vehicleeventflags(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->vehicleeventflags = _arg;
    return *this;
  }
  Type & set__pathhistory(
    const v2x_msg::msg::PathHistory_<ContainerAllocator> & _arg)
  {
    this->pathhistory = _arg;
    return *this;
  }
  Type & set__pathprediction(
    const v2x_msg::msg::PathPrediction_<ContainerAllocator> & _arg)
  {
    this->pathprediction = _arg;
    return *this;
  }
  Type & set__texteriorlights(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->texteriorlights = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__VehicleSafetyExtensions
    std::shared_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__VehicleSafetyExtensions
    std::shared_ptr<v2x_msg::msg::VehicleSafetyExtensions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSafetyExtensions_ & other) const
  {
    if (this->vehicleeventflags != other.vehicleeventflags) {
      return false;
    }
    if (this->pathhistory != other.pathhistory) {
      return false;
    }
    if (this->pathprediction != other.pathprediction) {
      return false;
    }
    if (this->texteriorlights != other.texteriorlights) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSafetyExtensions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSafetyExtensions_

// alias to use template instance with default allocator
using VehicleSafetyExtensions =
  v2x_msg::msg::VehicleSafetyExtensions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__STRUCT_HPP_
