// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560Pitot1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT1__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_pitot1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560Pitot1_pitot_board_temp
{
public:
  explicit Init_Badenia560Pitot1_pitot_board_temp(::sd_can_msgs::msg::Badenia560Pitot1 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560Pitot1 pitot_board_temp(::sd_can_msgs::msg::Badenia560Pitot1::_pitot_board_temp_type arg)
  {
    msg_.pitot_board_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot1 msg_;
};

class Init_Badenia560Pitot1_pitot_air_temp
{
public:
  explicit Init_Badenia560Pitot1_pitot_air_temp(::sd_can_msgs::msg::Badenia560Pitot1 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Pitot1_pitot_board_temp pitot_air_temp(::sd_can_msgs::msg::Badenia560Pitot1::_pitot_air_temp_type arg)
  {
    msg_.pitot_air_temp = std::move(arg);
    return Init_Badenia560Pitot1_pitot_board_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot1 msg_;
};

class Init_Badenia560Pitot1_header
{
public:
  Init_Badenia560Pitot1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560Pitot1_pitot_air_temp header(::sd_can_msgs::msg::Badenia560Pitot1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560Pitot1_pitot_air_temp(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Pitot1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560Pitot1>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560Pitot1_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_PITOT1__BUILDER_HPP_
