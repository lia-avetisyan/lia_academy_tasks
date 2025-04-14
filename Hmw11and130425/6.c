#include <stdio.h>

void replace_character(char *str, char old_char, char new_char) 
{

    int i = 0;
    while (str[i] != '\0') 
    {
        if (str[i] == old_char) 
	{
            str[i] = new_char;
        }
        i++;
    }
}

