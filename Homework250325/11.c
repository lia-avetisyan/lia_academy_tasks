#include <stdio.h>

int main() 
{

	int num = 0;
        int mask = 0;
        int n = 0;

        scanf("%d", &mask);
        scanf("%d", &num);
        scanf("%d", &n);

        int left_shift = mask << n;
        int res = num & left_shift;
	printf("%d", res);

    return 0;
}

