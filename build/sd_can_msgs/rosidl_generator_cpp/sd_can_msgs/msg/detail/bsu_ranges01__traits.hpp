// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/BSURanges01.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/bsu_ranges01__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BSURanges01 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cba_min_pressure_fl_pa
  {
    out << "cba_min_pressure_fl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_fl_pa, out);
    out << ", ";
  }

  // member: cba_max_pressure_fl_pa
  {
    out << "cba_max_pressure_fl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_fl_pa, out);
    out << ", ";
  }

  // member: cba_min_pressure_fr_pa
  {
    out << "cba_min_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_fr_pa, out);
    out << ", ";
  }

  // member: cba_max_pressure_fr_pa
  {
    out << "cba_max_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_fr_pa, out);
    out << ", ";
  }

  // member: cba_min_pressure_rl_pa
  {
    out << "cba_min_pressure_rl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_rl_pa, out);
    out << ", ";
  }

  // member: cba_max_pressure_rl_pa
  {
    out << "cba_max_pressure_rl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_rl_pa, out);
    out << ", ";
  }

  // member: cba_min_pressure_rr_pa
  {
    out << "cba_min_pressure_rr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_rr_pa, out);
    out << ", ";
  }

  // member: cba_max_pressure_rr_pa
  {
    out << "cba_max_pressure_rr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_rr_pa, out);
    out << ", ";
  }

  // member: ice_max_throttle
  {
    out << "ice_max_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_max_throttle, out);
    out << ", ";
  }

  // member: ice_min_throttle
  {
    out << "ice_min_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_min_throttle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BSURanges01 & msg,
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

  // member: cba_min_pressure_fl_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_min_pressure_fl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_fl_pa, out);
    out << "\n";
  }

  // member: cba_max_pressure_fl_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_max_pressure_fl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_fl_pa, out);
    out << "\n";
  }

  // member: cba_min_pressure_fr_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_min_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_fr_pa, out);
    out << "\n";
  }

  // member: cba_max_pressure_fr_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_max_pressure_fr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_fr_pa, out);
    out << "\n";
  }

  // member: cba_min_pressure_rl_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_min_pressure_rl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_rl_pa, out);
    out << "\n";
  }

  // member: cba_max_pressure_rl_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_max_pressure_rl_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_rl_pa, out);
    out << "\n";
  }

  // member: cba_min_pressure_rr_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_min_pressure_rr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_min_pressure_rr_pa, out);
    out << "\n";
  }

  // member: cba_max_pressure_rr_pa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cba_max_pressure_rr_pa: ";
    rosidl_generator_traits::value_to_yaml(msg.cba_max_pressure_rr_pa, out);
    out << "\n";
  }

  // member: ice_max_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_max_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_max_throttle, out);
    out << "\n";
  }

  // member: ice_min_throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ice_min_throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.ice_min_throttle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BSURanges01 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::BSURanges01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::BSURanges01 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::BSURanges01>()
{
  return "sd_can_msgs::msg::BSURanges01";
}

template<>
inline const char * name<sd_can_msgs::msg::BSURanges01>()
{
  return "sd_can_msgs/msg/BSURanges01";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::BSURanges01>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::BSURanges01>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::BSURanges01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BSU_RANGES01__TRAITS_HPP_
