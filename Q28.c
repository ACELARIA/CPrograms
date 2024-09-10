#include <stdio.h>

int main(){
int num, number, remainder, result=0;
printf("Enter an number: ");
    scanf("%d", &num);
    number = num;
    while (number != 0) {
        remainder = number % 10;
        result += remainder*remainder*remainder;
        number /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}
