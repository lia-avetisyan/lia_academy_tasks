#include <stdio.h>

int main()
{
	int const n = 5;
	char arr[n];

	printf("Please input a word with 5 letters : ");
	for(int i = 0; i < n; ++i)
	{

	scanf(" %c", &arr[i]);
	if(arr[i] > 'Z')
	{

	arr[i] = arr[i] - ('a' - 'A');

	}

	printf("%c", arr[i]);

	}
	
	return 0;

}
