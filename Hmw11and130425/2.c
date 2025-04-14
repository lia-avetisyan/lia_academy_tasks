#include <stdio.h>
#include <string.h>

void reverse_string(char *str) 
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) 
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        ++start;
        end--;
    }
}

