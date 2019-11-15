#include "pathfinder.h"

void mx_search_route(char **island_arr, t_path **path, int path_number) {
    bool result = false;
    t_route *route = NULL;
    t_route_arr *route_arr = NULL;

    for (int i = 0; i < path_number; i += 2) {
        if (mx_strcmp(begin, path[i] -> island1))
        	continue;
        
        mx_push_route_arr(&route_arr, mx_create_route(path[i]));
    }
}
