#include <stdio.h>

int even(int number) {
    return number % 2 == 0;
}

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if (even(num)) {
        printf("%d is even \n", num);
    } else {
        printf("%d is odd \n", num);
    }

    return 0;

}