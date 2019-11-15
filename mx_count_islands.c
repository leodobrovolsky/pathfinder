#include "pathfinder.h"

int mx_count_islands(char **lines, int lines_number) {
    int islands = 0;
    char **islands_arr = (char**)malloc(sizeof(char*) * lines_number * 2);
    char *island1 = NULL;
    char *island2 = NULL;
    int len_island1 = 0;
    int len_island2 = 0;

    
    for (int i = 0; i < lines_number * 2; i++)
    	islands_arr[i] = NULL;

    for (int i = 0; i < lines_number; i++) {
	    len_island1 = mx_get_char_index(lines[i], '-');
	    len_island2 = mx_get_char_index(lines[i], ',') - len_island1 - 1;

	    island1 = mx_strndup(lines[i], len_island1);

	    if (!mx_check_str(islands_arr, island1)) {
	    	islands_arr[islands] = mx_strdup(island1);
	    	islands++;
	    }
	    
        island2 = mx_strndup(&lines[i][len_island1 + 1], len_island2);
        
	    if (!mx_check_str(islands_arr, island2)) {
	    	islands_arr[islands] = mx_strdup(island2);
	    	islands++;
	    }

        mx_strdel(&island1);
        mx_strdel(&island2); 
    }
    

    return islands;
}
