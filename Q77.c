#include <stdio.h>

int palindrome(int num) {
    int reversed_num = 0, original_num = num, remainder;

    while (num!= 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    return original_num == reversed_num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num)) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }

    return 0;
}