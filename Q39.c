#include <stdio.h>

int main() {
    int n, i, j;
    float term, sum;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++) {
        term = 1;
        for (j = 1; j <= i; j++) {
            term *= j;
        }
        sum += (float)i / term;
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}