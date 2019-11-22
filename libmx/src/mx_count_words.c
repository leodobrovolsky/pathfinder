#include "libmx.h"

int mx_count_words(const char *str, char delimiter) {
    if (!str)
        return -1;
    int i = 0;
    int indifier = 0;
    int words = 0;
    
    while(str[i] == delimiter)
        i++;
    if (str[i])
        words++;
    while(str[i]) {
        if (str[i] == delimiter)
            indifier++;
        else 
            if (indifier > 0) {
                indifier = 0;
                words++;
            }
        i++;
    }
    return words;
}
