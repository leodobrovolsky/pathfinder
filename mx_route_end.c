#include "pathfinder.h"

char *mx_route_end(t_route *route) {
    t_route *temp = route;

    if (temp == NULL)
    	return NULL;

    while (temp -> path_next != NULL)
    	temp = temp -> path_next;

    return temp -> path -> island2;
}
