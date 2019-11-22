#include "pathfinder.h"

char **mx_str_to_lines(const char *str, int *lines_number, int *island_number) {
    char **lines = mx_strsplit(str, '\n');
    int i = 1;
    *island_number = mx_super_atoi(lines[0]);
    
    if (*island_number < 2)
        mx_print_error("error: line 1 isn't valid", 4);

    while (lines[i]) {
        if (!mx_validation_line(lines[i])) {
        	mx_del_strarr(&lines);
        	mx_print_error(mx_strjoin(mx_strjoin("error: line ", mx_itoa(i)), " isn't valid"), 5);
        }
        
        i++;
        *lines_number += 1;
    }
    
    lines[i] = NULL;
    
    return &lines[1];
}