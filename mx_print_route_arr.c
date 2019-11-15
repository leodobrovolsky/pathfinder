#include "pathfinder.h"

void mx_print_route_arr(t_route_arr *route_arr) {
    t_route_arr *tmp = route_arr;
    int i = 0;
    while (tmp) {
    	mx_printint(i);
    	mx_printstr(": ");
    	mx_print_route(tmp -> route);
        mx_printchar('\n');
    	tmp = tmp -> next;
        i++;
    }
}
