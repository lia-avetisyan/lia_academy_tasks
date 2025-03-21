#include <stdio.h>

int main()
{
	int res = 0;
	int a = 0;
	scanf("%d", &a);
	while(a > 0)
	{
	res = a % 10;
	a = a / 10;
	printf("%d", res);
	}

	
	
	return 0;
}
