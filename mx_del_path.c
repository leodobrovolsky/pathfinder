#include "pathfinder.h"

void mx_del_path(t_path **path) {
	free(*path);
	*path = NULL;	
}