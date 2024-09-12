#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter numbers (enter a negative number to stop):\n");

    while (1) {
        scanf("%d", &n);

        if (n < 0) {
            break;
        }

        sum += n;
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}