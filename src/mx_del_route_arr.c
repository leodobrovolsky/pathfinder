#include "pathfinder.h"

void mx_del_route_arr(t_route **route_arr) {
    t_route *present = *route_arr;

    while (present) 
        mx_del_route_index(&present, 0);

    *route_arr = NULL;
}
