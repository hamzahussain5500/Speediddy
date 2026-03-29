// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/WheelsSpeed01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__WheelsSpeed01 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__WheelsSpeed01 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelsSpeed01_
{
  using Type = WheelsSpeed01_<ContainerAllocator>;

  explicit WheelsSpeed01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wss_speed_fl_rad_s = 0.0;
      this->wss_speed_fr_rad_s = 0.0;
      this->wss_speed_rl_rad_s = 0.0;
      this->wss_speed_rr_rad_s = 0.0;
    }
  }

  explicit WheelsSpeed01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wss_speed_fl_rad_s = 0.0;
      this->wss_speed_fr_rad_s = 0.0;
      this->wss_speed_rl_rad_s = 0.0;
      this->wss_speed_rr_rad_s = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _wss_speed_fl_rad_s_type =
    double;
  _wss_speed_fl_rad_s_type wss_speed_fl_rad_s;
  using _wss_speed_fr_rad_s_type =
    double;
  _wss_speed_fr_rad_s_type wss_speed_fr_rad_s;
  using _wss_speed_rl_rad_s_type =
    double;
  _wss_speed_rl_rad_s_type wss_speed_rl_rad_s;
  using _wss_speed_rr_rad_s_type =
    double;
  _wss_speed_rr_rad_s_type wss_speed_rr_rad_s;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__wss_speed_fl_rad_s(
    const double & _arg)
  {
    this->wss_speed_fl_rad_s = _arg;
    return *this;
  }
  Type & set__wss_speed_fr_rad_s(
    const double & _arg)
  {
    this->wss_speed_fr_rad_s = _arg;
    return *this;
  }
  Type & set__wss_speed_rl_rad_s(
    const double & _arg)
  {
    this->wss_speed_rl_rad_s = _arg;
    return *this;
  }
  Type & set__wss_speed_rr_rad_s(
    const double & _arg)
  {
    this->wss_speed_rr_rad_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__WheelsSpeed01
    std::shared_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__WheelsSpeed01
    std::shared_ptr<sd_can_msgs::msg::WheelsSpeed01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelsSpeed01_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->wss_speed_fl_rad_s != other.wss_speed_fl_rad_s) {
      return false;
    }
    if (this->wss_speed_fr_rad_s != other.wss_speed_fr_rad_s) {
      return false;
    }
    if (this->wss_speed_rl_rad_s != other.wss_speed_rl_rad_s) {
      return false;
    }
    if (this->wss_speed_rr_rad_s != other.wss_speed_rr_rad_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelsSpeed01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelsSpeed01_

// alias to use template instance with default allocator
using WheelsSpeed01 =
  sd_can_msgs::msg::WheelsSpeed01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__WHEELS_SPEED01__STRUCT_HPP_
