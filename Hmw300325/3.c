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

	int max = arr[0];
	int max_index = 0;
	for(int i = 0; i < n; ++i)
	{

	if(arr[i] > max)
	{

        max = arr[i];
	max_index = i;

	}

	}

	printf("The index of max value is : %d\n", max_index);

	return 0;

}
