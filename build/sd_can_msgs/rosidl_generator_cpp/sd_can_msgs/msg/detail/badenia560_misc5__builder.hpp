// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560Misc5.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC5__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC5__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_misc5__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560Misc5_bad_tpms_tx_life_rr
{
public:
  explicit Init_Badenia560Misc5_bad_tpms_tx_life_rr(::sd_can_msgs::msg::Badenia560Misc5 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560Misc5 bad_tpms_tx_life_rr(::sd_can_msgs::msg::Badenia560Misc5::_bad_tpms_tx_life_rr_type arg)
  {
    msg_.bad_tpms_tx_life_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc5 msg_;
};

class Init_Badenia560Misc5_bad_tpms_tx_life_rl
{
public:
  explicit Init_Badenia560Misc5_bad_tpms_tx_life_rl(::sd_can_msgs::msg::Badenia560Misc5 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc5_bad_tpms_tx_life_rr bad_tpms_tx_life_rl(::sd_can_msgs::msg::Badenia560Misc5::_bad_tpms_tx_life_rl_type arg)
  {
    msg_.bad_tpms_tx_life_rl = std::move(arg);
    return Init_Badenia560Misc5_bad_tpms_tx_life_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc5 msg_;
};

class Init_Badenia560Misc5_bad_tpms_tx_life_fr
{
public:
  explicit Init_Badenia560Misc5_bad_tpms_tx_life_fr(::sd_can_msgs::msg::Badenia560Misc5 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc5_bad_tpms_tx_life_rl bad_tpms_tx_life_fr(::sd_can_msgs::msg::Badenia560Misc5::_bad_tpms_tx_life_fr_type arg)
  {
    msg_.bad_tpms_tx_life_fr = std::move(arg);
    return Init_Badenia560Misc5_bad_tpms_tx_life_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc5 msg_;
};

class Init_Badenia560Misc5_bad_tpms_tx_life_fl
{
public:
  explicit Init_Badenia560Misc5_bad_tpms_tx_life_fl(::sd_can_msgs::msg::Badenia560Misc5 & msg)
  : msg_(msg)
  {}
  Init_Badenia560Misc5_bad_tpms_tx_life_fr bad_tpms_tx_life_fl(::sd_can_msgs::msg::Badenia560Misc5::_bad_tpms_tx_life_fl_type arg)
  {
    msg_.bad_tpms_tx_life_fl = std::move(arg);
    return Init_Badenia560Misc5_bad_tpms_tx_life_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc5 msg_;
};

class Init_Badenia560Misc5_header
{
public:
  Init_Badenia560Misc5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560Misc5_bad_tpms_tx_life_fl header(::sd_can_msgs::msg::Badenia560Misc5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560Misc5_bad_tpms_tx_life_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560Misc5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560Misc5>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560Misc5_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC5__BUILDER_HPP_
