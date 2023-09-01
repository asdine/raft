#pragma once

#include "ann_types.h"

typedef struct raft_neighbors_cagra_index_params_s
{
    raft_neighbors_ann_index_params_t ann;
    /** Degree of input graph for pruning. */
    size_t intermediate_graph_degree;
    /** Degree of output graph. */
    size_t graph_degree;
} raft_neighbors_cagra_index_params_t;