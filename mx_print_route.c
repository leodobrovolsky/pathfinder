#include "pathfinder.h"

void mx_print_route(t_route *route) {
    t_route *temp = route;
    mx_printstr("Route: ");
    int sum_dist = 0;

    while (temp) {
    	mx_printstr(temp -> path -> island1);
    	if (temp -> path_next != NULL) 
    	    mx_printstr(" -> ");
    	else {
    		mx_printstr(" -> ");
    		mx_printstr(temp -> path -> island2);
    	}
    	temp = temp -> path_next;
    }   

    mx_printstr("\nDistance: ");
    temp = route;
    if (temp -> path_next == NULL) {
        mx_printint(temp -> path -> dist);
        mx_printstr("\n");
        return;
    }

    while (temp) {
        mx_printint(temp -> path -> dist);
        sum_dist += temp -> path -> dist;
        if (temp -> path_next != NULL)
            mx_printstr(" + ");
        temp = temp -> path_next;
    }  
    
    mx_printstr(" = ");
    mx_printint(sum_dist);
    mx_printstr("\n");
}
