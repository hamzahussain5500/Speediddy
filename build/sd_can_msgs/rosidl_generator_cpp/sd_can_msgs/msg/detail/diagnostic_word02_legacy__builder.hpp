// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/diagnostic_word02_legacy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticWord02Legacy_rc_beacon_time_out
{
public:
  explicit Init_DiagnosticWord02Legacy_rc_beacon_time_out(::sd_can_msgs::msg::DiagnosticWord02Legacy & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::DiagnosticWord02Legacy rc_beacon_time_out(::sd_can_msgs::msg::DiagnosticWord02Legacy::_rc_beacon_time_out_type arg)
  {
    msg_.rc_beacon_time_out = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Legacy msg_;
};

class Init_DiagnosticWord02Legacy_rc_force_race_mode
{
public:
  explicit Init_DiagnosticWord02Legacy_rc_force_race_mode(::sd_can_msgs::msg::DiagnosticWord02Legacy & msg)
  : msg_(msg)
  {}
  Init_DiagnosticWord02Legacy_rc_beacon_time_out rc_force_race_mode(::sd_can_msgs::msg::DiagnosticWord02Legacy::_rc_force_race_mode_type arg)
  {
    msg_.rc_force_race_mode = std::move(arg);
    return Init_DiagnosticWord02Legacy_rc_beacon_time_out(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Legacy msg_;
};

class Init_DiagnosticWord02Legacy_header
{
public:
  Init_DiagnosticWord02Legacy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticWord02Legacy_rc_force_race_mode header(::sd_can_msgs::msg::DiagnosticWord02Legacy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticWord02Legacy_rc_force_race_mode(msg_);
  }

private:
  ::sd_can_msgs::msg::DiagnosticWord02Legacy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::DiagnosticWord02Legacy>()
{
  return sd_can_msgs::msg::builder::Init_DiagnosticWord02Legacy_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__BUILDER_HPP_
