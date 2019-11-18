#include "pathfinder.h"


int main (int argc, char **argv) {
    
    if (argc != 2)
    	mx_print_error("usage: ./pathfinder [filename]", 1);
    
    char *str = NULL;
    char **lines = NULL;
    char **island_arr = NULL;
    t_path **path = NULL;
    int island_number = 0;
    int lines_number = 0;
    
    str = mx_file_to_string(argv[1]);
    
    lines = mx_str_to_lines(str, &lines_number, &island_number);
    mx_strdel(&str);

   
    if (mx_count_islands(lines, lines_number) != island_number) 
    	mx_print_error("error: invalid number of islands", 6);
    
    island_arr = mx_get_islands(lines, lines_number, island_number);
    
    path = mx_lines_to_structs(lines, lines_number, island_number);
    
    for (int i = 0; i < island_number; i++)
        for (int j = 0; j < island_number; j++) 
            mx_search_route(island_arr[i], island_arr[j], path, island_number, lines_number);
    
    // printf("Islands:");
    // for (int i = 0; i < island_number; i++)
    //     printf(" %s", island_arr[i]);

    // printf("\nPath:\n");
    // for (int i = 0; i < lines_number * 2; i += 2)
    //     printf("%s %s\n", path[i] -> island1, path[i] -> island2);
    // printf ("Else:\n");
    
    //system("leaks -q a.out");
}

