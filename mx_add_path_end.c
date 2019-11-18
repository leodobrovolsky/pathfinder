#include "pathfinder.h"

t_path **mx_add_path_end(t_path **path, char *island, int path_number) {
    int len = 0;

    for (int i = 0; i < path_number; i++) {
    	if (!mx_strcmp(island, path[i] -> island2))
    		len++;
    }

    t_path **new_path = (t_path**)malloc(sizeof(t_path*) * (len + 1));

    for (int i = 0; i < len; i++) 
    	if (!mx_strcmp(island, path[i] -> island2)) {
	        new_path[i] = malloc(sizeof(t_path));
		    new_path[i] -> island1 = path[i] -> island1;
		    new_path[i] -> island2 = path[i] -> island2;
		    new_path[i] -> dist = path[i] -> dist;
        }
    new_path[len]= NULL;

    return new_path;    
}
