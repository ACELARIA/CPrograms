#include <stdio.h>

int main() {
    int matrix[3][3];
    int rowSums[3] = {0};

    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}