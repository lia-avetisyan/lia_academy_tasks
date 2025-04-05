#include <stdio.h>

int main() 
{
	int num = 0; 
        int n = 0;

        scanf("%d", &num);
        scanf("%d", &n);

	int div = num >> n;
	int mul = num << n;


        printf("divided by n : %d\n", div);
        printf("multiplied by n : %d\n", mul);

        return 0;
}
