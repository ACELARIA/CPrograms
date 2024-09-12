#include <stdio.h>

int main() {
    int n, reversed = 0, last_digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        last_digit = n % 10;
        reversed = (reversed * 10) + last_digit;
        n /= 10;
    }

    printf("The reversed number is: %d\n", reversed);

    return 0;
}