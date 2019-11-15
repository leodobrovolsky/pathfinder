#include "pathfinder.h"


int main (int argc, char **argv) {
    
    if (argc != 2)
    	mx_print_error("usage: ./pathfinder [filename]", 1);
    
    char *str = NULL;
    char **lines = NULL;
    int island_number = 0;
    int lines_number = 0;
    int i = 0;
    
    str = mx_file_to_string(argv[1]);
    
    lines = mx_str_to_lines(str, &lines_number, &island_number);
    mx_strdel(&str);

   
    if (mx_count_islands(lines, lines_number) != island_number) 
    	mx_print_error("error: invalid number of islands", 6);
    
    
    mx_printstr("OK\n");
    
    //system("leaks -q a.out");
}

