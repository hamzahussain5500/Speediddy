// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from sd_can_msgs:msg/HLPCInfo1.idl
// generated code does not contain a copyright notice

#ifndef SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__FUNCTIONS_H_
#define SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "sd_can_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "sd_can_msgs/msg/detail/hlpc_info1__struct.h"

/// Initialize msg/HLPCInfo1 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * sd_can_msgs__msg__HLPCInfo1
 * )) before or use
 * sd_can_msgs__msg__HLPCInfo1__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__HLPCInfo1__init(sd_can_msgs__msg__HLPCInfo1 * msg);

/// Finalize msg/HLPCInfo1 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__HLPCInfo1__fini(sd_can_msgs__msg__HLPCInfo1 * msg);

/// Create msg/HLPCInfo1 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * sd_can_msgs__msg__HLPCInfo1__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
sd_can_msgs__msg__HLPCInfo1 *
sd_can_msgs__msg__HLPCInfo1__create();

/// Destroy msg/HLPCInfo1 message.
/**
 * It calls
 * sd_can_msgs__msg__HLPCInfo1__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__HLPCInfo1__destroy(sd_can_msgs__msg__HLPCInfo1 * msg);

/// Check for msg/HLPCInfo1 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__HLPCInfo1__are_equal(const sd_can_msgs__msg__HLPCInfo1 * lhs, const sd_can_msgs__msg__HLPCInfo1 * rhs);

/// Copy a msg/HLPCInfo1 message.
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
sd_can_msgs__msg__HLPCInfo1__copy(
  const sd_can_msgs__msg__HLPCInfo1 * input,
  sd_can_msgs__msg__HLPCInfo1 * output);

/// Initialize array of msg/HLPCInfo1 messages.
/**
 * It allocates the memory for the number of elements and calls
 * sd_can_msgs__msg__HLPCInfo1__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__HLPCInfo1__Sequence__init(sd_can_msgs__msg__HLPCInfo1__Sequence * array, size_t size);

/// Finalize array of msg/HLPCInfo1 messages.
/**
 * It calls
 * sd_can_msgs__msg__HLPCInfo1__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__HLPCInfo1__Sequence__fini(sd_can_msgs__msg__HLPCInfo1__Sequence * array);

/// Create array of msg/HLPCInfo1 messages.
/**
 * It allocates the memory for the array and calls
 * sd_can_msgs__msg__HLPCInfo1__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
sd_can_msgs__msg__HLPCInfo1__Sequence *
sd_can_msgs__msg__HLPCInfo1__Sequence__create(size_t size);

/// Destroy array of msg/HLPCInfo1 messages.
/**
 * It calls
 * sd_can_msgs__msg__HLPCInfo1__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
void
sd_can_msgs__msg__HLPCInfo1__Sequence__destroy(sd_can_msgs__msg__HLPCInfo1__Sequence * array);

/// Check for msg/HLPCInfo1 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_sd_can_msgs
bool
sd_can_msgs__msg__HLPCInfo1__Sequence__are_equal(const sd_can_msgs__msg__HLPCInfo1__Sequence * lhs, const sd_can_msgs__msg__HLPCInfo1__Sequence * rhs);

/// Copy an array of msg/HLPCInfo1 messages.
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
sd_can_msgs__msg__HLPCInfo1__Sequence__copy(
  const sd_can_msgs__msg__HLPCInfo1__Sequence * input,
  sd_can_msgs__msg__HLPCInfo1__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SD_CAN_MSGS__MSG__DETAIL__HLPC_INFO1__FUNCTIONS_H_
