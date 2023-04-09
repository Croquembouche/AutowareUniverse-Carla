// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'accuracy'
#include "v2x_msg/msg/detail/positional_accuracy__struct.hpp"
// Member 'accelset'
#include "v2x_msg/msg/detail/acceleration_set4_way__struct.hpp"
// Member 'brakes'
#include "v2x_msg/msg/detail/brake_system_status__struct.hpp"
// Member 'size'
#include "v2x_msg/msg/detail/vehicle_size__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__BSMCoreData __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__BSMCoreData __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSMCoreData_
{
  using Type = BSMCoreData_<ContainerAllocator>;

  explicit BSMCoreData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accuracy(_init),
    accelset(_init),
    brakes(_init),
    size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->id = "";
      this->secmark = 0ll;
      this->lat = 0ll;
      this->longitude = 0ll;
      this->elev = 0ll;
      this->transmission = 0ll;
      this->speed = 0ll;
      this->heading = 0ll;
      this->angle = 0ll;
    }
  }

  explicit BSMCoreData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    accuracy(_alloc, _init),
    accelset(_alloc, _init),
    brakes(_alloc, _init),
    size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msgcnt = 0ll;
      this->id = "";
      this->secmark = 0ll;
      this->lat = 0ll;
      this->longitude = 0ll;
      this->elev = 0ll;
      this->transmission = 0ll;
      this->speed = 0ll;
      this->heading = 0ll;
      this->angle = 0ll;
    }
  }

  // field types and members
  using _msgcnt_type =
    int64_t;
  _msgcnt_type msgcnt;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _secmark_type =
    int64_t;
  _secmark_type secmark;
  using _lat_type =
    int64_t;
  _lat_type lat;
  using _longitude_type =
    int64_t;
  _longitude_type longitude;
  using _elev_type =
    int64_t;
  _elev_type elev;
  using _accuracy_type =
    v2x_msg::msg::PositionalAccuracy_<ContainerAllocator>;
  _accuracy_type accuracy;
  using _transmission_type =
    int64_t;
  _transmission_type transmission;
  using _speed_type =
    int64_t;
  _speed_type speed;
  using _heading_type =
    int64_t;
  _heading_type heading;
  using _angle_type =
    int64_t;
  _angle_type angle;
  using _accelset_type =
    v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator>;
  _accelset_type accelset;
  using _brakes_type =
    v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator>;
  _brakes_type brakes;
  using _size_type =
    v2x_msg::msg::VehicleSize_<ContainerAllocator>;
  _size_type size;

  // setters for named parameter idiom
  Type & set__msgcnt(
    const int64_t & _arg)
  {
    this->msgcnt = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__secmark(
    const int64_t & _arg)
  {
    this->secmark = _arg;
    return *this;
  }
  Type & set__lat(
    const int64_t & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__longitude(
    const int64_t & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__elev(
    const int64_t & _arg)
  {
    this->elev = _arg;
    return *this;
  }
  Type & set__accuracy(
    const v2x_msg::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }
  Type & set__transmission(
    const int64_t & _arg)
  {
    this->transmission = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__heading(
    const int64_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__angle(
    const int64_t & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__accelset(
    const v2x_msg::msg::AccelerationSet4Way_<ContainerAllocator> & _arg)
  {
    this->accelset = _arg;
    return *this;
  }
  Type & set__brakes(
    const v2x_msg::msg::BrakeSystemStatus_<ContainerAllocator> & _arg)
  {
    this->brakes = _arg;
    return *this;
  }
  Type & set__size(
    const v2x_msg::msg::VehicleSize_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::BSMCoreData_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::BSMCoreData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BSMCoreData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::BSMCoreData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__BSMCoreData
    std::shared_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__BSMCoreData
    std::shared_ptr<v2x_msg::msg::BSMCoreData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSMCoreData_ & other) const
  {
    if (this->msgcnt != other.msgcnt) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->secmark != other.secmark) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->elev != other.elev) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    if (this->transmission != other.transmission) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->accelset != other.accelset) {
      return false;
    }
    if (this->brakes != other.brakes) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSMCoreData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSMCoreData_

// alias to use template instance with default allocator
using BSMCoreData =
  v2x_msg::msg::BSMCoreData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__BSM_CORE_DATA__STRUCT_HPP_
