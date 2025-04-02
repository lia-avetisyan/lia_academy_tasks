#ifndef FUNC_H
#define FUNC_H
#include <stdio.h>

	int sum(int a, int b)
{


	return a + b;
}

	int power(int a)
{

	return a * a;
}

	int positive(int a)
{
	if(a > 0)
	{

	return 1;

	}
	else
	{

	return 0;

	}
}

	float fraction(int num1, int den1, int num2, int den2)
{

      	float den = (float)(den1 * den2);
        float num = (float)(num1 * den2) + (float)(num2 * den1);

        return num / den;

}

	int greatest(int a, int b)
{

	if(a > b)
	{

	return a;

	}
	else
	{

	return b;

	}

}

	int CtoF(int C)
{

	int F = (C * 9/5) + 32;
	return F;

}
#endif

