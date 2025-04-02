#include <stdio.h>

int main()
{
	int const n = 5;
	char arr[n];

	printf("Please input 5 elements : ");
	for(int i = 0; i < n; ++i)
	{
	scanf(" %c", &arr[i]);
	}

	for(int i = 0; i < n / 2; ++i) 
	{
      
        char tmp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tmp;

        }


	for(int i = 0; i < n; ++i)
	{

	printf(" %c", arr[i]);

	}
	return 0;

}

