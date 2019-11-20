#include "libmx.h"

typedef struct s_path
{
	char *island1;
	char *island2;
	int dist;
} t_path;

typedef struct s_route
{
	struct s_path *path;
    struct s_route *path_next;
    struct s_route *route_next;
} t_route;


char *mx_file_to_string(char *file);
bool mx_validation_line(const char *line);
char **mx_str_to_lines(const char *str, int *lines_number, int *island_number);
int mx_count_islands(char **lines, int lines_number);
bool mx_check_str(char **arr, const char *str);
t_path **mx_lines_to_structs(char **line, int lines_number, int island_number);
void mx_print_path(t_path *path);
void mx_print_route(t_route *route);
void mx_get_from_line(const char *line, char **island1, char **island2, char **dist);
char **mx_get_islands(char **lines, int lines_number, int island_number);
void mx_search_route(char *begin, char *end, t_path **path_origin, int island_number, int path_number);
t_route *mx_create_route(t_path *path);
void mx_push_route(t_route **route, t_path *path);
void mx_push_route_arr(t_route **route_arr, t_path *path);
void mx_print_route_arr(t_route *route_arr);
void mx_del_route_arr(t_route **route_arr);
void mx_del_route(t_route **route, int index);
t_path **mx_create_arr_path(t_path **path, int index, int *path_number);
char *mx_route_end(t_route *route);
int mx_path_route_cmp(t_path **path, t_route *route, int path_number);
t_path **mx_copy_path(t_path **path, int path_number);
void mx_del_path(t_path **path);
void mx_del_path_arr(t_path ***path, int path_number);
t_path **mx_add_path_begin(t_path **path, char *island, int path_number);

