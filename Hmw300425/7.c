#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {

	int r_n, c_n = 0;
	printf("Input the num of rows then the num of coulumns : ");
	scanf("%d %d", &r_n, &c_n);

	int** matrix = (int**)malloc(r_n * sizeof(int));
	
	for (int i = 0; i < r_n; ++i) {

		matrix[i] = (int*)malloc(c_n * sizeof(int));

	}

	printf("Input the elements of the matrix : \n");

	for (int i = 0; i < r_n; ++i) {

		for (int j = 0; j < c_n; ++j) {

			scanf("%d", &matrix[i][j]);

		}

	}

	printf("The matrix is : \n");

        for (int i = 0; i < r_n; ++i) {

               for (int j = 0; j < c_n; ++j) {

                        printf("%d ", matrix[i][j]);

                }

	       	printf("\n");

        }


}
