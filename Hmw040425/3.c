#include <stdio.h>

int factorial(int a) 
{
    	int res = 1;

   	for(int i = 1; i <= num; ++i) 
    	{

        	res *= i;

    	}

   	 return res;
}

int main() 
{

	int a = 0;
	printf("Pls input a number for it's factorial : ");
	scanf("%d", &a);

    	printf("%d's factorial is : %d\n", a, factorial(a));

    	return 0;

}

