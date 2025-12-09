// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_interfaces:msg/CarOriInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__BUILDER_HPP_
#define CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__BUILDER_HPP_

#include "car_interfaces/msg/detail/car_ori_interface__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_interfaces
{

namespace msg
{

namespace builder
{

class Init_CarOriInterface_process_time
{
public:
  explicit Init_CarOriInterface_process_time(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  ::car_interfaces::msg::CarOriInterface process_time(::car_interfaces::msg::CarOriInterface::_process_time_type arg)
  {
    msg_.process_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_error
{
public:
  explicit Init_CarOriInterface_error(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_process_time error(::car_interfaces::msg::CarOriInterface::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_CarOriInterface_process_time(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_state
{
public:
  explicit Init_CarOriInterface_state(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_error state(::car_interfaces::msg::CarOriInterface::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_CarOriInterface_error(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_stop_button
{
public:
  explicit Init_CarOriInterface_stop_button(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_state stop_button(::car_interfaces::msg::CarOriInterface::_stop_button_type arg)
  {
    msg_.stop_button = std::move(arg);
    return Init_CarOriInterface_state(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_start_button
{
public:
  explicit Init_CarOriInterface_start_button(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_stop_button start_button(::car_interfaces::msg::CarOriInterface::_start_button_type arg)
  {
    msg_.start_button = std::move(arg);
    return Init_CarOriInterface_stop_button(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_speaker
{
public:
  explicit Init_CarOriInterface_speaker(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_start_button speaker(::car_interfaces::msg::CarOriInterface::_speaker_type arg)
  {
    msg_.speaker = std::move(arg);
    return Init_CarOriInterface_start_button(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_reversing_light
{
public:
  explicit Init_CarOriInterface_reversing_light(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_speaker reversing_light(::car_interfaces::msg::CarOriInterface::_reversing_light_type arg)
  {
    msg_.reversing_light = std::move(arg);
    return Init_CarOriInterface_speaker(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_right_light
{
public:
  explicit Init_CarOriInterface_right_light(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_reversing_light right_light(::car_interfaces::msg::CarOriInterface::_right_light_type arg)
  {
    msg_.right_light = std::move(arg);
    return Init_CarOriInterface_reversing_light(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_left_light
{
public:
  explicit Init_CarOriInterface_left_light(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_right_light left_light(::car_interfaces::msg::CarOriInterface::_left_light_type arg)
  {
    msg_.left_light = std::move(arg);
    return Init_CarOriInterface_right_light(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_braking_percentage
{
public:
  explicit Init_CarOriInterface_braking_percentage(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_left_light braking_percentage(::car_interfaces::msg::CarOriInterface::_braking_percentage_type arg)
  {
    msg_.braking_percentage = std::move(arg);
    return Init_CarOriInterface_left_light(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_throttle_percentage
{
public:
  explicit Init_CarOriInterface_throttle_percentage(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_braking_percentage throttle_percentage(::car_interfaces::msg::CarOriInterface::_throttle_percentage_type arg)
  {
    msg_.throttle_percentage = std::move(arg);
    return Init_CarOriInterface_braking_percentage(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_car_run_mode
{
public:
  explicit Init_CarOriInterface_car_run_mode(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_throttle_percentage car_run_mode(::car_interfaces::msg::CarOriInterface::_car_run_mode_type arg)
  {
    msg_.car_run_mode = std::move(arg);
    return Init_CarOriInterface_throttle_percentage(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_batterydischargecur
{
public:
  explicit Init_CarOriInterface_batterydischargecur(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_car_run_mode batterydischargecur(::car_interfaces::msg::CarOriInterface::_batterydischargecur_type arg)
  {
    msg_.batterydischargecur = std::move(arg);
    return Init_CarOriInterface_car_run_mode(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_batteryvol
{
public:
  explicit Init_CarOriInterface_batteryvol(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_batterydischargecur batteryvol(::car_interfaces::msg::CarOriInterface::_batteryvol_type arg)
  {
    msg_.batteryvol = std::move(arg);
    return Init_CarOriInterface_batterydischargecur(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_soc
{
public:
  explicit Init_CarOriInterface_soc(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_batteryvol soc(::car_interfaces::msg::CarOriInterface::_soc_type arg)
  {
    msg_.soc = std::move(arg);
    return Init_CarOriInterface_batteryvol(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_parkingstate
{
public:
  explicit Init_CarOriInterface_parkingstate(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_soc parkingstate(::car_interfaces::msg::CarOriInterface::_parkingstate_type arg)
  {
    msg_.parkingstate = std::move(arg);
    return Init_CarOriInterface_soc(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_braketq
{
public:
  explicit Init_CarOriInterface_braketq(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_parkingstate braketq(::car_interfaces::msg::CarOriInterface::_braketq_type arg)
  {
    msg_.braketq = std::move(arg);
    return Init_CarOriInterface_parkingstate(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_gearpos
{
public:
  explicit Init_CarOriInterface_gearpos(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_braketq gearpos(::car_interfaces::msg::CarOriInterface::_gearpos_type arg)
  {
    msg_.gearpos = std::move(arg);
    return Init_CarOriInterface_braketq(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_steerangle
{
public:
  explicit Init_CarOriInterface_steerangle(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_gearpos steerangle(::car_interfaces::msg::CarOriInterface::_steerangle_type arg)
  {
    msg_.steerangle = std::move(arg);
    return Init_CarOriInterface_gearpos(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_carspeed
{
public:
  explicit Init_CarOriInterface_carspeed(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_steerangle carspeed(::car_interfaces::msg::CarOriInterface::_carspeed_type arg)
  {
    msg_.carspeed = std::move(arg);
    return Init_CarOriInterface_steerangle(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_id
{
public:
  explicit Init_CarOriInterface_id(::car_interfaces::msg::CarOriInterface & msg)
  : msg_(msg)
  {}
  Init_CarOriInterface_carspeed id(::car_interfaces::msg::CarOriInterface::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_CarOriInterface_carspeed(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

class Init_CarOriInterface_timestamp
{
public:
  Init_CarOriInterface_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarOriInterface_id timestamp(::car_interfaces::msg::CarOriInterface::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CarOriInterface_id(msg_);
  }

private:
  ::car_interfaces::msg::CarOriInterface msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_interfaces::msg::CarOriInterface>()
{
  return car_interfaces::msg::builder::Init_CarOriInterface_timestamp();
}

}  // namespace car_interfaces

#endif  // CAR_INTERFACES__MSG__DETAIL__CAR_ORI_INTERFACE__BUILDER_HPP_
