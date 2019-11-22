#include "pathfinder.h"

char *mx_file_to_string(char *file) {
	int fd = open(file, O_RDONLY);
    char *str = NULL;

	if (fd == -1)
		mx_print_error(mx_strjoin(mx_strjoin("error: file ", file), " doesn't exist"), 2);
    
    if (!read(fd, str, 1))
    	mx_print_error(mx_strjoin(mx_strjoin("error: file ", file), " is empty"), 3);
    
    close(fd);

    str = mx_file_to_str(file);

    if (str == NULL)
 	    mx_print_error(mx_strjoin(mx_strjoin("error: file ", file), " doesn't exist"), 2);

    return str;
}
