#include <stdio.h>

int main() {
    int n, num, max = 0, secondMax = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax && num != max) {
            secondMax = num;
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Second maximum number: %d\n", secondMax);

    return 0;
}
