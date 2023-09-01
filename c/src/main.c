#include <stdio.h>
#include "raft/core/resources.h"
#include "raft/distance/distance_types.h"
#include "raft/neighbors/cagra_types.h"

int main(int argc, char **argv)
{
    raft_resources_t res;
    raft_resources_create(&res);

    printf("%p\n", &res);

    raft_resources_destroy(&res);

    raft_neighbors_cagra_index_params_t params;

    params.ann.metric = L2SqrtExpanded;
    params.ann.add_data_on_build = true;
    params.ann.metric_arg = 1.0;
    params.graph_degree = 1;
    params.intermediate_graph_degree = 1;

    printf("%d\n", params.ann.metric);
    return 0;
}