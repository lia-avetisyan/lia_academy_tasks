#include <stdio.h>
#include <stdlib.h>

int fib(int n);
int digit_mul(int n);
void my_print(int n);
void my_print2(int n, int m);
void print_arr(int *arr, int n, int i);
void print_arr_rev(int *arr, int n, int _size);
int digit_sum(int n);
void print_binary(int n);
char first_uppercase(const char* str, int i);
int find_min(int arr[], int size, int i);
int find_max(int arr[], int size, int i);

int main()
{
    printf("Pls input a num for all the tasks : ");
    int n = 0;
    scanf("%d", &n);
    
    const int size = 5;
    int arr[size];
    printf("Input an array of 5 for Task5\n");
    for (int i = 0; i < size; ++i)
    {
        scanf("%d", &arr[i]);
    }
    printf("Input an string with an uppercase letter of 5 for Task9\n");
    char str[size];
    for (int i = 0; i < size; ++i)
    {
        scanf(" %c", &str[i]);
    }   
    printf("\n");
    
    printf("Task1\n");
    printf("%d \n", fib(n));
    printf("\n");
     
    printf("Task2\n");
    printf("%d \n", digit_mul(n));
    printf("\n");
     
    printf("Task3\n");
    my_print(n);
    printf("\n\n");
    
    int m = 0;
        
    printf("Task4\n");
    my_print2(n, m);
    printf("\n\n");
    
    printf("Task5\n");
    m = 0;
    print_arr(arr, size, m);
    printf("\n\n");
     
    int _size = size - 1;
    printf("Task6\n");
    print_arr_rev(arr, size, _size);
    printf("\n\n");
    
    printf("Task7\n");
    printf("%d\n", digit_sum(n));
    printf("\n");
    
        
    printf("Task8\n");
    print_binary(n);
    printf("\n\n");    
    
        
    printf("Task9\n");
    m = 0;
    printf("%c\n", first_uppercase(str, m));
    printf("\n");
        
    printf("Task10\n");
    m = 0;
    printf("%d\n", find_min(arr, size, m));
    m = 0;
    printf("%d\n", find_max(arr, size, m));
    return 0;
}
