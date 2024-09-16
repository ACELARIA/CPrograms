#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; // Extract the last digit
        sum = sum+digit; // Add the digit to the sum
        n =n/10; // Remove the last digit from the number
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}