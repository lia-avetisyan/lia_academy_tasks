#include <stdio.h>

int main()
{

	int i = 0;
	while(i <= 10)
	{
		printf("%d\n", i);
		i++;
	}
	
	i = 10;
	while(i >= 0)
	{
		printf("%d\n", i);
		i--;
	}

	for(int i = 0; i <= 10; i++)
	{
		printf("%d\n", i);
	}
	
	for(int i = 10; i >= 0; i--)
	{
		printf("%d\n", i);
	}

	i = 10;
	do{
	printf("%d\n", i);
	i--;
	}
	while(i >= 0);
	
	i = 0;
	do{
	printf("%d\n", i);
	i++;
	}
	while(i <= 10);

	return 0;
}
