#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL)
    	return NULL;

    if (s1 == NULL)
    	return mx_strdup(s2);

    if (s2 == NULL)
    	return mx_strdup(s1);

    char *result = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    int len_s1 = mx_strlen(s1);
    int len_s2 = mx_strlen(s2);
    int i = 0;

    for (; i < len_s1; i++) {
    	result[i] = *s1;
    	s1++;
    }

    for (; i < len_s1 + len_s2; i++) {
    	result[i] = *s2;
    	s2++;
    }
    
    return result;
}

