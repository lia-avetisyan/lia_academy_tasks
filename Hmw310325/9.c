#include <stdio.h>

int main()
{

	const int n = 5;
	int arr[n];
	
	printf("Please input element of 5 range : ");
	for(int i = 0; i < n; ++i)
	{

	scanf("%d", &arr[i]);

	}
	
	int sum1 = 0;
	int sum2 = 0;
	int lastElement = arr[n - 1];
	for(int i = 0; i < n + 1; ++i)
	{

	sum1 += lastElement;
	--lastElement;

	}

	for(int i = 0; i < n; ++i)
        {

        sum2 += arr[i];

        }

	int res = sum1 - sum2;
	printf("The loosing element is : %d ", res);


	return 0;
}
