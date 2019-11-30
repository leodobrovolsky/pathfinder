#include "pathfinder.h"

int mx_sum_route_dist(t_route *route) {
    t_route *temp = route;
    int dist = 0;

    while (temp) {
        dist += temp -> path -> dist;
        temp = temp -> path_next;
    }

    return dist;
}
