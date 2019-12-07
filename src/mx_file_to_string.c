#include "pathfinder.h"

static void check_empty_line(char *str) {
    char *e1 = mx_strdup("error: line ");
    char *e2 = mx_strdup(" is not valid");
    int k = 0;

    for (int i = 0; i < mx_strlen(str) - 1; i++) {
        if (str[i] == '\n')
            k++;
        if (str[i] == '\n' && str[i + 1] == '\n')
            mx_print_error(mx_strjoin(mx_strjoin(e1, mx_itoa(k + 1)), e2), 5);
    }
    mx_strdel(&e1);
    mx_strdel(&e2);
}

char *mx_file_to_string(char *file) {
    int fd = open(file, O_RDONLY);
    char *er_str = mx_strjoin("error: file ", file);
    char *str = NULL;

    if (fd == -1)
        mx_print_error(mx_strjoin(er_str, " does not exist"), 2); 
    if (!read(fd, str, 1))
        mx_print_error(mx_strjoin(er_str, " is empty"), 3);  
    close(fd);
    str = mx_file_to_str(file);
    check_empty_line(str);
    mx_strdel(&er_str);
    return str;
}
