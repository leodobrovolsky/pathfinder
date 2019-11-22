#include "pathfinder.h"

void mx_route_clean(t_route **route) {
    t_route *temp_route = *route;
    t_route *temp_path = NULL;
    t_path *temp1_begin = NULL;
    t_path *temp1_end = NULL;
    t_path *temp2_begin = NULL;
    t_path *temp2_end = NULL;
    int dist_sum = 0;
    int index_route = 0;
    int index_path = 0;
    int ind = 0;


    while (temp_route) {
        temp_path = temp_route -> route_next;
        dist_sum = mx_sum_route_dist(temp_route);
        temp1_begin = temp_route -> path;
        temp1_end = mx_get_route_end(temp_route);
        index_path = index_route + 1;
        ind = 0;

        while (temp_path) {
            temp2_begin = temp_path-> path;
            temp2_end = mx_get_route_end(temp_path);

            if (mx_route_cmp(temp_route, temp_path)) {
                mx_del_route_index(route, index_path);
                temp_path = mx_get_pointer(*route, index_path);
                continue;               
            }
            else if (mx_path_cmp(temp1_begin, temp2_end, 0)) {
                mx_del_route_index(route, index_path);
                temp_path = mx_get_pointer(*route, index_path);
                continue;
            }
            else if (mx_sum_route_dist(temp_path) > dist_sum 
                && mx_path_cmp(temp1_begin, temp2_begin, 1) 
                && mx_path_cmp(temp1_end, temp2_end, 2)) {
                    mx_del_route_index(route, index_path);
                    temp_path = mx_get_pointer(*route, index_path);
                    continue;           	
            }
            else if (dist_sum > mx_sum_route_dist(temp_path)
                && mx_path_cmp(temp1_begin, temp2_begin, 1) 
                && mx_path_cmp(temp1_end, temp2_end, 2)) {
                    mx_del_route_index(route, index_route);
                    temp_route = mx_get_pointer(*route, index_route);
                    ind++;
                    break;               
            }
             
        	temp_path = temp_path -> route_next;
        	index_path++;
        }

        if (ind == 0) {
            index_route++;
            temp_route = temp_route -> route_next;
        }
    }
}
