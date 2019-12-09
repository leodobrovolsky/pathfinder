#include "pathfinder.h"

bool mx_route_check(t_route *r1, t_route *r2) {
    t_path *temp1_begin = r1 -> path;
    t_path *temp1_end = mx_get_route_end(r1);
    t_path *temp2_begin = r2 -> path;
    t_path *temp2_end = mx_get_route_end(r2);

    if (mx_route_cmp(r1, r2))
        return false;
    if (mx_path_cmp(temp1_begin, temp2_end, 0))
        return false;
    if (mx_sum_route_dist(r2) > mx_sum_route_dist(r1)
        && mx_path_cmp(temp1_begin, temp2_begin, 1) 
        && mx_path_cmp(temp1_end, temp2_end, 2)) 
            return false;     
    return true;
}
