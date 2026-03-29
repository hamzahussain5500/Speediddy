// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/KistlerPitchRoll.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_PITCH_ROLL__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_PITCH_ROLL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/kistler_pitch_roll__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_KistlerPitchRoll_radius
{
public:
  explicit Init_KistlerPitchRoll_radius(::sd_can_msgs::msg::KistlerPitchRoll & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::KistlerPitchRoll radius(::sd_can_msgs::msg::KistlerPitchRoll::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerPitchRoll msg_;
};

class Init_KistlerPitchRoll_timestamp
{
public:
  explicit Init_KistlerPitchRoll_timestamp(::sd_can_msgs::msg::KistlerPitchRoll & msg)
  : msg_(msg)
  {}
  Init_KistlerPitchRoll_radius timestamp(::sd_can_msgs::msg::KistlerPitchRoll::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_KistlerPitchRoll_radius(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerPitchRoll msg_;
};

class Init_KistlerPitchRoll_roll
{
public:
  explicit Init_KistlerPitchRoll_roll(::sd_can_msgs::msg::KistlerPitchRoll & msg)
  : msg_(msg)
  {}
  Init_KistlerPitchRoll_timestamp roll(::sd_can_msgs::msg::KistlerPitchRoll::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_KistlerPitchRoll_timestamp(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerPitchRoll msg_;
};

class Init_KistlerPitchRoll_pitch
{
public:
  explicit Init_KistlerPitchRoll_pitch(::sd_can_msgs::msg::KistlerPitchRoll & msg)
  : msg_(msg)
  {}
  Init_KistlerPitchRoll_roll pitch(::sd_can_msgs::msg::KistlerPitchRoll::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_KistlerPitchRoll_roll(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerPitchRoll msg_;
};

class Init_KistlerPitchRoll_header
{
public:
  Init_KistlerPitchRoll_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KistlerPitchRoll_pitch header(::sd_can_msgs::msg::KistlerPitchRoll::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KistlerPitchRoll_pitch(msg_);
  }

private:
  ::sd_can_msgs::msg::KistlerPitchRoll msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::KistlerPitchRoll>()
{
  return sd_can_msgs::msg::builder::Init_KistlerPitchRoll_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_PITCH_ROLL__BUILDER_HPP_
