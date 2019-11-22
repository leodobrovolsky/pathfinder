#include "pathfinder.h"

bool mx_check_str(char **arr, const char *str) {
	int i = 0;
  
	while(arr[i]) {
		if (!mx_strcmp(arr[i], str))
			return true;
		i++;
	}
	
	return false;
}
