#include "pathfinder.h"

void mx_get_from_line(const char *line, char **island1, char **island2, char **dist) {
	int len_island1 = mx_get_char_index(line, '-');
	int len_island2 = mx_get_char_index(line, ',') - len_island1 - 1;
	int len_dist = mx_strlen(line) - len_island1 - len_island2 - 2;
	int i = 0;
    
    if (!len_island1 || !len_island2 || !len_dist)
    	return;
    
    *island1 = mx_strndup(line, len_island1);
    *island2 = mx_strndup(&line[len_island1 + 1], len_island2);
    *dist = mx_strndup(&line[mx_get_char_index(line, ',') + 1], len_dist);
}
