// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/MM710TX3YAZ.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/mm710_tx3_yaz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_MM710TX3YAZ_pitch_rate
{
public:
  explicit Init_MM710TX3YAZ_pitch_rate(::sd_can_msgs::msg::MM710TX3YAZ & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::MM710TX3YAZ pitch_rate(::sd_can_msgs::msg::MM710TX3YAZ::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

class Init_MM710TX3YAZ_hw_index
{
public:
  explicit Init_MM710TX3YAZ_hw_index(::sd_can_msgs::msg::MM710TX3YAZ & msg)
  : msg_(msg)
  {}
  Init_MM710TX3YAZ_pitch_rate hw_index(::sd_can_msgs::msg::MM710TX3YAZ::_hw_index_type arg)
  {
    msg_.hw_index = std::move(arg);
    return Init_MM710TX3YAZ_pitch_rate(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

class Init_MM710TX3YAZ_pitch_rate_stat
{
public:
  explicit Init_MM710TX3YAZ_pitch_rate_stat(::sd_can_msgs::msg::MM710TX3YAZ & msg)
  : msg_(msg)
  {}
  Init_MM710TX3YAZ_hw_index pitch_rate_stat(::sd_can_msgs::msg::MM710TX3YAZ::_pitch_rate_stat_type arg)
  {
    msg_.pitch_rate_stat = std::move(arg);
    return Init_MM710TX3YAZ_hw_index(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

class Init_MM710TX3YAZ_az
{
public:
  explicit Init_MM710TX3YAZ_az(::sd_can_msgs::msg::MM710TX3YAZ & msg)
  : msg_(msg)
  {}
  Init_MM710TX3YAZ_pitch_rate_stat az(::sd_can_msgs::msg::MM710TX3YAZ::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_MM710TX3YAZ_pitch_rate_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

class Init_MM710TX3YAZ_msg_cnt
{
public:
  explicit Init_MM710TX3YAZ_msg_cnt(::sd_can_msgs::msg::MM710TX3YAZ & msg)
  : msg_(msg)
  {}
  Init_MM710TX3YAZ_az msg_cnt(::sd_can_msgs::msg::MM710TX3YAZ::_msg_cnt_type arg)
  {
    msg_.msg_cnt = std::move(arg);
    return Init_MM710TX3YAZ_az(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

class Init_MM710TX3YAZ_az_stat
{
public:
  explicit Init_MM710TX3YAZ_az_stat(::sd_can_msgs::msg::MM710TX3YAZ & msg)
  : msg_(msg)
  {}
  Init_MM710TX3YAZ_msg_cnt az_stat(::sd_can_msgs::msg::MM710TX3YAZ::_az_stat_type arg)
  {
    msg_.az_stat = std::move(arg);
    return Init_MM710TX3YAZ_msg_cnt(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

class Init_MM710TX3YAZ_crc
{
public:
  explicit Init_MM710TX3YAZ_crc(::sd_can_msgs::msg::MM710TX3YAZ & msg)
  : msg_(msg)
  {}
  Init_MM710TX3YAZ_az_stat crc(::sd_can_msgs::msg::MM710TX3YAZ::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_MM710TX3YAZ_az_stat(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

class Init_MM710TX3YAZ_header
{
public:
  Init_MM710TX3YAZ_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MM710TX3YAZ_crc header(::sd_can_msgs::msg::MM710TX3YAZ::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MM710TX3YAZ_crc(msg_);
  }

private:
  ::sd_can_msgs::msg::MM710TX3YAZ msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::MM710TX3YAZ>()
{
  return sd_can_msgs::msg::builder::Init_MM710TX3YAZ_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__MM710_TX3_YAZ__BUILDER_HPP_
