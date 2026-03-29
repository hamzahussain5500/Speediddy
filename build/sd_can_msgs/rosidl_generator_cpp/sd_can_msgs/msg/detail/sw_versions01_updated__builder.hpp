// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sd_can_msgs:msg/SwVersions01Updated.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__BUILDER_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sd_can_msgs/msg/detail/sw_versions01_updated__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sd_can_msgs
{

namespace msg
{

namespace builder
{

class Init_SwVersions01Updated_pdu48_sw_version
{
public:
  explicit Init_SwVersions01Updated_pdu48_sw_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  ::sd_can_msgs::msg::SwVersions01Updated pdu48_sw_version(::sd_can_msgs::msg::SwVersions01Updated::_pdu48_sw_version_type arg)
  {
    msg_.pdu48_sw_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_pdu12_sw_version
{
public:
  explicit Init_SwVersions01Updated_pdu12_sw_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Updated_pdu48_sw_version pdu12_sw_version(::sd_can_msgs::msg::SwVersions01Updated::_pdu12_sw_version_type arg)
  {
    msg_.pdu12_sw_version = std::move(arg);
    return Init_SwVersions01Updated_pdu48_sw_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_psa_sw_build_version
{
public:
  explicit Init_SwVersions01Updated_psa_sw_build_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Updated_pdu12_sw_version psa_sw_build_version(::sd_can_msgs::msg::SwVersions01Updated::_psa_sw_build_version_type arg)
  {
    msg_.psa_sw_build_version = std::move(arg);
    return Init_SwVersions01Updated_pdu12_sw_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_psa_sw_major_version
{
public:
  explicit Init_SwVersions01Updated_psa_sw_major_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Updated_psa_sw_build_version psa_sw_major_version(::sd_can_msgs::msg::SwVersions01Updated::_psa_sw_major_version_type arg)
  {
    msg_.psa_sw_major_version = std::move(arg);
    return Init_SwVersions01Updated_psa_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_psa_sw_minor_version
{
public:
  explicit Init_SwVersions01Updated_psa_sw_minor_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Updated_psa_sw_major_version psa_sw_minor_version(::sd_can_msgs::msg::SwVersions01Updated::_psa_sw_minor_version_type arg)
  {
    msg_.psa_sw_minor_version = std::move(arg);
    return Init_SwVersions01Updated_psa_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_bsu_sw_build_version
{
public:
  explicit Init_SwVersions01Updated_bsu_sw_build_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Updated_psa_sw_minor_version bsu_sw_build_version(::sd_can_msgs::msg::SwVersions01Updated::_bsu_sw_build_version_type arg)
  {
    msg_.bsu_sw_build_version = std::move(arg);
    return Init_SwVersions01Updated_psa_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_bsu_sw_major_version
{
public:
  explicit Init_SwVersions01Updated_bsu_sw_major_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Updated_bsu_sw_build_version bsu_sw_major_version(::sd_can_msgs::msg::SwVersions01Updated::_bsu_sw_major_version_type arg)
  {
    msg_.bsu_sw_major_version = std::move(arg);
    return Init_SwVersions01Updated_bsu_sw_build_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_bsu_sw_minor_version
{
public:
  explicit Init_SwVersions01Updated_bsu_sw_minor_version(::sd_can_msgs::msg::SwVersions01Updated & msg)
  : msg_(msg)
  {}
  Init_SwVersions01Updated_bsu_sw_major_version bsu_sw_minor_version(::sd_can_msgs::msg::SwVersions01Updated::_bsu_sw_minor_version_type arg)
  {
    msg_.bsu_sw_minor_version = std::move(arg);
    return Init_SwVersions01Updated_bsu_sw_major_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

class Init_SwVersions01Updated_header
{
public:
  Init_SwVersions01Updated_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwVersions01Updated_bsu_sw_minor_version header(::sd_can_msgs::msg::SwVersions01Updated::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SwVersions01Updated_bsu_sw_minor_version(msg_);
  }

private:
  ::sd_can_msgs::msg::SwVersions01Updated msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sd_can_msgs::msg::SwVersions01Updated>()
{
  return sd_can_msgs::msg::builder::Init_SwVersions01Updated_header();
}

}  // namespace sd_can_msgs

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS01_UPDATED__BUILDER_HPP_
