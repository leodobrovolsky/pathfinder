#include "pathfinder.h"

bool mx_path_cmp(t_path *path1, t_path *path2, int index) {
	switch(index) {
		case 0: if (!mx_strcmp(path1 -> island1, path2 -> island2)) return true; break;
	    case 1: if (!mx_strcmp(path1 -> island1, path2 -> island1)) return true; break;
	    case 2: if (!mx_strcmp(path1 -> island2, path2 -> island2)) return true; break;
    }
    return false;
}
