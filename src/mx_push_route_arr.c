#include "pathfinder.h"

void mx_push_route_arr(t_route **route_arr, t_path *path) {
    t_route *back_path = mx_create_route(path);
    t_route *temp = *route_arr;
    t_route *temp_path = NULL;
    t_route *new_route = NULL;
    int ind = 0;

    if (*route_arr == NULL) {
        *route_arr = back_path;
        return;
    }

    while (temp -> route_next != NULL) {
        ind = 0;
        temp_path = temp;

        while (temp_path -> path_next != NULL)
            temp_path = temp_path -> path_next;


        if (!mx_strcmp(path -> island1, temp_path -> path -> island2)) {
            new_route = mx_create_route(temp -> path);
            temp_path = temp -> path_next;
            if (!mx_strcmp(temp -> path -> island1, path -> island1) 
                || !mx_strcmp(temp -> path -> island2, path -> island2)) 
                    ind++;
            

            while (temp_path) {
                if (!mx_strcmp(temp_path -> path -> island1, path -> island1) 
                    || !mx_strcmp(temp_path -> path -> island2, path -> island2)) 
                        ind++;
                
                mx_push_route(&new_route, temp_path -> path);
                temp_path = temp_path -> path_next;
            }

            if (!mx_strcmp(temp -> path -> island1, path -> island2))
                ind++;

            if (ind == 0) {
                mx_push_route(&new_route, path);
                new_route -> route_next = temp -> route_next;
                temp -> route_next = new_route;
                temp = temp -> route_next;
            }
            else
                mx_del_route_arr(&new_route);
            
        }

        temp = temp -> route_next;
    }

    temp -> route_next = back_path;
}
