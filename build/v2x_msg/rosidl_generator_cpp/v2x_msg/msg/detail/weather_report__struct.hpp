// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_msg:msg/WeatherReport.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSG__MSG__DETAIL__WEATHER_REPORT__STRUCT_HPP_
#define V2X_MSG__MSG__DETAIL__WEATHER_REPORT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__v2x_msg__msg__WeatherReport __attribute__((deprecated))
#else
# define DEPRECATED__v2x_msg__msg__WeatherReport __declspec(deprecated)
#endif

namespace v2x_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WeatherReport_
{
  using Type = WeatherReport_<ContainerAllocator>;

  explicit WeatherReport_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->israining = 0ll;
      this->rainrate = 0ll;
      this->precipsituation = 0ll;
      this->solarradiation = 0ll;
      this->friction = 0ll;
    }
  }

  explicit WeatherReport_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->israining = 0ll;
      this->rainrate = 0ll;
      this->precipsituation = 0ll;
      this->solarradiation = 0ll;
      this->friction = 0ll;
    }
  }

  // field types and members
  using _israining_type =
    int64_t;
  _israining_type israining;
  using _rainrate_type =
    int64_t;
  _rainrate_type rainrate;
  using _precipsituation_type =
    int64_t;
  _precipsituation_type precipsituation;
  using _solarradiation_type =
    int64_t;
  _solarradiation_type solarradiation;
  using _friction_type =
    int64_t;
  _friction_type friction;

  // setters for named parameter idiom
  Type & set__israining(
    const int64_t & _arg)
  {
    this->israining = _arg;
    return *this;
  }
  Type & set__rainrate(
    const int64_t & _arg)
  {
    this->rainrate = _arg;
    return *this;
  }
  Type & set__precipsituation(
    const int64_t & _arg)
  {
    this->precipsituation = _arg;
    return *this;
  }
  Type & set__solarradiation(
    const int64_t & _arg)
  {
    this->solarradiation = _arg;
    return *this;
  }
  Type & set__friction(
    const int64_t & _arg)
  {
    this->friction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_msg::msg::WeatherReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_msg::msg::WeatherReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::WeatherReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_msg::msg::WeatherReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_msg__msg__WeatherReport
    std::shared_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_msg__msg__WeatherReport
    std::shared_ptr<v2x_msg::msg::WeatherReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WeatherReport_ & other) const
  {
    if (this->israining != other.israining) {
      return false;
    }
    if (this->rainrate != other.rainrate) {
      return false;
    }
    if (this->precipsituation != other.precipsituation) {
      return false;
    }
    if (this->solarradiation != other.solarradiation) {
      return false;
    }
    if (this->friction != other.friction) {
      return false;
    }
    return true;
  }
  bool operator!=(const WeatherReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WeatherReport_

// alias to use template instance with default allocator
using WeatherReport =
  v2x_msg::msg::WeatherReport_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_msg

#endif  // V2X_MSG__MSG__DETAIL__WEATHER_REPORT__STRUCT_HPP_
