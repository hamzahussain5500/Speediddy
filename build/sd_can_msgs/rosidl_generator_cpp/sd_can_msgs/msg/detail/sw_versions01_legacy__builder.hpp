// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/SwVersions01Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_LEGACY__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_LEGACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/sw_versions01_legacy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_SwVersions01Legacy_pdu2_sw_version
{
public:
  explicit Init_SwVersions01Legacy_pdu2_sw_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::SwVersions01Legacy pdu2_sw_version(::sd_can_msgs::msg::SwVersions01Legacy::_pdu2_sw_version_type arg)
  {
    msg_.pdu2_sw_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_pdu1_sw_version
{
public:
  explicit Init_SwVersions01Legacy_pdu1_sw_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Legacy_pdu2_sw_version pdu1_sw_version(::sd_can_msgs::msg::SwVersions01Legacy::_pdu1_sw_version_type arg)
  {
    msg_.pdu1_sw_version = std::move(arg);
    return Init_SwVersions01Legacy_pdu2_sw_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_psa_sw_build_version
{
public:
  explicit Init_SwVersions01Legacy_psa_sw_build_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Legacy_pdu1_sw_version psa_sw_build_version(::sd_can_msgs::msg::SwVersions01Legacy::_psa_sw_build_version_type arg)
  {
    msg_.psa_sw_build_version = std::move(arg);
    return Init_SwVersions01Legacy_pdu1_sw_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_psa_sw_major_version
{
public:
  explicit Init_SwVersions01Legacy_psa_sw_major_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Legacy_psa_sw_build_version psa_sw_major_version(::sd_can_msgs::msg::SwVersions01Legacy::_psa_sw_major_version_type arg)
  {
    msg_.psa_sw_major_version = std::move(arg);
    return Init_SwVersions01Legacy_psa_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_psa_sw_minor_version
{
public:
  explicit Init_SwVersions01Legacy_psa_sw_minor_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Legacy_psa_sw_major_version psa_sw_minor_version(::sd_can_msgs::msg::SwVersions01Legacy::_psa_sw_minor_version_type arg)
  {
    msg_.psa_sw_minor_version = std::move(arg);
    return Init_SwVersions01Legacy_psa_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_bsu_sw_build_version
{
public:
  explicit Init_SwVersions01Legacy_bsu_sw_build_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Legacy_psa_sw_minor_version bsu_sw_build_version(::sd_can_msgs::msg::SwVersions01Legacy::_bsu_sw_build_version_type arg)
  {
    msg_.bsu_sw_build_version = std::move(arg);
    return Init_SwVersions01Legacy_psa_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_bsu_sw_major_version
{
public:
  explicit Init_SwVersions01Legacy_bsu_sw_major_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Legacy_bsu_sw_build_version bsu_sw_major_version(::sd_can_msgs::msg::SwVersions01Legacy::_bsu_sw_major_version_type arg)
  {
    msg_.bsu_sw_major_version = std::move(arg);
    return Init_SwVersions01Legacy_bsu_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_bsu_sw_minor_version
{
public:
  explicit Init_SwVersions01Legacy_bsu_sw_minor_version(::sd_can_msgs::msg::SwVersions01Legacy & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Legacy_bsu_sw_major_version bsu_sw_minor_version(::sd_can_msgs::msg::SwVersions01Legacy::_bsu_sw_minor_version_type arg)
  {
    msg_.bsu_sw_minor_version = std::move(arg);
    return Init_SwVersions01Legacy_bsu_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

class Init_SwVersions01Legacy_header
{
public:
  Init_SwVersions01Legacy_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwVersions01Legacy_bsu_sw_minor_version header(::sd_can_msgs::msg::SwVersions01Legacy::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SwVersions01Legacy_bsu_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Legacy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::SwVersions01Legacy>()
{
  return sd_can_msgs::msg::builder::Init_SwVersions01Legacy_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_LEGACY__BUILDER_HPP_
