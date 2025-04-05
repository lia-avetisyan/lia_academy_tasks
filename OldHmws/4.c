#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	
	int tmp = num;

	int count = 0;
	while(tmp > 0)
	{
	tmp = tmp % 10;
	tmp = tmp / 10;
	count++;
	printf("%d", count);
	}

	int res = 1;
	int num2 = 0;
	int tmp2 = num;
	while(num != 0)
	{
		num = num % 10;
		while(count != 0)
		{
		res = res * num;
		count--;
		} 
		num2 += res;
		res = 1;
		num = num / 10;
	}
	if(tmp2 == num2)
	{
		printf("Yoohoo Armstrong");
	}
	else
	{
		printf("oops");
	}


	return 0;
}
