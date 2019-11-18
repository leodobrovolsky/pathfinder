#include "pathfinder.h"

void mx_push_route_arr(t_route **route_arr, t_path *path) {
    t_route *back = mx_create_route(path);
    t_route *temp = *route_arr;

    if (*route_arr == NULL) {
        *route_arr = back;
        return;
    }

    while (temp -> route_next != NULL) 
        temp = temp -> route_next;

    temp -> route_next = back;
}
