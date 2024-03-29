#include "pathfinder.h"

int main (int argc, char **argv) {
    char *str = NULL;
    char **lines = NULL;
    char **island_arr = NULL;
    t_path **path = NULL;
    int island_number = 0;
    int lines_number = 0; 

    if (argc != 2)
        mx_print_error("usage: ./pathfinder [filename]", 1); 
    str = mx_file_to_string(argv[1]);
    lines = mx_str_to_lines(str, &lines_number, &island_number);
    mx_strdel(&str);
    if (mx_count_islands(lines, lines_number) != island_number) 
        mx_print_error("error: invalid number of islands", 6);
    island_arr = mx_get_islands(lines, lines_number, island_number);
    path = mx_lines_to_structs(lines, lines_number);
    mx_search_route(path, island_arr, island_number, lines_number * 2);

    system("leaks -q pathfinder");
    return 0;
}
