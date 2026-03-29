// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560Misc4.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_misc4__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560Misc4_bad_tpms_tx_count_rr
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_tx_count_rr(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560Misc4 bad_tpms_tx_count_rr(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_tx_count_rr_type arg)
  {
    msg_.bad_tpms_tx_count_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_bad_tpms_tx_count_rl
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_tx_count_rl(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc4_bad_tpms_tx_count_rr bad_tpms_tx_count_rl(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_tx_count_rl_type arg)
  {
    msg_.bad_tpms_tx_count_rl = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_tx_count_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_bad_tpms_tx_count_fr
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_tx_count_fr(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc4_bad_tpms_tx_count_rl bad_tpms_tx_count_fr(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_tx_count_fr_type arg)
  {
    msg_.bad_tpms_tx_count_fr = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_tx_count_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_bad_tpms_tx_count_fl
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_tx_count_fl(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc4_bad_tpms_tx_count_fr bad_tpms_tx_count_fl(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_tx_count_fl_type arg)
  {
    msg_.bad_tpms_tx_count_fl = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_tx_count_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_bad_tpms_check_rr
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_check_rr(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc4_bad_tpms_tx_count_fl bad_tpms_check_rr(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_check_rr_type arg)
  {
    msg_.bad_tpms_check_rr = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_tx_count_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_bad_tpms_check_rl
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_check_rl(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc4_bad_tpms_check_rr bad_tpms_check_rl(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_check_rl_type arg)
  {
    msg_.bad_tpms_check_rl = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_check_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_bad_tpms_check_fr
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_check_fr(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc4_bad_tpms_check_rl bad_tpms_check_fr(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_check_fr_type arg)
  {
    msg_.bad_tpms_check_fr = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_check_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_bad_tpms_check_fl
{
public:
  explicit Init_Badenia560Misc4_bad_tpms_check_fl(::sd_can_msgs::msg::Badenia560Misc4 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc4_bad_tpms_check_fr bad_tpms_check_fl(::sd_can_msgs::msg::Badenia560Misc4::_bad_tpms_check_fl_type arg)
  {
    msg_.bad_tpms_check_fl = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_check_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

class Init_Badenia560Misc4_header
{
public:
  Init_Badenia560Misc4_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560Misc4_bad_tpms_check_fl header(::sd_can_msgs::msg::Badenia560Misc4::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560Misc4_bad_tpms_check_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560Misc4>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560Misc4_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__BUILDER_HPP_
