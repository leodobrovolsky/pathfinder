#include "pathfinder.h"

void mx_search_route(t_path **path, char **island_arr, int island_number, int path_number) {
    t_route *route_arr = NULL;
    int **path_arr = (int**)malloc(sizeof(int*) * 2);
    int index = 0;

    path_arr[0] = malloc(sizeof(int) * path_number);
    path_arr[1] = malloc(sizeof(int) * path_number);

    for (int i = 0; i < path_number; i++) {
        path_arr[0][i] = 0;
        path_arr[1][i] = 0;
    }

    for (int i = 0; i < island_number; i++) {
        for (int j = 0; j < path_number; j++) {
            if (!mx_strcmp(path[j] -> island1, island_arr[i]))
                path_arr[0][j] = index;
            if (!mx_strcmp(path[j] -> island2, island_arr[i]))
                path_arr[1][j] = index;
        }
        index++;
    }

    for (int i = 0; i < path_number; i++) {
        mx_push_route_arr(&route_arr, path[i]);
        for (int j = i - 1; j >= 0; j--) 
            if (path_arr[0][i] == path_arr[1][j] && path_arr[1][i] != path_arr[0][j]) 
                mx_push_route_arr(&route_arr, path[j]);
        
        mx_route_clean(&route_arr);
    }

    mx_print_route_arr(route_arr);
    mx_del_route_arr(&route_arr);
}
