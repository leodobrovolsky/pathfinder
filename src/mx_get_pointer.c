#include "pathfinder.h"

t_route *mx_get_pointer(t_route **route, int index) {
    t_route *temp = *route;

    if (!temp)
        return NULL;

    for (int i = 0; i < index; i++) 
        if (temp)
            temp = temp -> route_next;

    return temp;
}
