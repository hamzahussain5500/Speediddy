// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560Pitot.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_pitot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560Pitot_pitot_air_temp
{
public:
  explicit Init_Badenia560Pitot_pitot_air_temp(::sd_can_msgs::msg::Badenia560Pitot & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560Pitot pitot_air_temp(::sd_can_msgs::msg::Badenia560Pitot::_pitot_air_temp_type arg)
  {
    msg_.pitot_air_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot msg_;
};

class Init_Badenia560Pitot_pitot_absolute_press
{
public:
  explicit Init_Badenia560Pitot_pitot_absolute_press(::sd_can_msgs::msg::Badenia560Pitot & msg)
  : msg_(msg)
  {}
  Init_Badenia560Pitot_pitot_air_temp pitot_absolute_press(::sd_can_msgs::msg::Badenia560Pitot::_pitot_absolute_press_type arg)
  {
    msg_.pitot_absolute_press = std::move(arg);
    return Init_Badenia560Pitot_pitot_air_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot msg_;
};

class Init_Badenia560Pitot_pitot_yaw_press
{
public:
  explicit Init_Badenia560Pitot_pitot_yaw_press(::sd_can_msgs::msg::Badenia560Pitot & msg)
  : msg_(msg)
  {}
  Init_Badenia560Pitot_pitot_absolute_press pitot_yaw_press(::sd_can_msgs::msg::Badenia560Pitot::_pitot_yaw_press_type arg)
  {
    msg_.pitot_yaw_press = std::move(arg);
    return Init_Badenia560Pitot_pitot_absolute_press(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot msg_;
};

class Init_Badenia560Pitot_pitot_front_press
{
public:
  explicit Init_Badenia560Pitot_pitot_front_press(::sd_can_msgs::msg::Badenia560Pitot & msg)
  : msg_(msg)
  {}
  Init_Badenia560Pitot_pitot_yaw_press pitot_front_press(::sd_can_msgs::msg::Badenia560Pitot::_pitot_front_press_type arg)
  {
    msg_.pitot_front_press = std::move(arg);
    return Init_Badenia560Pitot_pitot_yaw_press(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot msg_;
};

class Init_Badenia560Pitot_header
{
public:
  Init_Badenia560Pitot_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560Pitot_pitot_front_press header(::sd_can_msgs::msg::Badenia560Pitot::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560Pitot_pitot_front_press(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560Pitot>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560Pitot_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT__BUILDER_HPP_
