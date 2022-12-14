/*
 * Copyright (c) 2014-2018 Cesanta Software Limited
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the ""License"");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an ""AS IS"" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

enum esp_chip_type {
  ESP_CHIP_TYPE_ESP8266EX = 0,
  ESP_CHIP_TYPE_ESP8285 = 1,
};
enum esp_chip_type esp_get_chip_type(void);
const char *esp_chip_type_str(enum esp_chip_type dev_type);

#ifdef __cplusplus
}
#endif
