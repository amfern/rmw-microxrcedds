// Copyright 2019 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

#include <rmw/rmw.h>
#include <rmw/error_handling.h>

rmw_ret_t rmw_service_server_is_available(
        const rmw_node_t* node,
        const rmw_client_t* client,
        bool* is_available)
{
    (void)node;
    (void)client;
    (void)is_available;
    RMW_SET_ERROR_MSG("function not implemented");
    return RMW_RET_UNSUPPORTED;
}
