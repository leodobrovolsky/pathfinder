#include "pathfinder.h"

void mx_search_route(char *begin, char *end, t_path **path_origin, int island_number, int path_number) {
    t_route_arr *route_arr = NULL;
    t_route *route = NULL;
    t_route_arr *route_arr_temp = NULL;
    t_path **path = mx_copy_path(path_origin, path_number);
    int min_dist = 0;
    int old_path_number;
    
    for (int i = 0; i < path_number; i++) 
    	if (!mx_strcmp(begin, path_origin -> island1)) 
            mx_push_route_arr(&route_arr, mx_create_route(path[i]));

    route_arr_temp = route_arr;
    
    while(route_arr_temp) {
        route = route_arr_temp -> route;
        path = mx_copy_path(path_origin, path_number);

        while(path) {
            old_path_number = path_number;
            path = mx_create_arr_path(path, mx_path_route_cmp(path, route, path_number), &path_number);     
        	
        	if (old_path_number == path_number)
        		break;

        	for (int i = 0; i < path_number; i++) {
                if (!mx_strcmp(route -> path -> island1, path[i] -> island1) 
                	&& !mx_strcmp(route -> path -> island2, path[i] -> island2)) 
                	      
        	}

        }


    	route_arr_temp = route_arr_temp -> next;
    }
    
    


}
