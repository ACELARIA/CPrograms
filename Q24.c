#include <stdio.h>

double y(double x, int n) {
    if (n == 1) {
        return 1 + x;
    } else if (n == 2) {
        return 1 + x / n;
    } else if (n == 3) {
        return 1 + x * n;
    } else if (n > 3 || n < 1) {
        return 1 + n * x;
    } else {
        return 0; 
    }
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = y(x, n);

    printf("Y(x, n) = %.2f\n", result);

    return 0;
}