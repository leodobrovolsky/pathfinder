#include "pathfinder.h"

void mx_search_route(char **island_arr, t_path **path, int island_number, int path_number) {
    t_route_arr *route_arr = NULL;
    

    for (int i = 0; i < island_number; i++)
    	for (int j = 0; j < island_number; j++)
    		if (i != j)
    			if (mx_fill_route(&route_arr, island_arr[i], island_arr[j], path, path_number)) {
    				printf("%d %d\n", i, j);
    				mx_print_route_arr(route_arr);
    				mx_del_route_arr(&route_arr);
    			}

}
