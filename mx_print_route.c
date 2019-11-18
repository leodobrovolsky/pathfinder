#include "pathfinder.h"

void mx_print_route(t_route *route) {
    t_route *temp = route;

    while (temp) {
    	mx_print_path(temp -> path);
    	if (temp -> path_next != NULL)
    	    mx_printstr(" -> ");
    	temp = temp -> path_next;
    }   
}
