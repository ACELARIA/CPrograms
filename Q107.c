#include <stdio.h>
#include <math.h>

int flip(int number, int n) {
    int divisor = pow(10, n); 
    int lastNDigits = number % divisor;
    int remainingPart = number / divisor;
    int reversed = 0;
    
    while (lastNDigits != 0) 
    {
        reversed = reversed * 10 + lastNDigits % 10;
        lastNDigits /= 10;
    }

    int result = remainingPart * divisor + reversed;
    return result;
}
int main() {
    int number, n;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    int result = flip(number, n);
    printf("Result after flipping the last %d digits: %d\n", n, result);

    return 0;
}