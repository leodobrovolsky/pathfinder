#include "pathfinder.h"

void mx_push_route_arr(t_route_arr **route_arr, t_route *route) {
    t_route_arr *back = mx_create_route_arr(route);
    t_route_arr *temp = *route_arr;

    if (*route_arr == NULL) {
        *route_arr = back;
        return;
    }

    while (temp -> next != NULL) 
        temp = temp -> next;

    temp -> next = back;
}
