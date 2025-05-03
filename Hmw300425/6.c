#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *custom_realloc (void *ptr, size_t size) {

     if (!size) {

        return NULL;

    }

    if (size <= sizeof(*ptr)) {

	int count = sizeof(*ptr) - size;
	while (count) {

		--size;

	}

	return ptr; 

    }

    int* ptr2 = (int*)calloc(size, sizeof(int));
    memcpy(ptr2, ptr, size * sizeof(int));

   

    return ptr;

}
int main() {

    size_t size1 = 0;
    printf("Pls input the size of first arr : ");
    scanf("%ld", &size1);

    int* arr1 = (int*)malloc(size1 * sizeof(int));
    printf("Pls input the elements of first arr : ");
    for (int i = 0; i < size1; ++i) {

        scanf("%d", &arr1[i]);

    }
    size_t size2 = 0;
    printf("Pls input the new size : ");
    scanf("%ld", &size2);
	
    if (size2 <= size1) {
	
	int* arr2 = custom_realloc(arr1, size2);
	printf("The new arr is : ");

	for (int i = 0; i < size2; ++i) {

        	printf("%d ", arr2[i]);

        }

	printf("\n");
	
	free(arr2);
        return 0;

    }

    int* arr2 = custom_realloc(arr1, size2);
    printf("Pls input the new elements of arr : ");
    for (int i = size1; i < size2; ++i) {

        scanf("%d", &arr2[i]);        
            
    }
    
    printf("The new arr is : ");
    for (int i = 0; i < size2; ++i) {

        printf("%d ", arr2[i]);

    }

    printf("\n");
    
    free(arr2);

    return 0;

}

