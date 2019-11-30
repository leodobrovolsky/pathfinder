#include "pathfinder.h"

void mx_route_clean(t_route **route) {
    t_route *temp_route = *route;
    t_route *temp_path = NULL;
    int ind = 0;

    for (int index1 = 0; temp_route; index1++) {
        for (int index2 = index1 + 1; temp_path; index2++) {
            ind = mx_route_check(temp_route, temp_path, index1, index2);
            if (ind > 0)
                mx_del_route_index(route, ind);
            temp_path = mx_get_pointer(route, index2);              
            temp_route = mx_get_pointer(route, index1);
            temp_path = temp_path -> route_next;
            if (ind == index1)
                index1--;
        }
        if (ind != -1) 
            temp_route = temp_route -> route_next;
    }
}
