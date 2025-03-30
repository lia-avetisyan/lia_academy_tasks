#include <stdio.h>

int main()
{


	const int n = 4;
	const int m = 3;
	int arr[n][m] = {};
	printf("Pls input 12 (4 rows and 3 columns) elements :\n");

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
	
        sum += arr[i][j];

	}

	printf("%d's sum is : %d\n", i, sum);
	sum = 0;

	}

	return 0;

}

