#include <stdio.h>

void print_arr(int *arr, int n, int i)
{
    if(i >= n)
    {
        return;
    }
    printf("%d ", arr[i]);
    print_arr(arr, n, i + 1);
}
