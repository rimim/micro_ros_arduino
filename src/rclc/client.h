// Copyright (c) 2019 - for information on the respective copyright owner
// see the NOTICE file and/or the repository https://github.com/ros2/rclc.
// Copyright 2014 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef RCLC__CLIENT_H_
#define RCLC__CLIENT_H_

#if __cplusplus
extern "C"
{
#endif

#include <rcl/client.h>
#include <rcl/allocator.h>
#include <rclc/types.h>

/**
 *  Creates an rcl client.
 *
 *  * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes (in RCL)
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[inout] client a zero_initialized rcl_client_t
 * \param[in] node the rcl node TODO
 * \param[in] type_support the message data type TODO
 * \param[in] topic_name the name of client topic TODO
 * \return `RCL_RET_OK` if successful
 * \return `RCL_ERROR` (or other error code) if an error has occurred
 */
rcl_ret_t
rclc_client_init_default(
  rcl_client_t * client,
  const rcl_node_t * node,
  const rosidl_service_type_support_t * type_support,
  const char * topic_name);

/**
 *  Creates an rcl client with quality-of-service option best effort
 *
 *  * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | Yes (in RCL)
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param[inout] client a zero_initialized rcl_client_t
 * \param[in] node the rcl node
 * \param[in] type_support the message data type
 * \param[in] topic_name the name of client topic
 * \return `RCL_RET_OK` if successful
 * \return `RCL_ERROR` (or other error code) if an error has occurred
 */
rcl_ret_t
rclc_client_init_best_effort(
  rcl_client_t * client,
  const rcl_node_t * node,
  const rosidl_service_type_support_t * type_support,
  const char * topic_name);

#if __cplusplus
}
#endif

#endif  // RCLC__CLIENT_H_
