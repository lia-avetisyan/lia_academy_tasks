#include <stdio.h>

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
