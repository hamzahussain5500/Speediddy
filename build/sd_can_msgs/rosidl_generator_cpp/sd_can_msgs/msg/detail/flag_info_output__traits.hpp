// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/FlagInfoOutput.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/flag_info_output__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FlagInfoOutput & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: led_status
  {
    out << "led_status: ";
    rosidl_generator_traits::value_to_yaml(msg.led_status, out);
    out << ", ";
  }

  // member: free_running_counter
  {
    out << "free_running_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.free_running_counter, out);
    out << ", ";
  }

  // member: spare1_0x7_c
  {
    out << "spare1_0x7_c: ";
    rosidl_generator_traits::value_to_yaml(msg.spare1_0x7_c, out);
    out << ", ";
  }

  // member: spare2_0x7_c
  {
    out << "spare2_0x7_c: ";
    rosidl_generator_traits::value_to_yaml(msg.spare2_0x7_c, out);
    out << ", ";
  }

  // member: sm_session_type
  {
    out << "sm_session_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_session_type, out);
    out << ", ";
  }

  // member: sm_track_flag
  {
    out << "sm_track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_track_flag, out);
    out << ", ";
  }

  // member: sm_car_flag
  {
    out << "sm_car_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_car_flag, out);
    out << ", ";
  }

  // member: crc_sm
  {
    out << "crc_sm: ";
    rosidl_generator_traits::value_to_yaml(msg.crc_sm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FlagInfoOutput & msg,
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

  // member: led_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_status: ";
    rosidl_generator_traits::value_to_yaml(msg.led_status, out);
    out << "\n";
  }

  // member: free_running_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "free_running_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.free_running_counter, out);
    out << "\n";
  }

  // member: spare1_0x7_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spare1_0x7_c: ";
    rosidl_generator_traits::value_to_yaml(msg.spare1_0x7_c, out);
    out << "\n";
  }

  // member: spare2_0x7_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spare2_0x7_c: ";
    rosidl_generator_traits::value_to_yaml(msg.spare2_0x7_c, out);
    out << "\n";
  }

  // member: sm_session_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_session_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_session_type, out);
    out << "\n";
  }

  // member: sm_track_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_track_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_track_flag, out);
    out << "\n";
  }

  // member: sm_car_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_car_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_car_flag, out);
    out << "\n";
  }

  // member: crc_sm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crc_sm: ";
    rosidl_generator_traits::value_to_yaml(msg.crc_sm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FlagInfoOutput & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::FlagInfoOutput & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::FlagInfoOutput & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::FlagInfoOutput>()
{
  return "sd_can_msgs::msg::FlagInfoOutput";
}

template<>
inline const char * name<sd_can_msgs::msg::FlagInfoOutput>()
{
  return "sd_can_msgs/msg/FlagInfoOutput";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::FlagInfoOutput>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::FlagInfoOutput>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::FlagInfoOutput>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__FLAG_INFO_OUTPUT__TRAITS_HPP_
