// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/ImuStateInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__IMU_STATE_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__IMU_STATE_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/imu_state_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::ImuStateInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::ImuStateInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::ImuStateInterface>()
{
  return "car_interfaces::msg::ImuStateInterface";
}

template<>
inline const char * name<car_interfaces::msg::ImuStateInterface>()
{
  return "car_interfaces/msg/ImuStateInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::ImuStateInterface>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_interfaces::msg::ImuStateInterface>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_interfaces::msg::ImuStateInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__IMU_STATE_INTERFACE__TRAITS_HPP_
