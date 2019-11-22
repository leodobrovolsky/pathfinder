#include "pathfinder.h"

char **mx_get_islands(char **lines, int lines_number, int island_number) {
    char **island_arr = (char**)malloc(sizeof(char*) * (island_number + 1));
    char *island1 = NULL;
    char *island2 = NULL;
    char *dist = NULL;
    int k = 0;
    
    for (int i = 0; i <= island_number; i++) 
    	island_arr[i] = NULL;

    for (int i = 0; i < lines_number; i++) {
        mx_get_from_line(lines[i], &island1, &island2, &dist);

        if (!mx_check_str(island_arr, island1)) {
        	island_arr[k] = mx_strdup(island1);
        	k++;
        }

        if (!mx_check_str(island_arr, island2)) {
        	island_arr[k] = mx_strdup(island2);
        	k++;
        }

        mx_strdel(&island1);
	    mx_strdel(&island2);
	    mx_strdel(&dist);
    }

    return island_arr;
}
