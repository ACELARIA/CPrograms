#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int *ptr = &num;

    int square = *ptr * *ptr;
    int cube = *ptr * *ptr * *ptr;

    printf("Square of %d is: %d\n", num, square);
    printf("Cube of %d is: %d\n", num, cube);

    return 0;
}