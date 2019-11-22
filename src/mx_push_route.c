#include "pathfinder.h"

void mx_push_route(t_route **route, t_path *path) {
    t_route *back = mx_create_route(path);
    t_route *temp = *route;

    if (*route == NULL) {
        *route = back;
        return;
    }

    while (temp -> path_next != NULL) 
        temp = temp -> path_next;

    temp -> path_next = back;
}
