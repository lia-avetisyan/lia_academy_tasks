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
	int min_index = 0;
	for(int i = 0; i < n; ++i)
	{

	if(arr[i] < min)
	{
	
        min = arr[i];
	min_index = i;

	}

	}

	printf("The min value is : %d\n", min_index);
	return 0;
}

