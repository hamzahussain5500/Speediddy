// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/Badenia560MLStatus.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/badenia560_ml_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_Badenia560MLStatus_bsu_prefill_req_rr
{
public:
  explicit Init_Badenia560MLStatus_bsu_prefill_req_rr(::sd_can_msgs::msg::Badenia560MLStatus & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::Badenia560MLStatus bsu_prefill_req_rr(::sd_can_msgs::msg::Badenia560MLStatus::_bsu_prefill_req_rr_type arg)
  {
    msg_.bsu_prefill_req_rr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560MLStatus msg_;
};

class Init_Badenia560MLStatus_bsu_prefill_req_rl
{
public:
  explicit Init_Badenia560MLStatus_bsu_prefill_req_rl(::sd_can_msgs::msg::Badenia560MLStatus & msg)
  : msg_(msg)
  {}
  Init_Badenia560MLStatus_bsu_prefill_req_rr bsu_prefill_req_rl(::sd_can_msgs::msg::Badenia560MLStatus::_bsu_prefill_req_rl_type arg)
  {
    msg_.bsu_prefill_req_rl = std::move(arg);
    return Init_Badenia560MLStatus_bsu_prefill_req_rr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560MLStatus msg_;
};

class Init_Badenia560MLStatus_bsu_prefill_req_fr
{
public:
  explicit Init_Badenia560MLStatus_bsu_prefill_req_fr(::sd_can_msgs::msg::Badenia560MLStatus & msg)
  : msg_(msg)
  {}
  Init_Badenia560MLStatus_bsu_prefill_req_rl bsu_prefill_req_fr(::sd_can_msgs::msg::Badenia560MLStatus::_bsu_prefill_req_fr_type arg)
  {
    msg_.bsu_prefill_req_fr = std::move(arg);
    return Init_Badenia560MLStatus_bsu_prefill_req_rl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560MLStatus msg_;
};

class Init_Badenia560MLStatus_bsu_prefill_req_fl
{
public:
  explicit Init_Badenia560MLStatus_bsu_prefill_req_fl(::sd_can_msgs::msg::Badenia560MLStatus & msg)
  : msg_(msg)
  {}
  Init_Badenia560MLStatus_bsu_prefill_req_fr bsu_prefill_req_fl(::sd_can_msgs::msg::Badenia560MLStatus::_bsu_prefill_req_fl_type arg)
  {
    msg_.bsu_prefill_req_fl = std::move(arg);
    return Init_Badenia560MLStatus_bsu_prefill_req_fr(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560MLStatus msg_;
};

class Init_Badenia560MLStatus_header
{
public:
  Init_Badenia560MLStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Badenia560MLStatus_bsu_prefill_req_fl header(::sd_can_msgs::msg::Badenia560MLStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Badenia560MLStatus_bsu_prefill_req_fl(msg_);
  }

private:
  ::sd_can_msgs::msg::Badenia560MLStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::Badenia560MLStatus>()
{
  return sd_can_msgs::msg::builder::Init_Badenia560MLStatus_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_ML_STATUS__BUILDER_HPP_
