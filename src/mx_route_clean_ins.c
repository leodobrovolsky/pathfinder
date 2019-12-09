#include "pathfinder.h"

static bool route_check(t_route *r1, t_route *r2) {
    t_path *temp1_begin = r1 -> path;
    t_path *temp1_end = mx_get_route_end(r1);
    t_path *temp2_begin = r2 -> path;
    t_path *temp2_end = mx_get_route_end(r2);

    if (mx_sum_route_dist(r1) > mx_sum_route_dist(r2)
        && mx_path_cmp(temp1_begin, temp2_begin, 1) 
        && mx_path_cmp(temp1_end, temp2_end, 2)) 
            return false;  
    return true;
}

void mx_route_clean_ins(t_route **route) {
    t_route *temp1 = *route;
    t_route *temp2 = NULL;
    int index = 0;

    while (temp1) {
        temp2 = temp1 -> route_next;
        for (int i = index + 1; temp2; i++) {
            if (!route_check(temp1, temp2)) {
                mx_del_route_index(route, index);
                temp1 = NULL;
                temp1 = mx_get_pointer(route, index);
                break;
            }
            temp2 = temp2 -> route_next;
        }
        if (!temp2) {
            temp1 = temp1 -> route_next;
            index++;
        }
    }
}
