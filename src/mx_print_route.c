#include "pathfinder.h"

void mx_print_route(t_route *route) {
    t_route *temp = route;

    mx_printstr("\nRoute: ");
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
    mx_printstr("\n");
}
