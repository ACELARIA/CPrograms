#include <stdio.h>

int main() {
    int n, sum = 0, last_digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        last_digit = n % 10;
        sum += last_digit;
        n /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}