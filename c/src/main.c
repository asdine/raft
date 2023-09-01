#include <stdio.h>
#include "raft/core/resources.h"

int main(int argc, char **argv)
{
    raft_resources_t res;
    raft_resources_create(&res);

    printf("%p\n", &res);

    raft_resources_destroy(&res);
    return 0;
}