#include <stdio.h>

int string_length(const char *str) 
{
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    return l;
}

