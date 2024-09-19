#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}