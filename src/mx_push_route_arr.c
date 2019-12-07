#include "pathfinder.h"

// static bool route_ind(t_route *temp, t_path *path) {
//     t_route *temp_path = temp;
//     t_route *new_route = NULL;

//     if (!mx_strcmp(path -> island1, mx_route_end(temp))) {
//         new_route = mx_create_route(temp -> path);
//         temp_path = temp -> path_next;
//         if (!mx_strcmp(temp -> path -> island1, path -> island1) 
//             || !mx_strcmp(temp -> path -> island2, path -> island2)) 
//                 return false;
//         while (temp_path) {
//             if (!mx_strcmp(temp_path -> path -> island1, path -> island1) 
//                 || !mx_strcmp(temp_path -> path -> island2, path -> island2)) 
//                     return false;           
//             mx_push_route(&new_route, temp_path -> path);
//             temp_path = temp_path -> path_next;
//         }
//         if (!mx_strcmp(temp -> path -> island1, path -> island2))
//             return false;
//     }
//     return true;
// }

// static void push_func(t_route **route_arr, t_path *path) {
//     t_route *temp = *route_arr;
//     t_route *new_route = NULL;

//     for (; temp -> route_next; temp = temp -> route_next) {
//         if (!mx_strcmp(path -> island1, mx_route_end(temp))) {
//             new_route = mx_create_route(temp -> path);
//             if (route_ind(temp, path)) {
//                 mx_push_route(&new_route, path);
//                 new_route -> route_next = temp -> route_next;
//                 temp -> route_next = new_route;
//                 temp = temp -> route_next;
//             }
//             else
//                 mx_del_route_arr(&new_route);  
//         }
//     }
//     temp -> route_next = mx_create_route(path);
// }

// void mx_push_route_arr(t_route **route_arr, t_path *path) {
//     if (*route_arr == NULL) 
//         *route_arr = mx_create_route(path);
//     else
//         push_func(route_arr, path);
// }

void mx_copy_route(t_route *route)

void mx_push_route_arr(t_route **route_arr, t_path *path) {
    t_route *temp = *route_arr;

    while (temp) {

        temp = temp -> route_next;
    }  
    temp -> route_next = mx_create_route(path);
}
