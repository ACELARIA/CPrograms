#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter the dimensions of the first matrix (rows, columns): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the dimensions of the second matrix (rows, columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) 
	{
        printf("Matrix multiplication not possible. Number of columns of first matrix must be equal to number of rows of second matrix.\n");
        return 1;
    }

    int **matrix1 = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) {
        matrix1[i] = (int *)malloc(c1 * sizeof(int));
    }

    int **matrix2 = (int **)malloc(r2 * sizeof(int *));
    for (int i = 0; i < r2; i++) {
        matrix2[i] = (int *)malloc(c2 * sizeof(int));
    }

    int **product = (int **)malloc(r1 * sizeof(int *));
    for (int i = 0; i < r1; i++) {
        product[i] = (int *)malloc(c2 * sizeof(int));
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);
    for (int i = 0; i < r2; i++) 
	{
        free(matrix2[i]);
    }
    
	free(matrix2);
    for (int i = 0; i < r1; i++) 
	{
        free(product[i]);
    }
    free(product);
    return 0;
}