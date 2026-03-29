// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/MM710TX1ZAY.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__MM710TX1ZAY __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__MM710TX1ZAY __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MM710TX1ZAY_
{
  using Type = MM710TX1ZAY_<ContainerAllocator>;

  explicit MM710TX1ZAY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->ay_stat = 0;
      this->msg_cnt = 0;
      this->ay = 0.0;
      this->temp_rate_z = 0.0;
      this->yaw_rate_stat = 0;
      this->clu_stat = 0;
      this->yaw_rate = 0.0;
    }
  }

  explicit MM710TX1ZAY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->ay_stat = 0;
      this->msg_cnt = 0;
      this->ay = 0.0;
      this->temp_rate_z = 0.0;
      this->yaw_rate_stat = 0;
      this->clu_stat = 0;
      this->yaw_rate = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _crc_type =
    uint8_t;
  _crc_type crc;
  using _ay_stat_type =
    uint8_t;
  _ay_stat_type ay_stat;
  using _msg_cnt_type =
    uint8_t;
  _msg_cnt_type msg_cnt;
  using _ay_type =
    double;
  _ay_type ay;
  using _temp_rate_z_type =
    double;
  _temp_rate_z_type temp_rate_z;
  using _yaw_rate_stat_type =
    uint8_t;
  _yaw_rate_stat_type yaw_rate_stat;
  using _clu_stat_type =
    uint8_t;
  _clu_stat_type clu_stat;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__crc(
    const uint8_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }
  Type & set__ay_stat(
    const uint8_t & _arg)
  {
    this->ay_stat = _arg;
    return *this;
  }
  Type & set__msg_cnt(
    const uint8_t & _arg)
  {
    this->msg_cnt = _arg;
    return *this;
  }
  Type & set__ay(
    const double & _arg)
  {
    this->ay = _arg;
    return *this;
  }
  Type & set__temp_rate_z(
    const double & _arg)
  {
    this->temp_rate_z = _arg;
    return *this;
  }
  Type & set__yaw_rate_stat(
    const uint8_t & _arg)
  {
    this->yaw_rate_stat = _arg;
    return *this;
  }
  Type & set__clu_stat(
    const uint8_t & _arg)
  {
    this->clu_stat = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__MM710TX1ZAY
    std::shared_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__MM710TX1ZAY
    std::shared_ptr<sd_can_msgs::msg::MM710TX1ZAY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MM710TX1ZAY_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->ay_stat != other.ay_stat) {
      return false;
    }
    if (this->msg_cnt != other.msg_cnt) {
      return false;
    }
    if (this->ay != other.ay) {
      return false;
    }
    if (this->temp_rate_z != other.temp_rate_z) {
      return false;
    }
    if (this->yaw_rate_stat != other.yaw_rate_stat) {
      return false;
    }
    if (this->clu_stat != other.clu_stat) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const MM710TX1ZAY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MM710TX1ZAY_

// alias to use template instance with default allocator
using MM710TX1ZAY =
  sd_can_msgs::msg::MM710TX1ZAY_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__STRUCT_HPP_
