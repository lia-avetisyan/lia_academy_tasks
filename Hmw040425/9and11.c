#include <stdio.h>

void hexadecimal(int a) 
{
	if(a == 0) 
	{

        printf("0");

        return;

    	}

    	char hex[8]; 
    	int index = 0;

   	while(a > 0) 
	{

        int remainder = a % 16;
        if(remainder < 10) 
	{

            hex[index++] = '0' + remainder;  

        } 
	else 
	{
            hex[index++] = 'A' + (remainder - 10);  
        }

        a = a / 16;
    	}

   	for(int i = index - 1; i >= 0; --i) 
	{

    	printf("%c", hex[i]);

    	}

    	printf("\n");

}


void binary(int a) 
{
    
	if(a == 0) 
	{

        printf("0");

        return;

    	}

    	int binary[32]; 
    	int index = 0;

   	while(a > 0) 
	{

        binary[index++] = a % 2;
        a = a / 2;

    	}

   	for(int i = index - 1; i >= 0; --i) 
	{

    	printf("%d", binary[i]);

    	}

    	printf("\n");
}

int main() 
{
    int a = 15;
    hexadecimal(a);
    binary(a);
    return 0;
}

