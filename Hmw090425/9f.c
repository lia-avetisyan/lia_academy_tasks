#include <stdio.h>

char first_uppercase(const char* str, int i)
{
    if (str[i] == '\0')
    {
        return 0;
    }
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        return str[i];
    }
    return first_uppercase(str, i + 1);
}

