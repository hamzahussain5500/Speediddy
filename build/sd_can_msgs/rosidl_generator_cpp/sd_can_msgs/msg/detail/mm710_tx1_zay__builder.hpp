// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/MM710TX1ZAY.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/mm710_tx1_zay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_MM710TX1ZAY_yaw_rate
{
public:
  explicit Init_MM710TX1ZAY_yaw_rate(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::MM710TX1ZAY yaw_rate(::sd_can_msgs::msg::MM710TX1ZAY::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_clu_stat
{
public:
  explicit Init_MM710TX1ZAY_clu_stat(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  Init_MM710TX1ZAY_yaw_rate clu_stat(::sd_can_msgs::msg::MM710TX1ZAY::_clu_stat_type arg)
  {
    msg_.clu_stat = std::move(arg);
    return Init_MM710TX1ZAY_yaw_rate(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_yaw_rate_stat
{
public:
  explicit Init_MM710TX1ZAY_yaw_rate_stat(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  Init_MM710TX1ZAY_clu_stat yaw_rate_stat(::sd_can_msgs::msg::MM710TX1ZAY::_yaw_rate_stat_type arg)
  {
    msg_.yaw_rate_stat = std::move(arg);
    return Init_MM710TX1ZAY_clu_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_temp_rate_z
{
public:
  explicit Init_MM710TX1ZAY_temp_rate_z(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  Init_MM710TX1ZAY_yaw_rate_stat temp_rate_z(::sd_can_msgs::msg::MM710TX1ZAY::_temp_rate_z_type arg)
  {
    msg_.temp_rate_z = std::move(arg);
    return Init_MM710TX1ZAY_yaw_rate_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_ay
{
public:
  explicit Init_MM710TX1ZAY_ay(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  Init_MM710TX1ZAY_temp_rate_z ay(::sd_can_msgs::msg::MM710TX1ZAY::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_MM710TX1ZAY_temp_rate_z(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_msg_cnt
{
public:
  explicit Init_MM710TX1ZAY_msg_cnt(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  Init_MM710TX1ZAY_ay msg_cnt(::sd_can_msgs::msg::MM710TX1ZAY::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return Init_MM710TX1ZAY_ay(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_ay_stat
{
public:
  explicit Init_MM710TX1ZAY_ay_stat(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  Init_MM710TX1ZAY_msg_cnt ay_stat(::sd_can_msgs::msg::MM710TX1ZAY::_ay_stat_type arg)
  {
    msg_.ay_stat = std::move(arg);
    return Init_MM710TX1ZAY_msg_cnt(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_crc
{
public:
  explicit Init_MM710TX1ZAY_crc(::sd_can_msgs::msg::MM710TX1ZAY & msg)
  : msg_(msg)
  {}
  Init_MM710TX1ZAY_ay_stat crc(::sd_can_msgs::msg::MM710TX1ZAY::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_MM710TX1ZAY_ay_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

class Init_MM710TX1ZAY_header
{
public:
  Init_MM710TX1ZAY_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MM710TX1ZAY_crc header(::sd_can_msgs::msg::MM710TX1ZAY::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MM710TX1ZAY_crc(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX1ZAY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::MM710TX1ZAY>()
{
  return sd_can_msgs::msg::builder::Init_MM710TX1ZAY_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX1_ZAY__BUILDER_HPP_
