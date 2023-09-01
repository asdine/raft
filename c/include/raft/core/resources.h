#pragma once

#ifdef __cplusplus
#include "raft/core/resources.hpp"
extern "C"
{
#endif

    typedef struct raft_resources_s
    {
        void *resources; // raft::resources
    } raft_resources_t;

    void raft_resources_create(raft_resources_t *res);
    void raft_resources_destroy(raft_resources_t *res);

#ifdef __cplusplus
}
#endif
