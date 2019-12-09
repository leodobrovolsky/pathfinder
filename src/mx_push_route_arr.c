#include "pathfinder.h"

static bool path_cmp(t_path *path1, t_path *path2) {
    if (!mx_strcmp(path1 -> island1, path2 -> island1)
        && !mx_strcmp(path1 -> island2, path2-> island2))
            return false;
    return true;  
}

static bool route_valid(t_route *route, t_path *path) {
    t_route *temp = route;

    if (!mx_strcmp(route -> path -> island1, path -> island2))
        return false;
    while (temp) {
        if (!mx_strcmp(temp -> path -> island1, path -> island1)
            || !mx_strcmp(temp -> path -> island2, path -> island2))
                return false;
        temp = temp -> path_next;
    }
    if (!mx_strcmp(mx_route_end(route), path -> island1))
        return true;
    return false;
}

static void push_func(t_route **route_arr, t_path *path) {
    t_route *temp = *route_arr;
    t_route *new_route = NULL;
    int ind = 0;

    while (temp) {
        if (!path_cmp(temp -> path, path) && temp -> path_next == NULL)
                ind++;
        if (route_valid(temp, path)) {
            new_route = mx_copy_route(temp);
            mx_push_route(&new_route, path);
            new_route -> route_next = temp -> route_next;
            temp -> route_next = new_route;
            temp = temp -> route_next;
        }
        new_route = temp;
        temp = temp -> route_next;
    }
    if (ind == 0)
        new_route -> route_next = mx_create_route(path);
}

void mx_push_route_arr(t_route **route_arr, t_path *path) {
    if (*route_arr == NULL) 
        *route_arr = mx_create_route(path);
    else
        push_func(route_arr, path);
}
