#include "pathfinder.h"

char *mx_file_to_string(char *file) {
    int fd = open(file, O_RDONLY);
    char *er_str = mx_strjoin("error: file ", file);
    char *er_line = mx_strdup("error: line 0 is not valid");
    char *str = NULL;
    int ind = 0;

    if (fd == -1)
        mx_print_error(mx_strjoin(er_str, " does not exist"), 2); 
    if (!read(fd, str, 1))
        mx_print_error(mx_strjoin(er_str, " is empty"), 3);  
    close(fd);
    str = mx_file_to_str(file);
    if (str == NULL)
        mx_print_error(mx_strjoin(er_str, " does not exist"), 2);      
    for (int i = 0; i < mx_strlen(str) - 1; i++)
        if (str[i] == '\n')
            ind++;
        else if (str[i] == '\n' && str[i + 1] == '\n')
            mx_print_error(mx_replace_substr(er_line, "0", mx_itoa(ind)), 5);
    return str;
}
