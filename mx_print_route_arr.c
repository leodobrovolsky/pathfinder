#include "pathfinder.h"

void mx_print_route_arr(t_route *route_arr) {
	if (!route_arr) {
		mx_printstr("(null)\n");
		return;
	}

    t_route *tmp_route = route_arr;
    t_route *tmp = route_arr;
    


    while (tmp) {
        for (int i = 0; i < 40; i++)
            mx_printchar('=');
        mx_printstr("\nPath: ");
        mx_printstr(tmp -> path -> island1);
        mx_printstr(" -> ");
        tmp_route = tmp;
        while (tmp_route -> path_next != NULL) 
            tmp_route = tmp_route -> path_next;
        
        mx_printstr(tmp_route -> path -> island2);
        mx_printchar('\n');
    	mx_print_route(tmp);
        for (int i = 0; i < 40; i++)
            mx_printchar('=');
        mx_printchar('\n');
    	tmp = tmp -> route_next;
    }
}
