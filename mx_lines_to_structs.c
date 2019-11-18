#include "pathfinder.h"

t_path **mx_lines_to_structs(char **lines, int lines_number, int island_number) {
    t_path **path = (t_path**)malloc(sizeof(t_path*) * (lines_number + 1));
    char *island1 = NULL;
    char *island2 = NULL;
    char *dist = NULL;

    for (int i = 0; i < lines_number; i++) {
        mx_get_from_line(lines[i], &island1, &island2, &dist);
    	
    	path[i] = malloc(sizeof(t_path));
	    path[i] -> island1 = mx_strdup(island1);
	    path[i] -> island2 = mx_strdup(island2);
    	path[i] -> dist = mx_atoi(dist);

    	mx_strdel(&island1);
    	mx_strdel(&island2);
    	mx_strdel(&dist);
    }
    
    path[lines_number] = NULL;

    return path;
}
