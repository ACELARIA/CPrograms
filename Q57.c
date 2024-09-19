#include <stdio.h>

int main() {
    int n, i, max, secondMax;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter at least 2 numbers.\n");
        return 1;
    }

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    secondMax = numbers[1];

    for (i = 2; i < n; i++) {
        if (numbers[i] > max) {
            secondMax = max;
            max = numbers[i];
        } else if (numbers[i] > secondMax && numbers[i] != max) {
            secondMax = numbers[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Second maximum number: %d\n", secondMax);

    return 0;
}