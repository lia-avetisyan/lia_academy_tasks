#include <stdio.h>

int main()
{

	const int n = 5;
	int arr1[n];
	int arr2[n];
	int flag = 0;

	printf("Please input 5 elements for the first arr : ");
	for(int i = 0; i < n; ++i)
	{

	scanf("%d", &arr1[i]);

	}

	printf("Please input 5 elements for the second arr : ");
        for(int i = 0; i < n; ++i)
        {

        scanf("%d", &arr2[i]);

        }
	
	for(int i = 0; i < n; ++i)
	{

	if(arr1[i] == arr2[i])
	{

	flag = 0;
	
	}
	else
	{

	flag = 1;
	break;

	}

	}
	if(flag)
	{

	printf("NOT EQUAL");

	}
	else
	{

	printf("EQUAL");

	}

	return 0;

}
