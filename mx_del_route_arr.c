#include "pathfinder.h"

void mx_del_route_arr(t_route_arr **route_arr) {
    t_route_arr *present = *route_arr;
    t_route_arr *last = *route_arr;

    while (present) {
    	present = present -> next;
    	mx_del_route(&(last -> route));
    	free(last);
    	last = present;
    }
}
