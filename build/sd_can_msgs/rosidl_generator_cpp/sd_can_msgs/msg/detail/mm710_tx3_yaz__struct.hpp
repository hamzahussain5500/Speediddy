// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/MM710TX3YAZ.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__MM710TX3YAZ __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__MM710TX3YAZ __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MM710TX3YAZ_
{
  using Type = MM710TX3YAZ_<ContainerAllocator>;

  explicit MM710TX3YAZ_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->az_stat = 0;
      this->msg_cnt = 0;
      this->az = 0.0;
      this->pitch_rate_stat = 0;
      this->hw_index = 0;
      this->pitch_rate = 0.0;
    }
  }

  explicit MM710TX3YAZ_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->crc = 0;
      this->az_stat = 0;
      this->msg_cnt = 0;
      this->az = 0.0;
      this->pitch_rate_stat = 0;
      this->hw_index = 0;
      this->pitch_rate = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _crc_type =
    uint8_t;
  _crc_type crc;
  using _az_stat_type =
    uint8_t;
  _az_stat_type az_stat;
  using _msg_cnt_type =
    uint8_t;
  _msg_cnt_type msg_cnt;
  using _az_type =
    double;
  _az_type az;
  using _pitch_rate_stat_type =
    uint8_t;
  _pitch_rate_stat_type pitch_rate_stat;
  using _hw_index_type =
    int8_t;
  _hw_index_type hw_index;
  using _pitch_rate_type =
    double;
  _pitch_rate_type pitch_rate;

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
  Type & set__az_stat(
    const uint8_t & _arg)
  {
    this->az_stat = _arg;
    return *this;
  }
  Type & set__msg_cnt(
    const uint8_t & _arg)
  {
    this->msg_cnt = _arg;
    return *this;
  }
  Type & set__az(
    const double & _arg)
  {
    this->az = _arg;
    return *this;
  }
  Type & set__pitch_rate_stat(
    const uint8_t & _arg)
  {
    this->pitch_rate_stat = _arg;
    return *this;
  }
  Type & set__hw_index(
    const int8_t & _arg)
  {
    this->hw_index = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const double & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__MM710TX3YAZ
    std::shared_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__MM710TX3YAZ
    std::shared_ptr<sd_can_msgs::msg::MM710TX3YAZ_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MM710TX3YAZ_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->az_stat != other.az_stat) {
      return false;
    }
    if (this->msg_cnt != other.msg_cnt) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    if (this->pitch_rate_stat != other.pitch_rate_stat) {
      return false;
    }
    if (this->hw_index != other.hw_index) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const MM710TX3YAZ_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MM710TX3YAZ_

// alias to use template instance with default allocator
using MM710TX3YAZ =
  sd_can_msgs::msg::MM710TX3YAZ_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__STRUCT_HPP_
