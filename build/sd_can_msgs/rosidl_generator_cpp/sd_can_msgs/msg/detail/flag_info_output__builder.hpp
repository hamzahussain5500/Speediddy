// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/FlagInfoOutput.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/flag_info_output__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_FlagInfoOutput_crc_sm
{
public:
  explicit Init_FlagInfoOutput_crc_sm(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::FlagInfoOutput crc_sm(::sd_can_msgs::msg::FlagInfoOutput::_crc_sm_type arg)
  {
    msg_.crc_sm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_sm_car_flag
{
public:
  explicit Init_FlagInfoOutput_sm_car_flag(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  Init_FlagInfoOutput_crc_sm sm_car_flag(::sd_can_msgs::msg::FlagInfoOutput::_sm_car_flag_type arg)
  {
    msg_.sm_car_flag = std::move(arg);
    return Init_FlagInfoOutput_crc_sm(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_sm_track_flag
{
public:
  explicit Init_FlagInfoOutput_sm_track_flag(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  Init_FlagInfoOutput_sm_car_flag sm_track_flag(::sd_can_msgs::msg::FlagInfoOutput::_sm_track_flag_type arg)
  {
    msg_.sm_track_flag = std::move(arg);
    return Init_FlagInfoOutput_sm_car_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_sm_session_type
{
public:
  explicit Init_FlagInfoOutput_sm_session_type(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  Init_FlagInfoOutput_sm_track_flag sm_session_type(::sd_can_msgs::msg::FlagInfoOutput::_sm_session_type_type arg)
  {
    msg_.sm_session_type = std::move(arg);
    return Init_FlagInfoOutput_sm_track_flag(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_spare2_0x7_c
{
public:
  explicit Init_FlagInfoOutput_spare2_0x7_c(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  Init_FlagInfoOutput_sm_session_type spare2_0x7_c(::sd_can_msgs::msg::FlagInfoOutput::_spare2_0x7_c_type arg)
  {
    msg_.spare2_0x7_c = std::move(arg);
    return Init_FlagInfoOutput_sm_session_type(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_spare1_0x7_c
{
public:
  explicit Init_FlagInfoOutput_spare1_0x7_c(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  Init_FlagInfoOutput_spare2_0x7_c spare1_0x7_c(::sd_can_msgs::msg::FlagInfoOutput::_spare1_0x7_c_type arg)
  {
    msg_.spare1_0x7_c = std::move(arg);
    return Init_FlagInfoOutput_spare2_0x7_c(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_free_running_counter
{
public:
  explicit Init_FlagInfoOutput_free_running_counter(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  Init_FlagInfoOutput_spare1_0x7_c free_running_counter(::sd_can_msgs::msg::FlagInfoOutput::_free_running_counter_type arg)
  {
    msg_.free_running_counter = std::move(arg);
    return Init_FlagInfoOutput_spare1_0x7_c(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_led_status
{
public:
  explicit Init_FlagInfoOutput_led_status(::sd_can_msgs::msg::FlagInfoOutput & msg)
  : msg_(msg)
  {}
  Init_FlagInfoOutput_free_running_counter led_status(::sd_can_msgs::msg::FlagInfoOutput::_led_status_type arg)
  {
    msg_.led_status = std::move(arg);
    return Init_FlagInfoOutput_free_running_counter(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

class Init_FlagInfoOutput_header
{
public:
  Init_FlagInfoOutput_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlagInfoOutput_led_status header(::sd_can_msgs::msg::FlagInfoOutput::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FlagInfoOutput_led_status(msg_);
  }

private:
  ::sd_can_msgs::msg::FlagInfoOutput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::FlagInfoOutput>()
{
  return sd_can_msgs::msg::builder::Init_FlagInfoOutput_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__BUILDER_HPP_
