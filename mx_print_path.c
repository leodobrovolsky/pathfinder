#include "pathfinder.h"

void mx_print_path(t_path *path) {
	mx_printstr(path -> island1);
	mx_printchar('\n');
	mx_printstr(path -> island2);
	mx_printchar('\n');
	mx_printint(path -> dist);
	mx_printchar('\n');
}