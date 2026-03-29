// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/SwVersions03.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/sw_versions03__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_SwVersions03_cba_rr_sw_build_version
{
public:
  explicit Init_SwVersions03_cba_rr_sw_build_version(::sd_can_msgs::msg::SwVersions03 & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::SwVersions03 cba_rr_sw_build_version(::sd_can_msgs::msg::SwVersions03::_cba_rr_sw_build_version_type arg)
  {
    msg_.cba_rr_sw_build_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions03 msg_;
};

class Init_SwVersions03_cba_rr_sw_major_version
{
public:
  explicit Init_SwVersions03_cba_rr_sw_major_version(::sd_can_msgs::msg::SwVersions03 & msg)
  : msg_(msg)
  {}
  Init_SwVersions03_cba_rr_sw_build_version cba_rr_sw_major_version(::sd_can_msgs::msg::SwVersions03::_cba_rr_sw_major_version_type arg)
  {
    msg_.cba_rr_sw_major_version = std::move(arg);
    return Init_SwVersions03_cba_rr_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions03 msg_;
};

class Init_SwVersions03_cba_rr_sw_minor_version
{
public:
  explicit Init_SwVersions03_cba_rr_sw_minor_version(::sd_can_msgs::msg::SwVersions03 & msg)
  : msg_(msg)
  {}
  Init_SwVersions03_cba_rr_sw_major_version cba_rr_sw_minor_version(::sd_can_msgs::msg::SwVersions03::_cba_rr_sw_minor_version_type arg)
  {
    msg_.cba_rr_sw_minor_version = std::move(arg);
    return Init_SwVersions03_cba_rr_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions03 msg_;
};

class Init_SwVersions03_cba_rl_sw_build_version
{
public:
  explicit Init_SwVersions03_cba_rl_sw_build_version(::sd_can_msgs::msg::SwVersions03 & msg)
  : msg_(msg)
  {}
  Init_SwVersions03_cba_rr_sw_minor_version cba_rl_sw_build_version(::sd_can_msgs::msg::SwVersions03::_cba_rl_sw_build_version_type arg)
  {
    msg_.cba_rl_sw_build_version = std::move(arg);
    return Init_SwVersions03_cba_rr_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions03 msg_;
};

class Init_SwVersions03_cba_rl_sw_major_version
{
public:
  explicit Init_SwVersions03_cba_rl_sw_major_version(::sd_can_msgs::msg::SwVersions03 & msg)
  : msg_(msg)
  {}
  Init_SwVersions03_cba_rl_sw_build_version cba_rl_sw_major_version(::sd_can_msgs::msg::SwVersions03::_cba_rl_sw_major_version_type arg)
  {
    msg_.cba_rl_sw_major_version = std::move(arg);
    return Init_SwVersions03_cba_rl_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions03 msg_;
};

class Init_SwVersions03_cba_rl_sw_minor_version
{
public:
  explicit Init_SwVersions03_cba_rl_sw_minor_version(::sd_can_msgs::msg::SwVersions03 & msg)
  : msg_(msg)
  {}
  Init_SwVersions03_cba_rl_sw_major_version cba_rl_sw_minor_version(::sd_can_msgs::msg::SwVersions03::_cba_rl_sw_minor_version_type arg)
  {
    msg_.cba_rl_sw_minor_version = std::move(arg);
    return Init_SwVersions03_cba_rl_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions03 msg_;
};

class Init_SwVersions03_header
{
public:
  Init_SwVersions03_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwVersions03_cba_rl_sw_minor_version header(::sd_can_msgs::msg::SwVersions03::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SwVersions03_cba_rl_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions03 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::SwVersions03>()
{
  return sd_can_msgs::msg::builder::Init_SwVersions03_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__BUILDER_HPP_
