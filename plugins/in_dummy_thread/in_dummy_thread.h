/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2019-2021 The Fluent Bit Authors
 *  Copyright (C) 2015-2018 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_IN_DUMMY_THREAD_H
#define FLB_IN_DUMMY_THREAD_H

#include <fluent-bit/flb_config.h>
#include <fluent-bit/flb_input.h>
#include <fluent-bit/flb_input_thread.h>

struct flb_in_dummy_thread_config {
    struct flb_input_instance *ins;
    struct flb_input_thread it;
    const char *message;
    int samples;
};

#endif
