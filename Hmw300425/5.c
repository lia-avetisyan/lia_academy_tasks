#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *custom_calloc (size_t num, size_t size) {

    int* arr = (int*)malloc(num * size);
    if (arr) {

        memset(arr, 0, num * size);
    
    }

    return arr;

}
int main() {

    size_t num = 0;
    printf("Pls input the count of elements : ");
    scanf("%ld", &num);

    size_t size = sizeof(int);
    int* arr = custom_calloc(num, size);
    for (int i = 0; i < num; ++i) {

        printf("%d ", arr[i]);

    }
    
    free(arr);

    return 0;

}
