#include <stdio.h>

int my_find(const char *str, char c) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] == c) 
	{
            return i;
        }

        i++;
    }

    return 0;
}

