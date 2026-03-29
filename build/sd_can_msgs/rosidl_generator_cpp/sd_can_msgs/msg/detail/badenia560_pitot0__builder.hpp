// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560Pitot0.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT0__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT0__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_pitot0__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560Pitot0_pitot_absolute_press
{
public:
  explicit Init_Badenia560Pitot0_pitot_absolute_press(::sd_can_msgs::msg::Badenia560Pitot0 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560Pitot0 pitot_absolute_press(::sd_can_msgs::msg::Badenia560Pitot0::_pitot_absolute_press_type arg)
  {
    msg_.pitot_absolute_press = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot0 msg_;
};

class Init_Badenia560Pitot0_pitot_yaw_angle
{
public:
  explicit Init_Badenia560Pitot0_pitot_yaw_angle(::sd_can_msgs::msg::Badenia560Pitot0 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Pitot0_pitot_absolute_press pitot_yaw_angle(::sd_can_msgs::msg::Badenia560Pitot0::_pitot_yaw_angle_type arg)
  {
    msg_.pitot_yaw_angle = std::move(arg);
    return Init_Badenia560Pitot0_pitot_absolute_press(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot0 msg_;
};

class Init_Badenia560Pitot0_pitot_yaw_press
{
public:
  explicit Init_Badenia560Pitot0_pitot_yaw_press(::sd_can_msgs::msg::Badenia560Pitot0 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Pitot0_pitot_yaw_angle pitot_yaw_press(::sd_can_msgs::msg::Badenia560Pitot0::_pitot_yaw_press_type arg)
  {
    msg_.pitot_yaw_press = std::move(arg);
    return Init_Badenia560Pitot0_pitot_yaw_angle(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot0 msg_;
};

class Init_Badenia560Pitot0_pitot_front_press
{
public:
  explicit Init_Badenia560Pitot0_pitot_front_press(::sd_can_msgs::msg::Badenia560Pitot0 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Pitot0_pitot_yaw_press pitot_front_press(::sd_can_msgs::msg::Badenia560Pitot0::_pitot_front_press_type arg)
  {
    msg_.pitot_front_press = std::move(arg);
    return Init_Badenia560Pitot0_pitot_yaw_press(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot0 msg_;
};

class Init_Badenia560Pitot0_header
{
public:
  Init_Badenia560Pitot0_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560Pitot0_pitot_front_press header(::sd_can_msgs::msg::Badenia560Pitot0::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560Pitot0_pitot_front_press(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot0 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560Pitot0>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560Pitot0_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT0__BUILDER_HPP_
