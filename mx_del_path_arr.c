#include "pathfinder.h"

void mx_del_path_arr(t_path ***path, int path_number) {
    for (int i = 0; i < path_number; i++)
        mx_del_path(&(*path[i]));
    
    free(*path);
    *path = NULL;
} 
