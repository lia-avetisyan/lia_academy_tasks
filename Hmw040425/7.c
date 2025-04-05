#include <stdio.h>

int power(int a, int b) 
{
	    int res = 1;
    	    for(int i = 1; i <= b; ++i) 
	    {
        	res *= a;
            }

    	    return res;
}

int main() 
{
    	int a = 2, b = 5;
    	printf("%d's %d power is : %d\n", a, b, power(a, b));
    	return 0;
}

