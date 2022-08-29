// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__AccelerationSet4Way __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__AccelerationSet4Way __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccelerationSet4Way_
{
  using Type = AccelerationSet4Way_<ContainerAllocator>;

  explicit AccelerationSet4Way_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0ll;
      this->lat = 0ll;
      this->vert = 0ll;
      this->yaw = 0ll;
    }
  }

  explicit AccelerationSet4Way_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->longitude = 0ll;
      this->lat = 0ll;
      this->vert = 0ll;
      this->yaw = 0ll;
    }
  }

  // field types and members
  using _longitude_type =
    int64_t;
  _longitude_type longitude;
  using _lat_type =
    int64_t;
  _lat_type lat;
  using _vert_type =
    int64_t;
  _vert_type vert;
  using _yaw_type =
    int64_t;
  _yaw_type yaw;

  // setters for named parameter idiom
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
  Type & set__vert(
    const int64_t & _arg)
  {
    this->vert = _arg;
    return *this;
  }
  Type & set__yaw(
    const int64_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__AccelerationSet4Way
    std::shared_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__AccelerationSet4Way
    std::shared_ptr<v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccelerationSet4Way_ & other) const
  {
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->vert != other.vert) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccelerationSet4Way_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccelerationSet4Way_

// alias to use template instance with default allocator
using AccelerationSet4Way =
  v2x_msg::msg::AccelerationSet4Way_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_HPP_
