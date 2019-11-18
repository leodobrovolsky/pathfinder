#include "pathfinder.h"

int mx_path_route_cmp(t_path **path, t_route *route, int path_number) {
    for (int i = 0; i < path_number; i++) {
        if (!mx_strcmp(path[i] -> island1, route -> path -> island1) 
        	&& !mx_strcmp(path[i] -> island2, route -> path -> island2))
        	    return i;
    }
    return -1;
}
