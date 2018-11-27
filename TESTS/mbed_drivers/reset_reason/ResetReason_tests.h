/* Mbed Microcontroller Library
 * Copyright (c) 2018 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @addtogroup drivers_reset_reason_tests
 * @{
 */

#ifndef MBED_DRIVERS_RESET_REASON_TESTS_H
#define MBED_DRIVERS_RESET_REASON_TESTS_H

#if DEVICE_RESET_REASON

/** Test the ResetReason driver API
 *
 * Given a device supporting a ResetReason API,
 * when the device is restarted,
 * then the device returns a correct reset reason for every restart.
 */
void test_reset_reason();

#endif

#endif

/** @}*/

