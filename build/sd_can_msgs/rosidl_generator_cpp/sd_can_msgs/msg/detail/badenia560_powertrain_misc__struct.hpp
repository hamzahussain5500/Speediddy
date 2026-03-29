// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560PowertrainMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainMisc __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainMisc __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560PowertrainMisc_
{
  using Type = Badenia560PowertrainMisc_<ContainerAllocator>;

  explicit Badenia560PowertrainMisc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b12_soc = 0;
      this->b48_soc = 0;
      this->b12_temp = 0;
      this->b48_temp = 0;
      this->throttle_position = 0.0;
      this->engine_speed_limit = 0.0;
      this->fuel_used_kg = 0.0;
    }
  }

  explicit Badenia560PowertrainMisc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->b12_soc = 0;
      this->b48_soc = 0;
      this->b12_temp = 0;
      this->b48_temp = 0;
      this->throttle_position = 0.0;
      this->engine_speed_limit = 0.0;
      this->fuel_used_kg = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _b12_soc_type =
    uint8_t;
  _b12_soc_type b12_soc;
  using _b48_soc_type =
    uint8_t;
  _b48_soc_type b48_soc;
  using _b12_temp_type =
    uint8_t;
  _b12_temp_type b12_temp;
  using _b48_temp_type =
    uint8_t;
  _b48_temp_type b48_temp;
  using _throttle_position_type =
    double;
  _throttle_position_type throttle_position;
  using _engine_speed_limit_type =
    double;
  _engine_speed_limit_type engine_speed_limit;
  using _fuel_used_kg_type =
    double;
  _fuel_used_kg_type fuel_used_kg;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__b12_soc(
    const uint8_t & _arg)
  {
    this->b12_soc = _arg;
    return *this;
  }
  Type & set__b48_soc(
    const uint8_t & _arg)
  {
    this->b48_soc = _arg;
    return *this;
  }
  Type & set__b12_temp(
    const uint8_t & _arg)
  {
    this->b12_temp = _arg;
    return *this;
  }
  Type & set__b48_temp(
    const uint8_t & _arg)
  {
    this->b48_temp = _arg;
    return *this;
  }
  Type & set__throttle_position(
    const double & _arg)
  {
    this->throttle_position = _arg;
    return *this;
  }
  Type & set__engine_speed_limit(
    const double & _arg)
  {
    this->engine_speed_limit = _arg;
    return *this;
  }
  Type & set__fuel_used_kg(
    const double & _arg)
  {
    this->fuel_used_kg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainMisc
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560PowertrainMisc
    std::shared_ptr<sd_can_msgs::msg::Badenia560PowertrainMisc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560PowertrainMisc_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->b12_soc != other.b12_soc) {
      return false;
    }
    if (this->b48_soc != other.b48_soc) {
      return false;
    }
    if (this->b12_temp != other.b12_temp) {
      return false;
    }
    if (this->b48_temp != other.b48_temp) {
      return false;
    }
    if (this->throttle_position != other.throttle_position) {
      return false;
    }
    if (this->engine_speed_limit != other.engine_speed_limit) {
      return false;
    }
    if (this->fuel_used_kg != other.fuel_used_kg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560PowertrainMisc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560PowertrainMisc_

// alias to use template instance with default allocator
using Badenia560PowertrainMisc =
  sd_can_msgs::msg::Badenia560PowertrainMisc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_POWERTRAIN_MISC__STRUCT_HPP_
