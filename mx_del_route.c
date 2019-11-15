#include "pathfinder.h"

void mx_del_route(t_route **route) {
	if (!route)
		return;

    t_route *last = *route;
    t_route *present = *route;

    while (present) {
        present = present -> next;
        free(last);
        last = present;
    }

    *route = NULL;
}
