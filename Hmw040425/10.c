#include <stdio.h>

int fibonacci(int n) 
{
    	if(n <= 1) 
    	{

        return n;

    	}

    	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
	int n = 6;
    	printf("%d's Fibonacci number is : %d\n", n, fibonacci(n));

    	return 0;
}

