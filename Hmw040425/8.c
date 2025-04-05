#include <stdio.h>

int reverse(int a) 
{
    	int reverse = 0;
    	while(a != 0) 
	{

        	reverse = reverse * 10 + a % 10;
       		a /= 10;

        }

    return reverse;
}

int main() 
{
    	int a = 5479;
    	printf("The reverse of 5479 is : %d\n", reverse(a));
    	return 0;
}

