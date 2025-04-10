#include <stdio.h>

void my_print2(int n, int m)
{
    if (n < m)
    {
        return;
    }
    printf("%d ", m);
    my_print2(n, m + 1);
}
