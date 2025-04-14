#include <stdio.h>

int is_vowel(char c) 
{

	char lower = '/0';
	if (c >= 'A' && c <= 'Z') 
	{
    	lower = c + 32;
	} 
	else 
	{
    	lower = c;
	}	


}

void vowels_and_consonants(const char *str, int *vowels, int *consonants) 
{
    *vowels = 0;
    *consonants = 0;
    int i = 0;

    while (str[i] != '\0') 
    {
        char c = str[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
	{
            if (is_vowel(c)) 
	    {
                (*vowels)++;
            } 
	    else 
	    {
                (*consonants)++;
            }
        }
        i++;
    }
}

