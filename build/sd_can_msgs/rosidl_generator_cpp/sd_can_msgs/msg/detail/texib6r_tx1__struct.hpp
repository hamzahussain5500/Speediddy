// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/TEXIB6rTx1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__TEXIB6rTx1 __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__TEXIB6rTx1 __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TEXIB6rTx1_
{
  using Type = TEXIB6rTx1_<ContainerAllocator>;

  explicit TEXIB6rTx1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_z = 0.0;
      this->acc_y = 0.0;
      this->acc_x = 0.0;
    }
  }

  explicit TEXIB6rTx1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_z = 0.0;
      this->acc_y = 0.0;
      this->acc_x = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acc_z_type =
    double;
  _acc_z_type acc_z;
  using _acc_y_type =
    double;
  _acc_y_type acc_y;
  using _acc_x_type =
    double;
  _acc_x_type acc_x;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acc_z(
    const double & _arg)
  {
    this->acc_z = _arg;
    return *this;
  }
  Type & set__acc_y(
    const double & _arg)
  {
    this->acc_y = _arg;
    return *this;
  }
  Type & set__acc_x(
    const double & _arg)
  {
    this->acc_x = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__TEXIB6rTx1
    std::shared_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__TEXIB6rTx1
    std::shared_ptr<sd_can_msgs::msg::TEXIB6rTx1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TEXIB6rTx1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acc_z != other.acc_z) {
      return false;
    }
    if (this->acc_y != other.acc_y) {
      return false;
    }
    if (this->acc_x != other.acc_x) {
      return false;
    }
    return true;
  }
  bool operator!=(const TEXIB6rTx1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TEXIB6rTx1_

// alias to use template instance with default allocator
using TEXIB6rTx1 =
  sd_can_msgs::msg::TEXIB6rTx1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__TEXIB6R_TX1__STRUCT_HPP_
