// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sd_can_msgs:msg/Badenia560Misc4.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__TRAITS_HPP_
#define SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sd_can_msgs/msg/detail/badenia560_misc4__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sd_can_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Badenia560Misc4 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bad_tpms_check_fl
  {
    out << "bad_tpms_check_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_fl, out);
    out << ", ";
  }

  // member: bad_tpms_check_fr
  {
    out << "bad_tpms_check_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_fr, out);
    out << ", ";
  }

  // member: bad_tpms_check_rl
  {
    out << "bad_tpms_check_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_rl, out);
    out << ", ";
  }

  // member: bad_tpms_check_rr
  {
    out << "bad_tpms_check_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_rr, out);
    out << ", ";
  }

  // member: bad_tpms_tx_count_fl
  {
    out << "bad_tpms_tx_count_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_fl, out);
    out << ", ";
  }

  // member: bad_tpms_tx_count_fr
  {
    out << "bad_tpms_tx_count_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_fr, out);
    out << ", ";
  }

  // member: bad_tpms_tx_count_rl
  {
    out << "bad_tpms_tx_count_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_rl, out);
    out << ", ";
  }

  // member: bad_tpms_tx_count_rr
  {
    out << "bad_tpms_tx_count_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_rr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Badenia560Misc4 & msg,
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

  // member: bad_tpms_check_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_check_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_fl, out);
    out << "\n";
  }

  // member: bad_tpms_check_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_check_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_fr, out);
    out << "\n";
  }

  // member: bad_tpms_check_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_check_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_rl, out);
    out << "\n";
  }

  // member: bad_tpms_check_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_check_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_check_rr, out);
    out << "\n";
  }

  // member: bad_tpms_tx_count_fl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_tx_count_fl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_fl, out);
    out << "\n";
  }

  // member: bad_tpms_tx_count_fr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_tx_count_fr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_fr, out);
    out << "\n";
  }

  // member: bad_tpms_tx_count_rl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_tx_count_rl: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_rl, out);
    out << "\n";
  }

  // member: bad_tpms_tx_count_rr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_tpms_tx_count_rr: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_tpms_tx_count_rr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Badenia560Misc4 & msg, bool use_flow_style = false)
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
  const sd_can_msgs::msg::Badenia560Misc4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  sd_can_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sd_can_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sd_can_msgs::msg::Badenia560Misc4 & msg)
{
  return sd_can_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sd_can_msgs::msg::Badenia560Misc4>()
{
  return "sd_can_msgs::msg::Badenia560Misc4";
}

template<>
inline const char * name<sd_can_msgs::msg::Badenia560Misc4>()
{
  return "sd_can_msgs/msg/Badenia560Misc4";
}

template<>
struct has_fixed_size<sd_can_msgs::msg::Badenia560Misc4>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sd_can_msgs::msg::Badenia560Misc4>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sd_can_msgs::msg::Badenia560Misc4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SD_CAN_MSGS__MSG__DETAIL__BADENIA560_MISC4__TRAITS_HPP_
