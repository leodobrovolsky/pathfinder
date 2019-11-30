#include "pathfinder.h"

static bool check_string(char *s1, char *s2, char *dist) {
    bool result = true;

    for (int i = 0; s1[i]; i++)
        if(!mx_isupper(s1[i]) && !mx_islower(s1[i]))
            result = false; 
    for (int i = 0; s2[i]; i++)
        if(!mx_isupper(s2[i]) && !mx_islower(s2[i]))
            result = false;
    for (int i = 0; dist[i]; i++)
        if(!mx_isdigit(dist[i]))
            result = false; 
    return result;  
}

bool mx_validation_line(const char *line) {
    bool result = true;
    char *island1 = NULL;
    char *island2 = NULL;
    char *dist = NULL;

    mx_get_from_line(line, &island1, &island2, &dist);
    if (!island1 || !island2 || !dist)
        return false;  

    if (!check_string(island1,island2, dist))
        result = false;

    if (mx_strcmp(island1, island2) && mx_strcmp(dist, "0"))
        result = false;

    if (!mx_strcmp(island1, island2) && mx_super_atoi(dist) > 0)
        result = false;
    
    return result;
}
