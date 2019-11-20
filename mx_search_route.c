#include "pathfinder.h"

void mx_search_route(char *begin, char *end, t_path **path_origin, int island_number, int path_number) {
    t_route *route_arr = NULL;
    t_path **path = NULL;
    int min_dist = 0;
    int old_path_number;
    int i = 0; 
    int j = 0;
    int z = 0;

    for (int g = 0; g < path_number; g++)  
    	if (!mx_strcmp(begin, path_origin[g] -> island1) 
            && !mx_strcmp(end, path_origin[g] -> island2)) {
                mx_push_route_arr(&route_arr, path_origin[g]);
                path = mx_create_arr_path(path_origin, g, &path_number);
                break;
            }


    
    // t_path **path_begin = mx_add_path_begin(path, begin, path_number);
    // t_path **path_end = mx_add_path_begin(path, end, path_number);

    // while ()
        
    //     if (!mx_strcmp(begin, path[g] -> island1)) 
    //         path = mx_create_arr_path(path, g, &path_number);
            
    // }
    // if (path == NULL)
    //     path = mx_copy_path(path_origin, path_number);    
    // i = 0;
    // while(path[i]) {
    //     j = 0;
    //     while(path[j]) {


    //         if (i != j && !mx_strcmp(begin, path[i] -> island1) 
    //             && !mx_strcmp(end, path[j] -> island2) 
    //             && !mx_strcmp(path[i] -> island2, path[j] -> island1)) {
    //                 for (int n = 0; n < path_number; n++) {
    //                     mx_printstr(path[n] -> island1);
    //                     mx_printstr(path[n] -> island2);
    //                     mx_printchar('\n');
    //                 }
    //                 mx_printint(i);
    //                 mx_printchar(' ');
    //                 mx_printint(j);
    //                 mx_printchar('\n');
          
    //                 route_arr = mx_create_route(path[i]);
    //                 mx_push_route(&route_arr, path[j]);
    //                 mx_push_route_arr(&route_arr, route);
                    
    //                 if (i < j) {
    //                     path = mx_create_arr_path(path, i, &path_number);
    //                     path = mx_create_arr_path(path, j - 1, &path_number);
    //                 }
    //                 else {
    //                     path = mx_create_arr_path(path, j, &path_number);
    //                     path = mx_create_arr_path(path, i - 1, &path_number); 
    //                 }
    //                 i = -1;
    //                 break;
                   
    //         }
    //         j++;
    //     }
    //     i++;
    // }
   
    // while (path_begin[i]) {
    //     while (path_end[j]) {
            

    //         j++;
    //     }
    //     i++;
    // }


    mx_print_route_arr(route_arr);
    mx_del_route_arr(&route_arr);
    for (int i = 0; i < path_number; i++)
        mx_del_path(&path[i]);
  
    // route_arr_temp = route_arr;
    
    // while(route_arr_temp) {
    //     route = route_arr_temp -> route;
    //     path = mx_copy_path(path_origin, path_number);

    //     while(path) {
    //         old_path_number = path_number;
    //         path = mx_create_arr_path(path, mx_path_route_cmp(path, route, path_number), &path_number);     
        	
    //     	if (old_path_number == path_number)
    //     		break;

    //     	for (int i = 0; i < path_number; i++) {
    //             if (!mx_strcmp(route -> path -> island1, path[i] -> island1) 
    //             	&& !mx_strcmp(route -> path -> island2, path[i] -> island2)) 
                	      
    //     	}

    //     }


    // 	route_arr_temp = route_arr_temp -> next;
    // }
    
    


}
