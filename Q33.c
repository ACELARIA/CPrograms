#include <stdio.h>

int main() {
    int n, num, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    scanf("%d", &num);
    max = min = num;

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        } else if (num < min) {
            min = num;
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
