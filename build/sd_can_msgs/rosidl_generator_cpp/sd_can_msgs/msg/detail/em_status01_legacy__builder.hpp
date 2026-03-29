// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/EMStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/em_status01_legacy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_EMStatus01Legacy_hl_stop_time_to_dec_2
{
public:
  explicit Init_EMStatus01Legacy_hl_stop_time_to_dec_2(::sd_can_msgs::msg::EMStatus01Legacy & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::EMStatus01Legacy hl_stop_time_to_dec_2(::sd_can_msgs::msg::EMStatus01Legacy::_hl_stop_time_to_dec_2_type arg)
  {
    msg_.hl_stop_time_to_dec_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

class Init_EMStatus01Legacy_hl_stop_time_to_dec_1
{
public:
  explicit Init_EMStatus01Legacy_hl_stop_time_to_dec_1(::sd_can_msgs::msg::EMStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_EMStatus01Legacy_hl_stop_time_to_dec_2 hl_stop_time_to_dec_1(::sd_can_msgs::msg::EMStatus01Legacy::_hl_stop_time_to_dec_1_type arg)
  {
    msg_.hl_stop_time_to_dec_1 = std::move(arg);
    return Init_EMStatus01Legacy_hl_stop_time_to_dec_2(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

class Init_EMStatus01Legacy_hl_stop_deceleration_2
{
public:
  explicit Init_EMStatus01Legacy_hl_stop_deceleration_2(::sd_can_msgs::msg::EMStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_EMStatus01Legacy_hl_stop_time_to_dec_1 hl_stop_deceleration_2(::sd_can_msgs::msg::EMStatus01Legacy::_hl_stop_deceleration_2_type arg)
  {
    msg_.hl_stop_deceleration_2 = std::move(arg);
    return Init_EMStatus01Legacy_hl_stop_time_to_dec_1(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

class Init_EMStatus01Legacy_hl_stop_deceleration_1
{
public:
  explicit Init_EMStatus01Legacy_hl_stop_deceleration_1(::sd_can_msgs::msg::EMStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_EMStatus01Legacy_hl_stop_deceleration_2 hl_stop_deceleration_1(::sd_can_msgs::msg::EMStatus01Legacy::_hl_stop_deceleration_1_type arg)
  {
    msg_.hl_stop_deceleration_1 = std::move(arg);
    return Init_EMStatus01Legacy_hl_stop_deceleration_2(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

class Init_EMStatus01Legacy_em_status
{
public:
  explicit Init_EMStatus01Legacy_em_status(::sd_can_msgs::msg::EMStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_EMStatus01Legacy_hl_stop_deceleration_1 em_status(::sd_can_msgs::msg::EMStatus01Legacy::_em_status_type arg)
  {
    msg_.em_status = std::move(arg);
    return Init_EMStatus01Legacy_hl_stop_deceleration_1(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

class Init_EMStatus01Legacy_emb_tank_pressure_bar
{
public:
  explicit Init_EMStatus01Legacy_emb_tank_pressure_bar(::sd_can_msgs::msg::EMStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_EMStatus01Legacy_em_status emb_tank_pressure_bar(::sd_can_msgs::msg::EMStatus01Legacy::_emb_tank_pressure_bar_type arg)
  {
    msg_.emb_tank_pressure_bar = std::move(arg);
    return Init_EMStatus01Legacy_em_status(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

class Init_EMStatus01Legacy_emb_line_pressure_bar
{
public:
  explicit Init_EMStatus01Legacy_emb_line_pressure_bar(::sd_can_msgs::msg::EMStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_EMStatus01Legacy_emb_tank_pressure_bar emb_line_pressure_bar(::sd_can_msgs::msg::EMStatus01Legacy::_emb_line_pressure_bar_type arg)
  {
    msg_.emb_line_pressure_bar = std::move(arg);
    return Init_EMStatus01Legacy_emb_tank_pressure_bar(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

class Init_EMStatus01Legacy_header
{
public:
  Init_EMStatus01Legacy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EMStatus01Legacy_emb_line_pressure_bar header(::sd_can_msgs::msg::EMStatus01Legacy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EMStatus01Legacy_emb_line_pressure_bar(msg_);
  }

private:
  ::sd_can_msgs::msg::EMStatus01Legacy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::EMStatus01Legacy>()
{
  return sd_can_msgs::msg::builder::Init_EMStatus01Legacy_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__EM_STATUS01_LEGACY__BUILDER_HPP_
