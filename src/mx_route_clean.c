#include "pathfinder.h"

void mx_route_clean(t_route **route) {
    t_route *temp1 = *route;
    t_route *temp2 = NULL;
    int index = 0;

    for (int i = 0; temp1; i++) {
        index = i + 1;
        temp2 = temp1 -> route_next;
        while (temp2) {
            if (!mx_route_check(temp1, temp2)) {
                mx_del_route_index(route, index);
                temp2 = NULL;
                temp2 = mx_get_pointer(route, index);
                continue;                
            }
            index++;
            temp2  = temp2 -> route_next;
        }
        temp1 = temp1 -> route_next;
    }
}
