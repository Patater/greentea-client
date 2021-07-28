/*
 * Copyright (c) 2021, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <cstdio>
#include "greentea-client/test_env.h"

/* Implementation of test_io.h */

static FILE *input;
static FILE *output;

void one_plus_one_is_two()
{
    size_t passes;
    size_t failures;

    GREENTEA_START(one_plus_one_is_two);

    passes = 1 + 1 == 2;
    failures = 0;

    GREENTEA_FINISH(one_plus_one_is_two, passes, failures);
}

int main()
{
    one_plus_one_is_two();

    return 0;
}
