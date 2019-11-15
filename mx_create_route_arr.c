#include "pathfinder.h"

t_route_arr *mx_create_route_arr(t_route *route) {
    t_route_arr *new_route_arr = malloc(sizeof(t_route_arr));

    new_route_arr -> route = route;
    new_route_arr -> next = NULL;

    return new_route_arr;
}
