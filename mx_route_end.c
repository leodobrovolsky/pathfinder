#include "pathfinder.h"

char *mx_route_end(t_route *route) {
    t_route *temp = route;

    if (temp == NULL)
    	return NULL;

    while (temp -> next != NULL)
    	temp = temp -> next;

    return temp -> path -> island2;
}
