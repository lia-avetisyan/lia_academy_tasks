#include <stdio.h>

int is_prime(int a) 
{

    	if(a <= 1)
    	{
	       	
	return 0;

    	}

    	for(int i = 2; i * i <= a; ++i) 
	{

        	if(a % i == 0) 
		{

            	return 0;

        	}
    	}

    	return 1;
}

int primes_sum(int a) 
{
 	   for(int i = 2; i <= a / 2; ++i) 
	   {
        	if(is_prime(i) && is_prime(a - i)) 
		{

            	return 1;

        	}
    	   }	

    	return 0;
}

int main() 
{
	int a = 0;
	printf("Pls input a number : ");
	scanf("%d", &a);

    	if(is_prime(a)) 
	{

        printf("%d Is prime\n", a);

    	}

	else 
	{

      	printf("%d Is not prime\n", a);

    	}

	if(primes_sum(a)) 
	{ 

        printf("%d Yes is sum of 2 primes\n", a);

        }

	else 
	{

        printf("%d No is not sum of 2 primes\n", a);

        }	

    	return 0;
}

