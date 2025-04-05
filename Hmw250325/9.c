#include <stdio.h>

int main() 
{
	int num = 0; 
        int n = 0;

        scanf("%d", &num);
        scanf("%d", &n);

        if(num & (1 << n)) 
        {

        printf("n-th bit is 1 ");

        } 
        else 
        {

        printf("n-th bit is 0 ");

        }

        return 0;
}

