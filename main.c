#include "pathfinder.h"


int main (int argc, char **argv) {
    
    // if (argc != 2)
    // 	mx_print_error("usage: ./pathfinder [filename]", 1);
    
    // char *str = NULL;
    // char **lines = NULL;
    // int island_number = 0;
    // int i = 0;
    
    // //str = mx_file_to_string(argv[1]);
    // str = mx_file_to_str(argv[1]);
    
    // lines = mx_str_to_lines(str);
    // mx_strdel(str);


    // mx_printstr(str);
    char *temp = NULL;
    mx_strchr(temp, '-');
    char *line = mx_strdup("wqw-,20");
    printf("%d", mx_validation_line(line));
}

