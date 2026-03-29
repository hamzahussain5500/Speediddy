// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/MM710TX2XAX.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/mm710_tx2_xax__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_MM710TX2XAX_roll_rate
{
public:
  explicit Init_MM710TX2XAX_roll_rate(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::MM710TX2XAX roll_rate(::sd_can_msgs::msg::MM710TX2XAX::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_clu_stat
{
public:
  explicit Init_MM710TX2XAX_clu_stat(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  Init_MM710TX2XAX_roll_rate clu_stat(::sd_can_msgs::msg::MM710TX2XAX::_clu_stat_type arg)
  {
    msg_.clu_stat = std::move(arg);
    return Init_MM710TX2XAX_roll_rate(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_roll_rate_stat
{
public:
  explicit Init_MM710TX2XAX_roll_rate_stat(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  Init_MM710TX2XAX_clu_stat roll_rate_stat(::sd_can_msgs::msg::MM710TX2XAX::_roll_rate_stat_type arg)
  {
    msg_.roll_rate_stat = std::move(arg);
    return Init_MM710TX2XAX_clu_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_clu_diag
{
public:
  explicit Init_MM710TX2XAX_clu_diag(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  Init_MM710TX2XAX_roll_rate_stat clu_diag(::sd_can_msgs::msg::MM710TX2XAX::_clu_diag_type arg)
  {
    msg_.clu_diag = std::move(arg);
    return Init_MM710TX2XAX_roll_rate_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_ax
{
public:
  explicit Init_MM710TX2XAX_ax(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  Init_MM710TX2XAX_clu_diag ax(::sd_can_msgs::msg::MM710TX2XAX::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_MM710TX2XAX_clu_diag(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_msg_cnt
{
public:
  explicit Init_MM710TX2XAX_msg_cnt(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  Init_MM710TX2XAX_ax msg_cnt(::sd_can_msgs::msg::MM710TX2XAX::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return Init_MM710TX2XAX_ax(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_ax_stat
{
public:
  explicit Init_MM710TX2XAX_ax_stat(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  Init_MM710TX2XAX_msg_cnt ax_stat(::sd_can_msgs::msg::MM710TX2XAX::_ax_stat_type arg)
  {
    msg_.ax_stat = std::move(arg);
    return Init_MM710TX2XAX_msg_cnt(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_crc
{
public:
  explicit Init_MM710TX2XAX_crc(::sd_can_msgs::msg::MM710TX2XAX & msg)
  : msg_(msg)
  {}
  Init_MM710TX2XAX_ax_stat crc(::sd_can_msgs::msg::MM710TX2XAX::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_MM710TX2XAX_ax_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

class Init_MM710TX2XAX_header
{
public:
  Init_MM710TX2XAX_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MM710TX2XAX_crc header(::sd_can_msgs::msg::MM710TX2XAX::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MM710TX2XAX_crc(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX2XAX msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::MM710TX2XAX>()
{
  return sd_can_msgs::msg::builder::Init_MM710TX2XAX_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX2_XAX__BUILDER_HPP_
