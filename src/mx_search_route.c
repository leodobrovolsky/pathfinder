#include "pathfinder.h"

static int **cr_path_arr(t_path **path, char **i_arr, int i_num, int p_num) {
    int **p_arr = (int**)malloc(sizeof(int*) * 2);
    int index = 0;

    p_arr[0] = malloc(sizeof(int) * p_num);
    p_arr[1] = malloc(sizeof(int) * p_num);
    for (int i = 0; i < p_num; i++) {
        p_arr[0][i] = 0;
        p_arr[1][i] = 0;
    }
    for (int i = 0; i < i_num; i++, index++) 
        for (int j = 0; j < p_num; j++) {
            if (!mx_strcmp(path[j] -> island1, i_arr[i]))
                p_arr[0][j] = index;
            if (!mx_strcmp(path[j] -> island2, i_arr[i]))
                p_arr[1][j] = index;
        }
    return p_arr;
}

void mx_search_route(t_path **path, char **i_arr, int i_num, int p_num) {
    t_route *r_arr = NULL;
    int **p_arr = cr_path_arr(path, i_arr, i_num, p_num);

    for (int i = 0; i < p_num; i++) {
        mx_push_route_arr(&r_arr, path[i]);
        for (int j = i - 1; j >= 0; j--) 
            if (p_arr[0][i] == p_arr[1][j] && p_arr[1][i] != p_arr[0][j]) 
                mx_push_route_arr(&r_arr, path[j]);
    }
    mx_route_clean(&r_arr);
    mx_route_clean_ins(&r_arr);
    mx_print_route_arr(r_arr, i_arr, i_num);
    mx_del_route_arr(&r_arr);
    free(p_arr[0]);
    free(p_arr[1]);
    free(p_arr);
    *p_arr = NULL;
}
