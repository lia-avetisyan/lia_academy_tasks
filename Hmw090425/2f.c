#include <stdio.h>

int digit_mul(int n)
{
    if(n >= 0 && n < 10)
    {
        return n;
    }
    return n % 10 * digit_mul(n / 10);
}
