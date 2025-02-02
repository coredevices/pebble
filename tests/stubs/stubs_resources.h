/*
 * Copyright 2024 Google LLC
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

#include "resource/resource.h"

ResAppNum app_get_resource_num(void) {
  return 0;
}

bool resource_init_app(ResAppNum app_num, const ResourceVersion *version) {
  return true;
}

size_t resource_size(ResAppNum app_num, uint32_t id) {
  return 0;
}

size_t resource_load_byte_range_system(ResAppNum app_num, uint32_t id, uint32_t start_offset, uint8_t *data, size_t num_bytes) {
  return 0;
}

bool resource_is_valid(ResAppNum app_num, uint32_t resource_id) {
  return true;
}
