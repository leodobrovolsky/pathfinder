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
    struct s_path *next;
} t_route;


char *mx_file_to_string(char *file);
bool mx_validation_line(const char *line);
char **mx_str_to_lines(const char *str, int *lines_number, int *island_number);
int mx_count_islands(char **lines, int lines_number);
bool mx_check_str(char **arr, const char *str);


