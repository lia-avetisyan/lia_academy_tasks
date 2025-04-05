#include <stdio.h>

void mul_table(int a)
{

	int res = 0;
	for(int i = 1; i <= 10; ++i)		
	{

		printf("%d * %d = %d\n", a, i,  a * i);

	}
		
	return;

}
int main()
{

	int a = 0;
	printf("Pls input the number and watch the multiplying table of it : ");	scanf("%d", &a);

	mul_table(a);
	return 0;

}
