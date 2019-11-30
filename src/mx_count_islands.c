#include "pathfinder.h"

int mx_count_islands(char **lines, int lines_number) {
    int islands = 0;
    char **isl_arr = (char**)malloc(sizeof(char*) * (lines_number * 2 + 1));
    char *island1 = NULL;
    char *island2 = NULL;
    char *dist = NULL;
    for (int i = 0; i < lines_number * 2; i++) {
        isl_arr[i] = NULL;
        mx_get_from_line(lines[i], &island1, &island2, &dist);
        if (!mx_check_str(isl_arr, island1)) {
            isl_arr[islands] = mx_strdup(island1);
            islands++;
        }
        if (!mx_check_str(isl_arr, island2)) {
            isl_arr[islands] = mx_strdup(island2);
            islands++;
        }
        mx_del_line(&island1, &island2, &dist);
    }
    mx_del_strarr(&isl_arr);
    return islands;
}
