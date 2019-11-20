#include "pathfinder.h"

void mx_del_route(t_route **route, int index) {
	if (!route)
		return;
    
    t_route *last = *route;
    t_route *present = *route; 

    if (present -> route_next != NULL && index > 0) {
        for (int i = 0; i < index; i++)
            if (present -> route_next != NULL) {
                last = present;
                present = present -> route_next;
            }

        last -> route_next = present -> route_next;
        last = present;
    }
    else
        *route = present -> route_next;

    while (present) {
        present = present -> path_next;
        free(last);
        last = NULL;
        last = present;
    }
    free(last);
   
}
