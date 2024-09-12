#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The series of squares up to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
    return 0;
}