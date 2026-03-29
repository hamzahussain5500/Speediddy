// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/MM710TX2XAX.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__MM710TX2XAX __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__MM710TX2XAX __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MM710TX2XAX_
{
  using Type = MM710TX2XAX_<ContainerAllocator>;

  explicit MM710TX2XAX_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->ax_stat = 0;
      this->msg_cnt = 0;
      this->ax = 0.0;
      this->clu_diag = 0;
      this->roll_rate_stat = 0;
      this->clu_stat = 0;
      this->roll_rate = 0.0;
    }
  }

  explicit MM710TX2XAX_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->ax_stat = 0;
      this->msg_cnt = 0;
      this->ax = 0.0;
      this->clu_diag = 0;
      this->roll_rate_stat = 0;
      this->clu_stat = 0;
      this->roll_rate = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _crc_type =
    uint8_t;
  _crc_type crc;
  using _ax_stat_type =
    uint8_t;
  _ax_stat_type ax_stat;
  using _msg_cnt_type =
    uint8_t;
  _msg_cnt_type msg_cnt;
  using _ax_type =
    double;
  _ax_type ax;
  using _clu_diag_type =
    uint8_t;
  _clu_diag_type clu_diag;
  using _roll_rate_stat_type =
    uint8_t;
  _roll_rate_stat_type roll_rate_stat;
  using _clu_stat_type =
    uint8_t;
  _clu_stat_type clu_stat;
  using _roll_rate_type =
    double;
  _roll_rate_type roll_rate;

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
  Type & set__ax_stat(
    const uint8_t & _arg)
  {
    this->ax_stat = _arg;
    return *this;
  }
  Type & set__msg_cnt(
    const uint8_t & _arg)
  {
    this->msg_cnt = _arg;
    return *this;
  }
  Type & set__ax(
    const double & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__clu_diag(
    const uint8_t & _arg)
  {
    this->clu_diag = _arg;
    return *this;
  }
  Type & set__roll_rate_stat(
    const uint8_t & _arg)
  {
    this->roll_rate_stat = _arg;
    return *this;
  }
  Type & set__clu_stat(
    const uint8_t & _arg)
  {
    this->clu_stat = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const double & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__MM710TX2XAX
    std::shared_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__MM710TX2XAX
    std::shared_ptr<sd_can_msgs::msg::MM710TX2XAX_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MM710TX2XAX_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->ax_stat != other.ax_stat) {
      return false;
    }
    if (this->msg_cnt != other.msg_cnt) {
      return false;
    }
    if (this->ax != other.ax) {
      return false;
    }
    if (this->clu_diag != other.clu_diag) {
      return false;
    }
    if (this->roll_rate_stat != other.roll_rate_stat) {
      return false;
    }
    if (this->clu_stat != other.clu_stat) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const MM710TX2XAX_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MM710TX2XAX_

// alias to use template instance with default allocator
using MM710TX2XAX =
  sd_can_msgs::msg::MM710TX2XAX_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__STRUCT_HPP_
