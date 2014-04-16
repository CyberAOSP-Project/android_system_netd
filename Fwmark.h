/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SYSTEM_NETD_FWMARK_H
#define SYSTEM_NETD_FWMARK_H

#include "Permission.h"

#include <stdint.h>

// Composes a fwmark comprising of |netId|, along with bits representing:
//     |exp|: true if the |netId| is being explicitly requested
//     |protect|: true if VPNs should be bypassed
//     |permission|: != PERMISSION_NONE to assert that |permission| is held
uint32_t getFwmark(unsigned netId, bool exp, bool protect, Permission permission);

// Composes a mask to test parts of the fwmark (see getFwmark() for details).
uint32_t getFwmarkMask(bool netId, bool exp, bool protect, Permission permission);

#endif  // SYSTEM_NETD_FWMARK_H