#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2, bigger;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    bigger = MAX(num1, num2);
    printf("The bigger number is: %d\n", bigger);

}