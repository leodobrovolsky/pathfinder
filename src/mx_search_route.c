#include "pathfinder.h"

static int **create_path_arr(int path_number) {
    int **p_arr = (int**)malloc(sizeof(int*) * 2);

    p_arr[0] = malloc(sizeof(int) * path_number);
    p_arr[1] = malloc(sizeof(int) * path_number);
    for (int i = 0; i < path_number; i++) {
        p_arr[0][i] = 0;
        p_arr[1][i] = 0;
    }
    return p_arr;
}

void mx_search_route(t_path **path, char **island_arr, int island_number, int path_number) {
    t_route *r_arr = NULL;
    int **p_arr = create_path_arr(path_number);
    int index = 0;

    for (int i = 0; i < island_number; i++, index++) 
        for (int j = 0; j < path_number; j++) {
            if (!mx_strcmp(path[j] -> island1, island_arr[i]))
                p_arr[0][j] = index;
            if (!mx_strcmp(path[j] -> island2, island_arr[i]))
                p_arr[1][j] = index;
        }
    for (int i = 0; i < path_number; i++) {
        mx_push_route_arr(&r_arr, path[i]);
        for (int j = i - 1; j >= 0; j--) 
            if (p_arr[0][i] == p_arr[1][j] && p_arr[1][i] != p_arr[0][j]) 
                mx_push_route_arr(&r_arr, path[j]);
    }
    //mx_route_clean(&r_arr);
    mx_print_route_arr(r_arr, island_arr, island_number);
    mx_del_route_arr(&r_arr);
}
