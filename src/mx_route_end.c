#include "pathfinder.h"

char *mx_route_end(t_route *route) {
    t_route *tmp = route;

    while (tmp -> path_next)
        tmp = tmp -> path_next;

    return tmp -> path -> island2;
}
