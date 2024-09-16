#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact =fact* i;
    }

    return fact;
}

int main() {
    int n;
    double sum = 0.0;
    float term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        term =(float) i / factorial(i);
        sum += term;
    }

    printf("Sum of the series: %.2f\n", sum);

    return 0;
}