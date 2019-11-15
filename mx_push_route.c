#include "pathfinder.h"

void mx_push_route(t_route **route, t_path *path) {
    t_route *back = mx_create_route(path);
    t_route *temp = *route;

    if (*route == NULL) {
        *route = back;
        return;
    }

    while (temp -> next != NULL) {
    	// if (!mx_strcmp(temp -> path, path))
    	// 	return;
        temp = temp -> next;
    }

    temp -> next = back;
}
