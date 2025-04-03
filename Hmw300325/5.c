#include <stdio.h>

int main()
{

	const int n = 5;
	int arr[n] = {};
	printf("Pls input 5 elements :\n");

	for(int i = 0; i < n; ++i)
	{

	scanf("%d", &arr[i]);

	}

	int min = arr[0];
	int max = arr[0];
	for(int i = 0; i < n; ++i)
	{

	if(arr[i] < min)
	{
	
        min = arr[i];

	}
	else
	{

	max = arr[i];

	}

	}


	printf("The min + max value is : %d\n", min + max);
	return 0;
}

