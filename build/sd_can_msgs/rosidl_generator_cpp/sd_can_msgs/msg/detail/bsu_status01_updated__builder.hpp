// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/BSUStatus01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_UPDATED__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_UPDATED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/bsu_status01_updated__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_BSUStatus01Updated_abs_external_enable_ack
{
public:
  explicit Init_BSUStatus01Updated_abs_external_enable_ack(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::BSUStatus01Updated abs_external_enable_ack(::sd_can_msgs::msg::BSUStatus01Updated::_abs_external_enable_ack_type arg)
  {
    msg_.abs_external_enable_ack = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_status
{
public:
  explicit Init_BSUStatus01Updated_bsu_status(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_abs_external_enable_ack bsu_status(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_status_type arg)
  {
    msg_.bsu_status = std::move(arg);
    return Init_BSUStatus01Updated_abs_external_enable_ack(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_alive_counter
{
public:
  explicit Init_BSUStatus01Updated_bsu_alive_counter(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_bsu_status bsu_alive_counter(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_alive_counter_type arg)
  {
    msg_.bsu_alive_counter = std::move(arg);
    return Init_BSUStatus01Updated_bsu_status(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_ml_stop_activated
{
public:
  explicit Init_BSUStatus01Updated_bsu_ml_stop_activated(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_bsu_alive_counter bsu_ml_stop_activated(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_ml_stop_activated_type arg)
  {
    msg_.bsu_ml_stop_activated = std::move(arg);
    return Init_BSUStatus01Updated_bsu_alive_counter(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_em_stop_activated
{
public:
  explicit Init_BSUStatus01Updated_bsu_em_stop_activated(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_bsu_ml_stop_activated bsu_em_stop_activated(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_em_stop_activated_type arg)
  {
    msg_.bsu_em_stop_activated = std::move(arg);
    return Init_BSUStatus01Updated_bsu_ml_stop_activated(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_hl_warning
{
public:
  explicit Init_BSUStatus01Updated_bsu_hl_warning(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_bsu_em_stop_activated bsu_hl_warning(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_hl_warning_type arg)
  {
    msg_.bsu_hl_warning = std::move(arg);
    return Init_BSUStatus01Updated_bsu_em_stop_activated(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_hl_stop_request
{
public:
  explicit Init_BSUStatus01Updated_bsu_hl_stop_request(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_bsu_hl_warning bsu_hl_stop_request(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_hl_stop_request_type arg)
  {
    msg_.bsu_hl_stop_request = std::move(arg);
    return Init_BSUStatus01Updated_bsu_hl_warning(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_limp_mode_activated
{
public:
  explicit Init_BSUStatus01Updated_bsu_limp_mode_activated(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_bsu_hl_stop_request bsu_limp_mode_activated(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_limp_mode_activated_type arg)
  {
    msg_.bsu_limp_mode_activated = std::move(arg);
    return Init_BSUStatus01Updated_bsu_hl_stop_request(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_bsu_switch_off_req
{
public:
  explicit Init_BSUStatus01Updated_bsu_switch_off_req(::sd_can_msgs::msg::BSUStatus01Updated & msg)
  : msg_(msg)
  {}
  Init_BSUStatus01Updated_bsu_limp_mode_activated bsu_switch_off_req(::sd_can_msgs::msg::BSUStatus01Updated::_bsu_switch_off_req_type arg)
  {
    msg_.bsu_switch_off_req = std::move(arg);
    return Init_BSUStatus01Updated_bsu_limp_mode_activated(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

class Init_BSUStatus01Updated_header
{
public:
  Init_BSUStatus01Updated_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSUStatus01Updated_bsu_switch_off_req header(::sd_can_msgs::msg::BSUStatus01Updated::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BSUStatus01Updated_bsu_switch_off_req(msg_);
  }

private:
  ::sd_can_msgs::msg::BSUStatus01Updated msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::BSUStatus01Updated>()
{
  return sd_can_msgs::msg::builder::Init_BSUStatus01Updated_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_STATUS01_UPDATED__BUILDER_HPP_
