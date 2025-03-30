#include <stdio.h>

int main()
{


	const int n = 3;
	const int m = 3;
	int arr[n][m] = {};
	printf("Pls input 9 (3 rows and 3 columns) elements :\n");

	for(int i = 0; i < n; ++i)
	{

	for(int j = 0; j < m; ++j)
	{
	
	scanf("%d", &arr[i][j]);

	}

	}

	int sum = 0;
	
	for(int i = 0; i < n; ++i)
	{

	for(int j = 0; j < m; ++j)
	{
	
	if(i == j)
	{

        sum += arr[i][j];

	}

	}

	}

	printf("The sum is : %d ", sum);

	return 0;

}


