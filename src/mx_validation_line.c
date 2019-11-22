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
    bool result = true;
    char *island1 = NULL;
    char *island2 = NULL;
    char *dist = NULL;
    int i = 0;

    mx_get_from_line(line, &island1, &island2, &dist);

    if (!island1 || !island2 || !dist)
    	return false;  
   
   
    if (!mx_strcmp(island1, island2))
    	result = false; 
   
    while (island1[i]) {
    	if(!mx_isupper(island1[i]) && !mx_islower(island1[i]))
    		result = false; 
    	i++;
    }
    
    i = 0;
    while (island2[i]) {
    	if(!mx_isupper(island2[i]) && !mx_islower(island2[i]))
    		result = false; 
    	i++;
    }


    i = 0;
    while (dist[i]) {
    	if (!mx_isdigit(dist[i]))
    		result = false; 
    	i++;
    }
    
    if (!mx_super_atoi(dist))
        result = false;

    mx_strdel(&island1);
    mx_strdel(&island2);
    mx_strdel(&dist);
    
    return result;
}
