#include "pathfinder.h"

t_route *mx_copy_route(t_route *route) {
    t_route *temp = route;
    t_route *new_route = NULL;

    while(temp) {
        mx_push_route(&new_route, temp -> path);
        temp = temp -> path_next;
    }
    return new_route;
}
