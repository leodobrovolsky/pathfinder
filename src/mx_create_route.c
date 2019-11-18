#include "pathfinder.h"

t_route *mx_create_route(t_path *path) {
    t_route *new_route = malloc(sizeof(t_route));

    new_route -> path = path;
    new_route -> path_next = NULL;
    new_route -> route_next = NULL;

    return new_route;
}
