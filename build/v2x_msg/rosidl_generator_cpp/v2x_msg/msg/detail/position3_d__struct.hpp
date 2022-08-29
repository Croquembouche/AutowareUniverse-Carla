// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/Position3D.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__POSITION3_D__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__POSITION3_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__Position3D __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__Position3D __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Position3D_
{
  using Type = Position3D_<ContainerAllocator>;

  explicit Position3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0ll;
      this->longitude = 0ll;
      this->elevation = 0ll;
    }
  }

  explicit Position3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0ll;
      this->longitude = 0ll;
      this->elevation = 0ll;
    }
  }

  // field types and members
  using _latitude_type =
    int64_t;
  _latitude_type latitude;
  using _longitude_type =
    int64_t;
  _longitude_type longitude;
  using _elevation_type =
    int64_t;
  _elevation_type elevation;

  // setters for named parameter idiom
  Type & set__latitude(
    const int64_t & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const int64_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__elevation(
    const int64_t & _arg)
  {
    this->elevation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::Position3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::Position3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::Position3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::Position3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Position3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Position3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::Position3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::Position3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::Position3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::Position3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__Position3D
    std::shared_ptr<v2x_msg::msg::Position3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__Position3D
    std::shared_ptr<v2x_msg::msg::Position3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Position3D_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    return true;
  }
  bool operator!=(const Position3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Position3D_

// alias to use template instance with default allocator
using Position3D =
  v2x_msg::msg::Position3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__POSITION3_D__STRUCT_HPP_
