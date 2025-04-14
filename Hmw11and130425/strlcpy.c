#include <stdio.h>

int my_strlcpy(char *dst, const char *src, int size) 
{

    	int i = 0;

    	if (size != 0) 
	{
        	while (i < size - 1 && src[i] != '\0') 
		{
            	
			dst[i] = src[i];
			i++;
        	}

        	dst[i] = '\0';
    	}

    
    	int src_len = 0;
    	while (src[src_len] != '\0') 
	{
        	src_len++;
    	}

    	return src_len;

	}
	
