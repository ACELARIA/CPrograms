#include <stdio.h>

int factorial(int n) {
    int fact=1;
    for (int i=1; i<=n; i++) {
        fact*=i;
    }
    return fact;
}

int ncr(int n, int r) {
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}

int main() {
    int n, r;
    printf("enter the value of n and r: ");
    scanf("%d %d", &n, &r);
    int result = ncr(n, r);
    printf("The value of ncr is: %d\n", result);

    return 0;
}