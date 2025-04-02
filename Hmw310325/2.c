#include <stdio.h>

int main()
{
	int const n = 5;
	int arr[n];
	int count = 0;

	printf("Please input 5 elements : ");
	for(int i = 0; i < n; ++i)
	{

	scanf("%d", &arr[i]);
	if(arr[i] % 2 != 0)
	{

	count++;

	}
	
	}
	printf("The count of odd numbers are : %d ", count);
	return 0;

}

