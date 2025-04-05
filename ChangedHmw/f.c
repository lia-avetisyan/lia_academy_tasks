#include <stdio.h>

int main()
{
	int res = 1;
	int a = 0;
	scanf("%d", &a);
	while(a > 0)
	{
	res *= a;
	a--;
	}
	printf("%d", res);

	return 0;
}
