// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560BadeniaMisc.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560BadeniaMisc __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560BadeniaMisc __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560BadeniaMisc_
{
  using Type = Badenia560BadeniaMisc_<ContainerAllocator>;

  explicit Badenia560BadeniaMisc_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lap_time = 0.0;
      this->lap_distance = 0.0;
      this->lap_number = 0;
      this->battery_voltage = 0.0;
    }
  }

  explicit Badenia560BadeniaMisc_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lap_time = 0.0;
      this->lap_distance = 0.0;
      this->lap_number = 0;
      this->battery_voltage = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lap_time_type =
    double;
  _lap_time_type lap_time;
  using _lap_distance_type =
    double;
  _lap_distance_type lap_distance;
  using _lap_number_type =
    uint8_t;
  _lap_number_type lap_number;
  using _battery_voltage_type =
    double;
  _battery_voltage_type battery_voltage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lap_time(
    const double & _arg)
  {
    this->lap_time = _arg;
    return *this;
  }
  Type & set__lap_distance(
    const double & _arg)
  {
    this->lap_distance = _arg;
    return *this;
  }
  Type & set__lap_number(
    const uint8_t & _arg)
  {
    this->lap_number = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const double & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560BadeniaMisc
    std::shared_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560BadeniaMisc
    std::shared_ptr<sd_can_msgs::msg::Badenia560BadeniaMisc_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560BadeniaMisc_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lap_time != other.lap_time) {
      return false;
    }
    if (this->lap_distance != other.lap_distance) {
      return false;
    }
    if (this->lap_number != other.lap_number) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560BadeniaMisc_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560BadeniaMisc_

// alias to use template instance with default allocator
using Badenia560BadeniaMisc =
  sd_can_msgs::msg::Badenia560BadeniaMisc_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_BADENIA_MISC__STRUCT_HPP_
