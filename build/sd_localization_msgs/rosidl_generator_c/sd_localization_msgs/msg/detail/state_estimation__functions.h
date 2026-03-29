// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sd_localization_msgs:msg/StateEstimation.idl
// generated code does not contain a copyright notice

#ifndef SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__FUNCTIONS_H_
#define SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sd_localization_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sd_localization_msgs/msg/detail/state_estimation__struct.h"

/// Initialize msg/StateEstimation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sd_localization_msgs__msg__StateEstimation
 * )) before or use
 * sd_localization_msgs__msg__StateEstimation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
bool
sd_localization_msgs__msg__StateEstimation__init(sd_localization_msgs__msg__StateEstimation * msg);

/// Finalize msg/StateEstimation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
void
sd_localization_msgs__msg__StateEstimation__fini(sd_localization_msgs__msg__StateEstimation * msg);

/// Create msg/StateEstimation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sd_localization_msgs__msg__StateEstimation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
sd_localization_msgs__msg__StateEstimation *
sd_localization_msgs__msg__StateEstimation__create();

/// Destroy msg/StateEstimation message.
/**
 * It calls
 * sd_localization_msgs__msg__StateEstimation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
void
sd_localization_msgs__msg__StateEstimation__destroy(sd_localization_msgs__msg__StateEstimation * msg);

/// Check for msg/StateEstimation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
bool
sd_localization_msgs__msg__StateEstimation__are_equal(const sd_localization_msgs__msg__StateEstimation * lhs, const sd_localization_msgs__msg__StateEstimation * rhs);

/// Copy a msg/StateEstimation message.
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
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
bool
sd_localization_msgs__msg__StateEstimation__copy(
  const sd_localization_msgs__msg__StateEstimation * input,
  sd_localization_msgs__msg__StateEstimation * output);

/// Initialize array of msg/StateEstimation messages.
/**
 * It allocates the memory for the number of elements and calls
 * sd_localization_msgs__msg__StateEstimation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
bool
sd_localization_msgs__msg__StateEstimation__Sequence__init(sd_localization_msgs__msg__StateEstimation__Sequence * array, size_t size);

/// Finalize array of msg/StateEstimation messages.
/**
 * It calls
 * sd_localization_msgs__msg__StateEstimation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
void
sd_localization_msgs__msg__StateEstimation__Sequence__fini(sd_localization_msgs__msg__StateEstimation__Sequence * array);

/// Create array of msg/StateEstimation messages.
/**
 * It allocates the memory for the array and calls
 * sd_localization_msgs__msg__StateEstimation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
sd_localization_msgs__msg__StateEstimation__Sequence *
sd_localization_msgs__msg__StateEstimation__Sequence__create(size_t size);

/// Destroy array of msg/StateEstimation messages.
/**
 * It calls
 * sd_localization_msgs__msg__StateEstimation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
void
sd_localization_msgs__msg__StateEstimation__Sequence__destroy(sd_localization_msgs__msg__StateEstimation__Sequence * array);

/// Check for msg/StateEstimation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
bool
sd_localization_msgs__msg__StateEstimation__Sequence__are_equal(const sd_localization_msgs__msg__StateEstimation__Sequence * lhs, const sd_localization_msgs__msg__StateEstimation__Sequence * rhs);

/// Copy an array of msg/StateEstimation messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sd_localization_msgs
bool
sd_localization_msgs__msg__StateEstimation__Sequence__copy(
  const sd_localization_msgs__msg__StateEstimation__Sequence * input,
  sd_localization_msgs__msg__StateEstimation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SD_LOCALIZATION_MSGS__MSG__DETAIL__STATE_ESTIMATION__FUNCTIONS_H_
