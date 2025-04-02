#include <stdio.h>

int main()
{

	const int n = 10;
	int arr[n];
	int target = 0;
	int targeti = -1;

	printf("Please input the target : ");
	scanf("%d", &target);

	printf("Please input 10 elements for the first arr : ");
	for(int i = 0; i < n; ++i)
	{

	scanf("%d", &arr[i]);

	}


	
	for(int i = 0; i < n; ++i)
	{

	if(arr[i] == target)
	{
	
	targeti = i;
	break;
	
	}

	}
	
	printf("The answer is : %d ", targeti);

	return 0;

}

