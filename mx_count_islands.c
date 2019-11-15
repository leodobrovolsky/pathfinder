#include "pathfinder.h"

int mx_count_islands(char **lines, int lines_number) {
    int islands = 0;
    char **islands_arr = (char**)malloc(sizeof(char*) * lines_number * 2);
    char *island1 = NULL;
    char *island2 = NULL;
    char *dist = NULL;

    
    for (int i = 0; i < lines_number * 2; i++)
    	islands_arr[i] = NULL;

    for (int i = 0; i < lines_number; i++) {
        mx_get_from_line(lines[i], &island1, &island2, &dist);

	    if (!mx_check_str(islands_arr, island1)) {
	    	islands_arr[islands] = mx_strdup(island1);
	    	islands++;
	    }
        
	    if (!mx_check_str(islands_arr, island2)) {
	    	islands_arr[islands] = mx_strdup(island2);
	    	islands++;
	    }

        mx_strdel(&island1);
        mx_strdel(&island2); 
        mx_strdel(&dist);
    }
    
    mx_del_strarr(&islands_arr);

    return islands;
}
