#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n < 0)
    {
        exit(-1);
    }
    
    if (n < 2)
    {
        return n;
    }
    
    return fib(n - 1) + fib(n - 2);
}

int digit_mul(int n)
{
    if(n >= 0 && n < 10)
    {
        return n;
    }
    
    return n % 10 * digit_mul(n / 10);
}

void my_print(int n)
{
    if (n == -1)
    {
        return;
    }
    printf("%d ", n);
    my_print(n - 1);
}


void my_print2(int n, int m)
{

    if (n < m)
    {
        return;
    }
    printf("%d ", m);
    my_print2(n, m + 1);
}

void print_arr(int *arr, int n, int i)
{
    
    if(i >= n)
    {
        return;
    }
    
    printf("%d ", arr[i]);
    print_arr(arr, n, i + 1);
    
}

void print_arr_rev(int *arr, int n, int _size)
{
    if(_size < 0)
    {
        return;
    }
    printf("%d ", arr[_size]);
    print_arr_rev(arr, n, _size - 1);
}

int digit_sum(int n)
{
    if(n >= 0 && n < 10)
    {
        return n;
    }
    
    return n % 10 + digit_sum(n / 10);
}
void print_binary(int n)
{
    if (n < 2)
    {
        printf("%d ", n);
        return;
    }
    
    print_binary(n / 2);
    printf("%d ", n % 2);
}

char first_uppercase(const char* str, int i) 
{
    if (str[i] == '\0')
    {
        return 0;    
    }
        
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        return str[i];
    }
    return first_uppercase(str, i + 1);
}

int find_min(int arr[], int size, int i) 
{
    if (i == size - 1)
    {
        return arr[i];
    }
        
    int min = find_min(arr, size, i + 1);
    return arr[i] < min ? arr[i] : min;
}

int find_max(int arr[], int size, int i) 
{
    if (i == size - 1)
    {
        return arr[i];
    }
        
    int max = find_max(arr, size, i + 1);
    return arr[i] > max ? arr[i] : max;
}

