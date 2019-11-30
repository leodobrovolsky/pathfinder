#include "pathfinder.h"

void mx_del_line(char **island1, char **island2, char **dist) {
    mx_strdel(island1);
    mx_strdel(island2);
    mx_strdel(dist);
}
