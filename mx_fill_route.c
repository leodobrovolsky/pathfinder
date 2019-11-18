#include "pathfinder.h"

bool mx_fill_route(t_route_arr **route_arr, char *begin, char *end, t_path **path, int path_number) {

    for (int i = 0; i < path_number; i++) {
        if (mx_strcmp(begin, path[i] -> island1))
        	continue;
        
        mx_push_route_arr(route_arr, mx_create_route(path[i]));

        if (!mx_strcmp(end, path[i] -> island2))
        	return true;
    }

    return false;
}
