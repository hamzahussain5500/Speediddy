// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560Pitot0.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT0__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT0__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560Pitot0 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560Pitot0 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560Pitot0_
{
  using Type = Badenia560Pitot0_<ContainerAllocator>;

  explicit Badenia560Pitot0_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitot_front_press = 0.0;
      this->pitot_yaw_press = 0.0;
      this->pitot_yaw_angle = 0.0;
      this->pitot_absolute_press = 0.0;
    }
  }

  explicit Badenia560Pitot0_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitot_front_press = 0.0;
      this->pitot_yaw_press = 0.0;
      this->pitot_yaw_angle = 0.0;
      this->pitot_absolute_press = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pitot_front_press_type =
    double;
  _pitot_front_press_type pitot_front_press;
  using _pitot_yaw_press_type =
    double;
  _pitot_yaw_press_type pitot_yaw_press;
  using _pitot_yaw_angle_type =
    double;
  _pitot_yaw_angle_type pitot_yaw_angle;
  using _pitot_absolute_press_type =
    double;
  _pitot_absolute_press_type pitot_absolute_press;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pitot_front_press(
    const double & _arg)
  {
    this->pitot_front_press = _arg;
    return *this;
  }
  Type & set__pitot_yaw_press(
    const double & _arg)
  {
    this->pitot_yaw_press = _arg;
    return *this;
  }
  Type & set__pitot_yaw_angle(
    const double & _arg)
  {
    this->pitot_yaw_angle = _arg;
    return *this;
  }
  Type & set__pitot_absolute_press(
    const double & _arg)
  {
    this->pitot_absolute_press = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560Pitot0
    std::shared_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560Pitot0
    std::shared_ptr<sd_can_msgs::msg::Badenia560Pitot0_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560Pitot0_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pitot_front_press != other.pitot_front_press) {
      return false;
    }
    if (this->pitot_yaw_press != other.pitot_yaw_press) {
      return false;
    }
    if (this->pitot_yaw_angle != other.pitot_yaw_angle) {
      return false;
    }
    if (this->pitot_absolute_press != other.pitot_absolute_press) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560Pitot0_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560Pitot0_

// alias to use template instance with default allocator
using Badenia560Pitot0 =
  sd_can_msgs::msg::Badenia560Pitot0_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT0__STRUCT_HPP_
