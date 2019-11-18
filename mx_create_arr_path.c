#include "pathfinder.h"

t_path **mx_create_arr_path(t_path **path, int index, int *path_number) {
    t_path **new_path = (t_path**)malloc(sizeof(t_path*) * (*path_number));
    int k = 0;

    for (int i = 0; i < *path_number; i++) 
    	if (i != index) {
            new_path[k] = malloc(sizeof(t_path));
	    	new_path[k] -> island1 = path[i] -> island1;
	    	new_path[k] -> island2 = path[i] -> island2;
	    	new_path[k] -> dist = path[i] -> dist;
	    	k++;
        }

    new_path[k] = NULL;
    
    if (k != *path_number)
        *path_number -= 1;
    

    return new_path;
}
