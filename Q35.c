#include <stdio.h>

int sumDigits(int num) {
    int sum = 0;

    while (num > 9) {
        sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumDigits(number);
    printf("Sum of digits until single digit: %d\n", result);

    return 0;
}