#include "pathfinder.h"

void mx_print_dist(t_route *route) {
    t_route *temp = route;
    int dist = 0;
    mx_printstr("Distance: ");
    temp = route;
    if (temp -> path_next == NULL) {
        mx_printint(temp -> path -> dist);
        mx_printstr("\n");
        return;
    }
    while (temp) {
        dist += temp -> path -> dist;
        mx_printint(temp -> path -> dist);
        if (temp -> path_next != NULL)
            mx_printstr(" + ");
        temp = temp -> path_next;
    }  
    mx_printstr(" = ");
    mx_printint(dist);
    mx_printstr("\n");
}
