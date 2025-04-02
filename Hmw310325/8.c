#include <stdio.h>

int main()
{

	const int n = 5;
	int arr[n];
	int notr = 0;

	printf("Please input 5 elements : ");
	for(int i = 0; i < n; ++i)
	{

	scanf("%d", &arr[i]);

	}


	
	for(int i = 0; i < n; ++i)
	{

	if(i == 0)
	{

	if(arr[i] != arr[i + 1])
	{

	notr = arr[i];
	break;

	}

	}

	else if(i == n - 1)
	{
	
	if(arr[i] != arr[i - 1])
	{

	notr = arr[i];
	break;

	}

	}

	else if(arr[i] != arr[i + 1] && arr[i] != arr[i - 1])
	{

	notr = arr[i];
	break;

	}

	}
	printf("%d", notr);
	return 0;

}

