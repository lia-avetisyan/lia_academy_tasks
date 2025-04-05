#include <stdio.h>

int digits_sum(int a) 
{	
    	int sum = 0;

    	while(a != 0)

	{

        	sum += a % 10;
        	a /= 10;

    	}

    	return sum;
}

int main() 
{

	int a = 0;	
	printf("Pls input the number and gets the sum of it's digits : ");
	scanf("%d", &a);
    
    	printf("Sum of digits is : %d\n", digits_sum(a));

    	return 0;
}

