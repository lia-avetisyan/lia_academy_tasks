#include <stdio.h>
#include "func.h"

int main()
{
	int a = 56;
	int b = 4;
	int num1 = 4;
	int den1 = 9;
	int num2 = 5;
	int den2 = 11;

	printf("The answer is : %d\n", sum(a, b) );
	printf("The answer is : %d\n", power(b) );
	printf("The answer is : %d\n", positive(a));
	printf("The answer is : %f\n", fraction(num1, den1, num2, den2));
	printf("The answer is : %d\n", greatest(a, b));
	printf("The answer is : %d\n", CtoF(a));


	return 0;
}
