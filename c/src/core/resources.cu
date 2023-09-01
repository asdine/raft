#include "raft/core/resources.h"
#include "raft/core/resources.hpp"

extern "C"
{
    void raft_resources_create(raft_resources_t *res)
    {
        res->resources = new raft::resources();
    }

    void raft_resources_destroy(raft_resources_t *res)
    {
        if (res->resources)
        {
            delete static_cast<raft::resources *>(res->resources);
        }
    }
}