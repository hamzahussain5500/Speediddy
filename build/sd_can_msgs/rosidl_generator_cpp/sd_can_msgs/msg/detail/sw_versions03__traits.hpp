// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/SwVersions03.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/sw_versions03__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SwVersions03 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cba_rl_sw_minor_version
  {
    out << "cba_rl_sw_minor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_sw_minor_version, out);
    out << ", ";
  }

  // member: cba_rl_sw_major_version
  {
    out << "cba_rl_sw_major_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_sw_major_version, out);
    out << ", ";
  }

  // member: cba_rl_sw_build_version
  {
    out << "cba_rl_sw_build_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_sw_build_version, out);
    out << ", ";
  }

  // member: cba_rr_sw_minor_version
  {
    out << "cba_rr_sw_minor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_sw_minor_version, out);
    out << ", ";
  }

  // member: cba_rr_sw_major_version
  {
    out << "cba_rr_sw_major_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_sw_major_version, out);
    out << ", ";
  }

  // member: cba_rr_sw_build_version
  {
    out << "cba_rr_sw_build_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_sw_build_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SwVersions03 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: cba_rl_sw_minor_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rl_sw_minor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_sw_minor_version, out);
    out << "\n";
  }

  // member: cba_rl_sw_major_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rl_sw_major_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_sw_major_version, out);
    out << "\n";
  }

  // member: cba_rl_sw_build_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rl_sw_build_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rl_sw_build_version, out);
    out << "\n";
  }

  // member: cba_rr_sw_minor_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rr_sw_minor_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_sw_minor_version, out);
    out << "\n";
  }

  // member: cba_rr_sw_major_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rr_sw_major_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_sw_major_version, out);
    out << "\n";
  }

  // member: cba_rr_sw_build_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_rr_sw_build_version: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_rr_sw_build_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SwVersions03 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sd_can_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sd_can_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sd_can_msgs::msg::SwVersions03 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::SwVersions03 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::SwVersions03>()
{
  return "sd_can_msgs::msg::SwVersions03";
}

template<>
inline const char * name<sd_can_msgs::msg::SwVersions03>()
{
  return "sd_can_msgs/msg/SwVersions03";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::SwVersions03>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::SwVersions03>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::SwVersions03>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__SW_VERSIONS03__TRAITS_HPP_
