#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int size = 0;
    printf("Pls input the size : ");
    scanf("%d", &size);

    char* arr = (char*)malloc(size * sizeof(char));

    printf("Pls input the elements : ");
    for (int i = 0; i < size; ++i) {

        scanf(" %c", &arr[i]);

    }

    for (int i = 0; i < size; ++i) {
 
          printf("%c ", arr[i]);
 
      }

      free(arr);
      arr = (void*)0;

    return 0;
}

