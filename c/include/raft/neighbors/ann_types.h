#pragma once

#include <stdbool.h>
#include "raft/distance/distance_types.h"

typedef struct raft_neighbors_ann_index_params_s
{
    /** Distance type. */
    enum RaftDistanceDistanceType metric;

    /** The argument used by some distance metrics. */
    float metric_arg;
    /**
     * Whether to add the dataset content to the index, i.e.:
     *
     *  - `true` means the index is filled with the dataset vectors and ready to search after calling
     * `build`.
     *  - `false` means `build` only trains the underlying model (e.g. quantizer or clustering), but
     * the index is left empty; you'd need to call `extend` on the index afterwards to populate it.
     */
    bool add_data_on_build;
} raft_neighbors_ann_index_params_t;