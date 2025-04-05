#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	
	if(num == 0)
	{
		printf("0");
		return 0;
	}

	if(num == 1 || num == 2)
	{
		printf("1");
		return 0;
	}

	int num1 = 1;
	int num2 = 1;
	int res = 0;
	for(int i = 3; i <= num; i++)
	{

	res = num1 + num2;
	num1 = num2;
    num2 = res;

	}
	printf("%d", res);
	return 0;
}
