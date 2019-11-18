#include "pathfinder.h"

void mx_del_route_arr(t_route **route_arr) {
    t_route *present = *route_arr;
    t_route *last = *route_arr;
    t_route *tmp = NULL;

    while (present) {
    	present = present -> route_next;
    	mx_del_route(&last);
    	free(last);
    	last = present;
    }

    *route_arr = NULL;
}
