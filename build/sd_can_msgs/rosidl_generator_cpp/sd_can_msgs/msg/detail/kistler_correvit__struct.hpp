// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/KistlerCorrevit.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__KistlerCorrevit __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__KistlerCorrevit __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KistlerCorrevit_
{
  using Type = KistlerCorrevit_<ContainerAllocator>;

  explicit KistlerCorrevit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_x_cor = 0.0;
      this->vel_y_cor = 0.0;
      this->vel_cor = 0.0;
      this->angle_cor = 0.0;
    }
  }

  explicit KistlerCorrevit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_x_cor = 0.0;
      this->vel_y_cor = 0.0;
      this->vel_cor = 0.0;
      this->angle_cor = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vel_x_cor_type =
    double;
  _vel_x_cor_type vel_x_cor;
  using _vel_y_cor_type =
    double;
  _vel_y_cor_type vel_y_cor;
  using _vel_cor_type =
    double;
  _vel_cor_type vel_cor;
  using _angle_cor_type =
    double;
  _angle_cor_type angle_cor;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vel_x_cor(
    const double & _arg)
  {
    this->vel_x_cor = _arg;
    return *this;
  }
  Type & set__vel_y_cor(
    const double & _arg)
  {
    this->vel_y_cor = _arg;
    return *this;
  }
  Type & set__vel_cor(
    const double & _arg)
  {
    this->vel_cor = _arg;
    return *this;
  }
  Type & set__angle_cor(
    const double & _arg)
  {
    this->angle_cor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__KistlerCorrevit
    std::shared_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__KistlerCorrevit
    std::shared_ptr<sd_can_msgs::msg::KistlerCorrevit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KistlerCorrevit_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vel_x_cor != other.vel_x_cor) {
      return false;
    }
    if (this->vel_y_cor != other.vel_y_cor) {
      return false;
    }
    if (this->vel_cor != other.vel_cor) {
      return false;
    }
    if (this->angle_cor != other.angle_cor) {
      return false;
    }
    return true;
  }
  bool operator!=(const KistlerCorrevit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KistlerCorrevit_

// alias to use template instance with default allocator
using KistlerCorrevit =
  sd_can_msgs::msg::KistlerCorrevit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_CORREVIT__STRUCT_HPP_
