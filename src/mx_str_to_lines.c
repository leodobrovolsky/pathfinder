#include "pathfinder.h"

char **mx_str_to_lines(const char *str, int *lines_number, int *island_number) {
    char **lines = mx_strsplit(str, '\n');
    char *er_str = NULL;
    int i = 1;
    *island_number = mx_super_atoi(lines[0]);

    if (*island_number < 2)
        mx_print_error("error: line 1 is not valid", 4);

    while (lines[i]) {
        if (!mx_validation_line(lines[i])) {
            mx_del_strarr(&lines);
            er_str = mx_strjoin("error: line ", mx_itoa(i + 1));
            mx_print_error(mx_strjoin(er_str, " is not valid"), 5);
        }
        i++;
        *lines_number += 1;
    }
    lines[i] = NULL;
    return &lines[1];
}
