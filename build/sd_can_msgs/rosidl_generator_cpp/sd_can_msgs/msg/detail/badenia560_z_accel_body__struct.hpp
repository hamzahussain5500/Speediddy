// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sd_can_msgs:msg/Badenia560ZAccelBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__STRUCT_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__STRUCT_HPP_

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
# define DEPRECATED__sd_can_msgs__msg__Badenia560ZAccelBody __attribute__((deprecated))
#else
# define DEPRECATED__sd_can_msgs__msg__Badenia560ZAccelBody __declspec(deprecated)
#endif

namespace sd_can_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Badenia560ZAccelBody_
{
  using Type = Badenia560ZAccelBody_<ContainerAllocator>;

  explicit Badenia560ZAccelBody_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gz_body_fr = 0.0;
      this->gz_body_rr = 0.0;
    }
  }

  explicit Badenia560ZAccelBody_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gz_body_fr = 0.0;
      this->gz_body_rr = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gz_body_fr_type =
    double;
  _gz_body_fr_type gz_body_fr;
  using _gz_body_rr_type =
    double;
  _gz_body_rr_type gz_body_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gz_body_fr(
    const double & _arg)
  {
    this->gz_body_fr = _arg;
    return *this;
  }
  Type & set__gz_body_rr(
    const double & _arg)
  {
    this->gz_body_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator> *;
  using ConstRawPtr =
    const sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560ZAccelBody
    std::shared_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sd_can_msgs__msg__Badenia560ZAccelBody
    std::shared_ptr<sd_can_msgs::msg::Badenia560ZAccelBody_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Badenia560ZAccelBody_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gz_body_fr != other.gz_body_fr) {
      return false;
    }
    if (this->gz_body_rr != other.gz_body_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Badenia560ZAccelBody_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Badenia560ZAccelBody_

// alias to use template instance with default allocator
using Badenia560ZAccelBody =
  sd_can_msgs::msg::Badenia560ZAccelBody_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_Z_ACCEL_BODY__STRUCT_HPP_
