// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/BSUStatus01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/bsu_status01_legacy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_BSUStatus01Legacy_abs_external_enable_ack
{
public:
  explicit Init_BSUStatus01Legacy_abs_external_enable_ack(::sd_can_msgs::msg::BSUStatus01Legacy & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::BSUStatus01Legacy abs_external_enable_ack(::sd_can_msgs::msg::BSUStatus01Legacy::_abs_external_enable_ack_type arg)
  {
    msg_.abs_external_enable_ack = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

class Init_BSUStatus01Legacy_bsu_status
{
public:
  explicit Init_BSUStatus01Legacy_bsu_status(::sd_can_msgs::msg::BSUStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Legacy_abs_external_enable_ack bsu_status(::sd_can_msgs::msg::BSUStatus01Legacy::_bsu_status_type arg)
  {
    msg_.bsu_status = std::move(arg);
    return Init_BSUStatus01Legacy_abs_external_enable_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

class Init_BSUStatus01Legacy_bsu_alive_counter
{
public:
  explicit Init_BSUStatus01Legacy_bsu_alive_counter(::sd_can_msgs::msg::BSUStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Legacy_bsu_status bsu_alive_counter(::sd_can_msgs::msg::BSUStatus01Legacy::_bsu_alive_counter_type arg)
  {
    msg_.bsu_alive_counter = std::move(arg);
    return Init_BSUStatus01Legacy_bsu_status(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

class Init_BSUStatus01Legacy_bsu_ml_stop_activated
{
public:
  explicit Init_BSUStatus01Legacy_bsu_ml_stop_activated(::sd_can_msgs::msg::BSUStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Legacy_bsu_alive_counter bsu_ml_stop_activated(::sd_can_msgs::msg::BSUStatus01Legacy::_bsu_ml_stop_activated_type arg)
  {
    msg_.bsu_ml_stop_activated = std::move(arg);
    return Init_BSUStatus01Legacy_bsu_alive_counter(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

class Init_BSUStatus01Legacy_bsu_em_stop_activated
{
public:
  explicit Init_BSUStatus01Legacy_bsu_em_stop_activated(::sd_can_msgs::msg::BSUStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Legacy_bsu_ml_stop_activated bsu_em_stop_activated(::sd_can_msgs::msg::BSUStatus01Legacy::_bsu_em_stop_activated_type arg)
  {
    msg_.bsu_em_stop_activated = std::move(arg);
    return Init_BSUStatus01Legacy_bsu_ml_stop_activated(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

class Init_BSUStatus01Legacy_bsu_hl_warning
{
public:
  explicit Init_BSUStatus01Legacy_bsu_hl_warning(::sd_can_msgs::msg::BSUStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Legacy_bsu_em_stop_activated bsu_hl_warning(::sd_can_msgs::msg::BSUStatus01Legacy::_bsu_hl_warning_type arg)
  {
    msg_.bsu_hl_warning = std::move(arg);
    return Init_BSUStatus01Legacy_bsu_em_stop_activated(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

class Init_BSUStatus01Legacy_bsu_hl_stop_request
{
public:
  explicit Init_BSUStatus01Legacy_bsu_hl_stop_request(::sd_can_msgs::msg::BSUStatus01Legacy & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Legacy_bsu_hl_warning bsu_hl_stop_request(::sd_can_msgs::msg::BSUStatus01Legacy::_bsu_hl_stop_request_type arg)
  {
    msg_.bsu_hl_stop_request = std::move(arg);
    return Init_BSUStatus01Legacy_bsu_hl_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

class Init_BSUStatus01Legacy_header
{
public:
  Init_BSUStatus01Legacy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSUStatus01Legacy_bsu_hl_stop_request header(::sd_can_msgs::msg::BSUStatus01Legacy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BSUStatus01Legacy_bsu_hl_stop_request(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Legacy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::BSUStatus01Legacy>()
{
  return sd_can_msgs::msg::builder::Init_BSUStatus01Legacy_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_LEGACY__BUILDER_HPP_
