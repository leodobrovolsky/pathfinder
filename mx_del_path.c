#include "pathfinder.h"

void mx_del_path(t_path **path) {
	t_path *temp = *path;
	free(temp -> island1);
	free(temp -> island2);
	temp = NULL;	
}