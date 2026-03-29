// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/DiagnosticWord02Legacy.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/diagnostic_word02_legacy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticWord02Legacy & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: rc_force_race_mode
  {
    out << "rc_force_race_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_force_race_mode, out);
    out << ", ";
  }

  // member: rc_beacon_time_out
  {
    out << "rc_beacon_time_out: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_beacon_time_out, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagnosticWord02Legacy & msg,
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

  // member: rc_force_race_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_force_race_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_force_race_mode, out);
    out << "\n";
  }

  // member: rc_beacon_time_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_beacon_time_out: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_beacon_time_out, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticWord02Legacy & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::DiagnosticWord02Legacy & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::DiagnosticWord02Legacy & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::DiagnosticWord02Legacy>()
{
  return "sd_can_msgs::msg::DiagnosticWord02Legacy";
}

template<>
inline const char * name<sd_can_msgs::msg::DiagnosticWord02Legacy>()
{
  return "sd_can_msgs/msg/DiagnosticWord02Legacy";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::DiagnosticWord02Legacy>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::DiagnosticWord02Legacy>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::DiagnosticWord02Legacy>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__DIAGNOSTIC_WORD02_LEGACY__TRAITS_HPP_
