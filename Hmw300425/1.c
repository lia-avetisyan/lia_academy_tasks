#include <stdio.h>
#include <stdlib.h>

int main () {

    int size = 0;
    printf("Pls input the size : ");
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    printf("Pls input the elements : ");
    for (int i = 0; i < size; ++i) {

        scanf("%d", &arr[i]);

    }

    for (int i = 0; i < size; ++i) {
 
          printf("%d ", arr[i]);
 
      }

      free(arr);
      arr = (void*)0;

    return 0;
}
