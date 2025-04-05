#include <stdio.h>

int main()
{

	int i = 0;
	while(i <= 10)
	{

	printf("%d\n", i);
	++i;

	}

	for( ; i <= 10; ++i)
	{

	printf("%d\n", i);

	}

	do{

	printf("%d\n", i);
	++i;

	}
	while(i <= 10);

	i = 10;
	while(i >= 0)
	{

	printf("%d\n", i);
	--i;

	}
	for( ; i >= 0; --i)
	{
	printf("%d\n", i);
	}

	do{

	printf("%d\n", i);
	--i;

	}
	while(i >= 0);

	return 0;
}
