#include "pathfinder.h"

t_path **mx_copy_path(t_path **path, int path_number) {
    t_path **new_path = (t_path**)malloc(sizeof(t_path*) * (path_number + 1));

    for (int i = 0; i < path_number; i++) {
        new_path[i] = malloc(sizeof(t_path));
	    new_path[i] -> island1 = path[i] -> island1;
	    new_path[i] -> island2 = path[i] -> island2;
	    new_path[i] -> dist = path[i] -> dist;
    }
    new_path[path_number]= NULL;

    return new_path;
}
