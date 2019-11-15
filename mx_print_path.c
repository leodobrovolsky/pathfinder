#include "pathfinder.h"

void mx_print_path(t_path *path) {
	mx_printstr(path -> island1);
	mx_printstr(" -> ");
	mx_printstr(path -> island2);
}
