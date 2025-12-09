// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/SonicObstacleInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__SONIC_OBSTACLE_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__SONIC_OBSTACLE_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/sonic_obstacle_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::SonicObstacleInterface & msg,
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

  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    value_to_yaml(msg.number, out);
    out << "\n";
  }

  // member: obstacledata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstacledata.size() == 0) {
      out << "obstacledata: []\n";
    } else {
      out << "obstacledata:\n";
      for (auto item : msg.obstacledata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: process_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_time: ";
    value_to_yaml(msg.process_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const car_interfaces::msg::SonicObstacleInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::SonicObstacleInterface>()
{
  return "car_interfaces::msg::SonicObstacleInterface";
}

template<>
inline const char * name<car_interfaces::msg::SonicObstacleInterface>()
{
  return "car_interfaces/msg/SonicObstacleInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::SonicObstacleInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_interfaces::msg::SonicObstacleInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_interfaces::msg::SonicObstacleInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__SONIC_OBSTACLE_INTERFACE__TRAITS_HPP_
