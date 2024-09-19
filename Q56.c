#include <stdio.h>

int main() {
    int numbers[10];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Number of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    printf("Number of zero elements: %d\n", zeroCount);
    return 0;
}