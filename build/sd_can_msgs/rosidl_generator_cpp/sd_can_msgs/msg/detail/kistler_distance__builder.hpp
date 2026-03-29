// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerDistance.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_DISTANCE__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_DISTANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_distance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerDistance_distance
{
public:
  explicit Init_KistlerDistance_distance(::sd_can_msgs::msg::KistlerDistance & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerDistance distance(::sd_can_msgs::msg::KistlerDistance::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerDistance msg_;
};

class Init_KistlerDistance_header
{
public:
  Init_KistlerDistance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerDistance_distance header(::sd_can_msgs::msg::KistlerDistance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerDistance_distance(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerDistance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerDistance>()
{
  return sd_can_msgs::msg::builder::Init_KistlerDistance_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_DISTANCE__BUILDER_HPP_
