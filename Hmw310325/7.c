#include <stdio.h>

int main()
{

	const int n = 5;
	int arr[n];
	int flag = 0;

	printf("Please input 5 elements : ");
	for(int i = 0; i < n; ++i)
	{

	scanf("%d", &arr[i]);

	}


	
	for(int i = 0; i < n; ++i)
	{

	if(arr[i] > arr[i + 1])
	{
	
	flag = 1;
	
	}
	else
	{
	
	flag = 0;
	break;

	}

	}
	if(flag)
	{

	printf(" YES ");

	}
	else
	{

	printf(" NO ");

	}
	return 0;

}

