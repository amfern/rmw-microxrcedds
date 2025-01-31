// Copyright 2021 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#include "rmw/error_handling.h"
#include "rmw/rmw.h"
#include "rmw/validate_namespace.h"
#include "rmw/validate_node_name.h"

#include "rmw_microxrcedds_c/config.h"
#include "rmw_base_test.hpp"
#include "test_utils.hpp"

#include "../src/types.h"

/*
 * Testing client construction and destruction.
 */


TEST_F(RMWBaseTest, estimate_default_static_memory)
{
    unsigned long context_size = sizeof(rmw_context_impl_t);
    unsigned long topic_size = sizeof(rmw_uxrce_topic_t);
    unsigned long service_size = sizeof(rmw_uxrce_service_t);
    unsigned long client_size = sizeof(rmw_uxrce_client_t);
    unsigned long subscription_size = sizeof(rmw_uxrce_subscription_t);
    unsigned long publisher_size = sizeof(rmw_uxrce_publisher_t);
    unsigned long node_size = sizeof(rmw_uxrce_node_t);
    // unsigned long static_input_buffer_size = sizeof(rmw_uxrce_static_input_buffer_t);

    fprintf(stderr, "# Static memory analisys \n");
    fprintf(stderr, "_**Default configuration**_\n");
    fprintf(stderr, "\n");

    fprintf(stderr, "MTU: %d B\n", RMW_UXRCE_MAX_TRANSPORT_MTU);
    fprintf(stderr, "Input buffer size: %d B\n", RMW_UXRCE_MAX_INPUT_BUFFER_SIZE);
    fprintf(stderr, "Input history: %d\n", RMW_UXRCE_STREAM_HISTORY_INPUT);
    fprintf(stderr, "Output buffer size: %d B\n", RMW_UXRCE_MAX_OUTPUT_BUFFER_SIZE);
    fprintf(stderr, "Output history: %d\n", RMW_UXRCE_STREAM_HISTORY_OUTPUT);
    fprintf(stderr, "\n");

    fprintf(stderr, "| Entity | Qty | Size per unit |\n");
    fprintf(stderr, "| - | - | - |\n");
    fprintf(stderr, "| Context | %d | %ld B | \n", RMW_UXRCE_MAX_SESSIONS, context_size);
    fprintf(stderr, "| Topic | %d | %ld B | \n", RMW_UXRCE_MAX_TOPICS_INTERNAL, topic_size);
    fprintf(stderr, "| Service | %d | %ld B | \n", RMW_UXRCE_MAX_SERVICES, service_size);
    fprintf(stderr, "| Client | %d | %ld B | \n", RMW_UXRCE_MAX_CLIENTS, client_size);
    fprintf(stderr, "| Subscription | %d | %ld B | \n", RMW_UXRCE_MAX_SUBSCRIPTIONS, subscription_size);
    fprintf(stderr, "| Publisher | %d | %ld B | \n", RMW_UXRCE_MAX_PUBLISHERS, publisher_size);
    fprintf(stderr, "| Node | %d | %ld B | \n", RMW_UXRCE_MAX_NODES, node_size);
    // fprintf(stderr, "Static input buffer | %d | :%ld B | \n",RMW_UXRCE_MAX_HISTORY,static_input_buffer_size);

    unsigned long total =   RMW_UXRCE_MAX_SESSIONS * context_size +
            RMW_UXRCE_MAX_TOPICS_INTERNAL * topic_size +
            RMW_UXRCE_MAX_SERVICES * service_size +
            RMW_UXRCE_MAX_CLIENTS * client_size +
            RMW_UXRCE_MAX_SUBSCRIPTIONS * subscription_size +
            RMW_UXRCE_MAX_PUBLISHERS * publisher_size +
            RMW_UXRCE_MAX_NODES * node_size;
    // RMW_UXRCE_MAX_HISTORY * static_input_buffer_size;

    fprintf(stderr, "\n");
    fprintf(stderr, "**TOTAL: %ld B**\n", total);
}
