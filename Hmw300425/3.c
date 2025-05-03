#include <stdio.h>
#include <stdlib.h>

int main () {

    int size = 0;
    printf("Pls input the size : ");
    scanf("%d", &size);

    float* arr = (float*)calloc(size, sizeof(float));

    printf("Pls input the elements : ");
    for (int i = 0; i < size; ++i) {

        scanf("%f", &arr[i]);

    }

    for (int i = 0; i < size; ++i) {
 
          printf("%f ", arr[i]);
 
      }

      free(arr);
      arr = (void*)0;

    return 0;
}

