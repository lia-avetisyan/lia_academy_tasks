#include <stdio.h>

int main()
{
	
	for(int i = 0; i <= 100; i++)
	{
		if(i % 3 == 0)
		{
			printf("Fizz ");
		}
		if(i % 5 == 0)
		{
			printf("Buzz ");
		}
		if(i % 3 == 0 && i % 5 ==0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}


	}
	printf("\n");
	for(int i = 1; i <= 100; )
	{
		printf("%d ", i);
		i += 2;
	}

	return 0;
}
