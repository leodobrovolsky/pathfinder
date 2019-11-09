#include "libmx.h"

typedef struct s_path
{
	char *island1;
	char *island2;
	int dist;
} t_path;

char *mx_file_to_string(char *file);
bool mx_validation_line(const char *line);
char **mx_str_to_lines(const char *str, int *island_number);
