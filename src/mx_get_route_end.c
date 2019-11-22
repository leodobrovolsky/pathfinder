#include "pathfinder.h"

t_path *mx_get_route_end(t_route *route) {
	t_route *temp = route;

    if (!temp)
    	return NULL;

    while (temp -> path_next)
    	temp = temp -> path_next;

    return temp -> path;
}
