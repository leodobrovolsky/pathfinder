#include "pathfinder.h"

void mx_print_route_arr(t_route *route_arr) {
    t_route *tmp = route_arr;
    int i = 0;
    
    while (tmp) {
    	mx_print_route(tmp);
        mx_printchar('\n');
    	tmp = tmp -> route_next;
        i++;
    }
}
