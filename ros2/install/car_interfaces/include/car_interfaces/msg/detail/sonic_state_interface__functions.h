// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from car_interfaces:msg/SonicStateInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__FUNCTIONS_H_
#define CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "car_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "car_interfaces/msg/detail/sonic_state_interface__struct.h"

/// Initialize msg/SonicStateInterface message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * car_interfaces__msg__SonicStateInterface
 * )) before or use
 * car_interfaces__msg__SonicStateInterface__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__SonicStateInterface__init(car_interfaces__msg__SonicStateInterface * msg);

/// Finalize msg/SonicStateInterface message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__SonicStateInterface__fini(car_interfaces__msg__SonicStateInterface * msg);

/// Create msg/SonicStateInterface message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * car_interfaces__msg__SonicStateInterface__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
car_interfaces__msg__SonicStateInterface *
car_interfaces__msg__SonicStateInterface__create();

/// Destroy msg/SonicStateInterface message.
/**
 * It calls
 * car_interfaces__msg__SonicStateInterface__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__SonicStateInterface__destroy(car_interfaces__msg__SonicStateInterface * msg);

/// Check for msg/SonicStateInterface message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__SonicStateInterface__are_equal(const car_interfaces__msg__SonicStateInterface * lhs, const car_interfaces__msg__SonicStateInterface * rhs);

/// Copy a msg/SonicStateInterface message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__SonicStateInterface__copy(
  const car_interfaces__msg__SonicStateInterface * input,
  car_interfaces__msg__SonicStateInterface * output);

/// Initialize array of msg/SonicStateInterface messages.
/**
 * It allocates the memory for the number of elements and calls
 * car_interfaces__msg__SonicStateInterface__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__SonicStateInterface__Sequence__init(car_interfaces__msg__SonicStateInterface__Sequence * array, size_t size);

/// Finalize array of msg/SonicStateInterface messages.
/**
 * It calls
 * car_interfaces__msg__SonicStateInterface__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__SonicStateInterface__Sequence__fini(car_interfaces__msg__SonicStateInterface__Sequence * array);

/// Create array of msg/SonicStateInterface messages.
/**
 * It allocates the memory for the array and calls
 * car_interfaces__msg__SonicStateInterface__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
car_interfaces__msg__SonicStateInterface__Sequence *
car_interfaces__msg__SonicStateInterface__Sequence__create(size_t size);

/// Destroy array of msg/SonicStateInterface messages.
/**
 * It calls
 * car_interfaces__msg__SonicStateInterface__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__SonicStateInterface__Sequence__destroy(car_interfaces__msg__SonicStateInterface__Sequence * array);

/// Check for msg/SonicStateInterface message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__SonicStateInterface__Sequence__are_equal(const car_interfaces__msg__SonicStateInterface__Sequence * lhs, const car_interfaces__msg__SonicStateInterface__Sequence * rhs);

/// Copy an array of msg/SonicStateInterface messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__SonicStateInterface__Sequence__copy(
  const car_interfaces__msg__SonicStateInterface__Sequence * input,
  car_interfaces__msg__SonicStateInterface__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__SONIC_STATE_INTERFACE__FUNCTIONS_H_
