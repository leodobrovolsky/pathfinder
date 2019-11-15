#include "pathfinder.h"

bool mx_route_cmp(t_route *route1, t_route *route2) {
    t_route *first = route1;
    t_route *second = route2;
    int i = 0;
    int j = 0;

    while (first && second) {
        if (!mx_strcmp(route1 -> path -> island1, route2 -> path -> island1) 
            && !mx_strcmp(route1 -> path -> island2, route2 -> path -> island2))
                j++;
        i++;
        first = first -> next;
        second = second -> next;
    }

    if (first || second)
    	return false;
    
    if (i == j)
        return false;
    else
        return true;
}
