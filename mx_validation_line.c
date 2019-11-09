#include "pathfinder.h"

static bool mx_isupper(int c) {
    if (c >= 65 && c <= 90) 
        return true;
    else 
        return false;
}

static bool mx_islower(int c) {
    if (c >= 97 && c <= 122) 
        return true;
    else 
        return false;
    
}

bool mx_validation_line(const char *line) {
	int len_island1 = mx_get_char_index(line, '-');
	int len_island2 = mx_get_char_index(line, ',') - len_island1 - 1;
	int len_dist = mx_strlen(line) - len_island1 - len_island2;
	int i = 0;
    
    if (!len_island1 || !len_island2 || !len_dist)
    	return false;

    char *island1 = mx_strndup(line, len_island1);
    char *island2 = mx_strndup(&line[len_island1 + 1], len_island2);
    char *dist = mx_strndup(&line[mx_get_char_index(line, ',') + 1], len_dist);


    if (!island1 || !island2 || !dist)
    	return false;
  

    if (!mx_strcmp(island1, island2))
    	return false;

    while (island1[i]) {
    	if(!mx_isupper(island1[i]) && !mx_islower(island1[i]))
    		return false;
    	i++;
    }
    
    i = 0;
    while (island2[i]) {
    	if(!mx_isupper(island2[i]) && !mx_islower(island2[i]))
    		return false;
    	i++;
    }


    i = 0;
    while (dist[i]) {
    	if (!mx_isdigit(dist[i]))
    		return false;
    	i++;
    }
    
    mx_strdel(&island1);
    mx_strdel(&island2);
    mx_strdel(&dist);

    return true;
}
