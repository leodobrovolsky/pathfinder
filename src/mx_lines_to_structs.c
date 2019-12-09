#include "pathfinder.h"

static void path_clean(t_path **path, int path_number) {
    for (int i = 0; i < path_number; i++) {
        for (int j = 0; j < path_number; j++) {
            if (mx_path_cmp(path[i], path[j], 1) 
                && mx_path_cmp(path[i], path[j], 2)
                && path[i] -> dist > path[j] -> dist) {
                    path[i] -> dist = path[j] -> dist;
            }
        }
    }
}

static t_path **create_path(int path_number) {
    t_path **path = (t_path**)malloc(sizeof(t_path*) * (path_number + 1));

    for (int i = 0; i < path_number; i++)
        path[i] = malloc(sizeof(t_path));
    path[path_number] = NULL;
    return path;
}

static void push_path(t_path *path, char *island1, char *island2, int i) {
    if (i % 2 == 0) {
        path -> island1 = mx_strdup(island1);
        path -> island2 = mx_strdup(island2);
    }
    else {
        path -> island1 = mx_strdup(island2);
        path -> island2 = mx_strdup(island1);
    }   
}

t_path **mx_lines_to_structs(char **lines, int lines_number) {
    t_path **path = create_path(lines_number * 2);
    char *island1 = NULL;
    char *island2 = NULL;
    char *dist = NULL;

    for (int i = 0; i < lines_number * 2; i++) {
        mx_get_from_line(lines[i / 2], &island1, &island2, &dist);
        push_path(path[i], island1, island2, i);
        path[i] -> dist = mx_atoi(dist);
        mx_del_line(&island1, &island2, &dist);
    }
    path_clean(path, lines_number * 2);
    return path;
}
