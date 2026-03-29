// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sd_can_msgs:msg/KistlerAngVelBody.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__FUNCTIONS_H_
#define SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sd_can_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sd_can_msgs/msg/detail/kistler_ang_vel_body__struct.h"

/// Initialize msg/KistlerAngVelBody message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sd_can_msgs__msg__KistlerAngVelBody
 * )) before or use
 * sd_can_msgs__msg__KistlerAngVelBody__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__KistlerAngVelBody__init(sd_can_msgs__msg__KistlerAngVelBody * msg);

/// Finalize msg/KistlerAngVelBody message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__KistlerAngVelBody__fini(sd_can_msgs__msg__KistlerAngVelBody * msg);

/// Create msg/KistlerAngVelBody message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sd_can_msgs__msg__KistlerAngVelBody__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
sd_can_msgs__msg__KistlerAngVelBody *
sd_can_msgs__msg__KistlerAngVelBody__create();

/// Destroy msg/KistlerAngVelBody message.
/**
 * It calls
 * sd_can_msgs__msg__KistlerAngVelBody__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__KistlerAngVelBody__destroy(sd_can_msgs__msg__KistlerAngVelBody * msg);

/// Check for msg/KistlerAngVelBody message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__KistlerAngVelBody__are_equal(const sd_can_msgs__msg__KistlerAngVelBody * lhs, const sd_can_msgs__msg__KistlerAngVelBody * rhs);

/// Copy a msg/KistlerAngVelBody message.
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
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__KistlerAngVelBody__copy(
  const sd_can_msgs__msg__KistlerAngVelBody * input,
  sd_can_msgs__msg__KistlerAngVelBody * output);

/// Initialize array of msg/KistlerAngVelBody messages.
/**
 * It allocates the memory for the number of elements and calls
 * sd_can_msgs__msg__KistlerAngVelBody__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__KistlerAngVelBody__Sequence__init(sd_can_msgs__msg__KistlerAngVelBody__Sequence * array, size_t size);

/// Finalize array of msg/KistlerAngVelBody messages.
/**
 * It calls
 * sd_can_msgs__msg__KistlerAngVelBody__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__KistlerAngVelBody__Sequence__fini(sd_can_msgs__msg__KistlerAngVelBody__Sequence * array);

/// Create array of msg/KistlerAngVelBody messages.
/**
 * It allocates the memory for the array and calls
 * sd_can_msgs__msg__KistlerAngVelBody__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
sd_can_msgs__msg__KistlerAngVelBody__Sequence *
sd_can_msgs__msg__KistlerAngVelBody__Sequence__create(size_t size);

/// Destroy array of msg/KistlerAngVelBody messages.
/**
 * It calls
 * sd_can_msgs__msg__KistlerAngVelBody__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__KistlerAngVelBody__Sequence__destroy(sd_can_msgs__msg__KistlerAngVelBody__Sequence * array);

/// Check for msg/KistlerAngVelBody message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__KistlerAngVelBody__Sequence__are_equal(const sd_can_msgs__msg__KistlerAngVelBody__Sequence * lhs, const sd_can_msgs__msg__KistlerAngVelBody__Sequence * rhs);

/// Copy an array of msg/KistlerAngVelBody messages.
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
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__KistlerAngVelBody__Sequence__copy(
  const sd_can_msgs__msg__KistlerAngVelBody__Sequence * input,
  sd_can_msgs__msg__KistlerAngVelBody__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__KISTLER_ANG_VEL_BODY__FUNCTIONS_H_
