#include "pathfinder.h"

void mx_print_route_arr(t_route *r_arr, char **island_arr, int island_number) {
    t_route *tmp_r = NULL;
    t_route *tmp = NULL;
    for (int i = 0; i < island_number; i++)
        for (tmp_r = r_arr, tmp = r_arr; tmp; tmp = tmp -> route_next)
            if (!mx_strcmp(tmp -> path -> island1, island_arr[i])) {
                for (int j = 0; j < 40; j++)
                    mx_printchar('=');
                mx_printstr("\nPath: ");
                mx_printstr(tmp -> path -> island1);
                mx_printstr(" -> ");
                tmp_r = tmp;
                while (tmp_r -> path_next != NULL) 
                    tmp_r = tmp_r -> path_next;
                mx_printstr(tmp_r -> path -> island2);
                mx_printchar('\n');
                mx_print_route(tmp);
                for (int j = 0; j < 40; j++)
                    mx_printchar('=');
                mx_printchar('\n');
            }
}
