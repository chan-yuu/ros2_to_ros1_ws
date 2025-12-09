// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from car_interfaces:msg/LocalPathPlanningInterface.idl
// generated code does not contain a copyright notice

#ifndef CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__FUNCTIONS_H_
#define CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "car_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "car_interfaces/msg/detail/local_path_planning_interface__struct.h"

/// Initialize msg/LocalPathPlanningInterface message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * car_interfaces__msg__LocalPathPlanningInterface
 * )) before or use
 * car_interfaces__msg__LocalPathPlanningInterface__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__LocalPathPlanningInterface__init(car_interfaces__msg__LocalPathPlanningInterface * msg);

/// Finalize msg/LocalPathPlanningInterface message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__LocalPathPlanningInterface__fini(car_interfaces__msg__LocalPathPlanningInterface * msg);

/// Create msg/LocalPathPlanningInterface message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * car_interfaces__msg__LocalPathPlanningInterface__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
car_interfaces__msg__LocalPathPlanningInterface *
car_interfaces__msg__LocalPathPlanningInterface__create();

/// Destroy msg/LocalPathPlanningInterface message.
/**
 * It calls
 * car_interfaces__msg__LocalPathPlanningInterface__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__LocalPathPlanningInterface__destroy(car_interfaces__msg__LocalPathPlanningInterface * msg);

/// Check for msg/LocalPathPlanningInterface message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__LocalPathPlanningInterface__are_equal(const car_interfaces__msg__LocalPathPlanningInterface * lhs, const car_interfaces__msg__LocalPathPlanningInterface * rhs);

/// Copy a msg/LocalPathPlanningInterface message.
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
car_interfaces__msg__LocalPathPlanningInterface__copy(
  const car_interfaces__msg__LocalPathPlanningInterface * input,
  car_interfaces__msg__LocalPathPlanningInterface * output);

/// Initialize array of msg/LocalPathPlanningInterface messages.
/**
 * It allocates the memory for the number of elements and calls
 * car_interfaces__msg__LocalPathPlanningInterface__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__LocalPathPlanningInterface__Sequence__init(car_interfaces__msg__LocalPathPlanningInterface__Sequence * array, size_t size);

/// Finalize array of msg/LocalPathPlanningInterface messages.
/**
 * It calls
 * car_interfaces__msg__LocalPathPlanningInterface__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__LocalPathPlanningInterface__Sequence__fini(car_interfaces__msg__LocalPathPlanningInterface__Sequence * array);

/// Create array of msg/LocalPathPlanningInterface messages.
/**
 * It allocates the memory for the array and calls
 * car_interfaces__msg__LocalPathPlanningInterface__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
car_interfaces__msg__LocalPathPlanningInterface__Sequence *
car_interfaces__msg__LocalPathPlanningInterface__Sequence__create(size_t size);

/// Destroy array of msg/LocalPathPlanningInterface messages.
/**
 * It calls
 * car_interfaces__msg__LocalPathPlanningInterface__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
void
car_interfaces__msg__LocalPathPlanningInterface__Sequence__destroy(car_interfaces__msg__LocalPathPlanningInterface__Sequence * array);

/// Check for msg/LocalPathPlanningInterface message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_car_interfaces
bool
car_interfaces__msg__LocalPathPlanningInterface__Sequence__are_equal(const car_interfaces__msg__LocalPathPlanningInterface__Sequence * lhs, const car_interfaces__msg__LocalPathPlanningInterface__Sequence * rhs);

/// Copy an array of msg/LocalPathPlanningInterface messages.
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
car_interfaces__msg__LocalPathPlanningInterface__Sequence__copy(
  const car_interfaces__msg__LocalPathPlanningInterface__Sequence * input,
  car_interfaces__msg__LocalPathPlanningInterface__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAR_INTERFACES__MSG__DETAIL__LOCAL_PATH_PLANNING_INTERFACE__FUNCTIONS_H_
