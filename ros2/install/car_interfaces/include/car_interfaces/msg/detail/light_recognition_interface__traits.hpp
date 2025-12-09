// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_interfaces:msg/LightRecognitionInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__TRAITS_HPP_
#define CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__TRAITS_HPP_

#include "car_interfaces/msg/detail/light_recognition_interface__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'resultimage'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const car_interfaces::msg::LightRecognitionInterface & msg,
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

  // member: lightdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lightdata.size() == 0) {
      out << "lightdata: []\n";
    } else {
      out << "lightdata:\n";
      for (auto item : msg.lightdata) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: resultimage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resultimage:\n";
    to_yaml(msg.resultimage, out, indentation + 2);
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

inline std::string to_yaml(const car_interfaces::msg::LightRecognitionInterface & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<car_interfaces::msg::LightRecognitionInterface>()
{
  return "car_interfaces::msg::LightRecognitionInterface";
}

template<>
inline const char * name<car_interfaces::msg::LightRecognitionInterface>()
{
  return "car_interfaces/msg/LightRecognitionInterface";
}

template<>
struct has_fixed_size<car_interfaces::msg::LightRecognitionInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_interfaces::msg::LightRecognitionInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_interfaces::msg::LightRecognitionInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_INTERFACES__MSG__DETAIL__LIGHT_RECOGNITION_INTERFACE__TRAITS_HPP_
