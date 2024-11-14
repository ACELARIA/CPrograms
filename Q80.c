#include <stdio.h>

void generate_fibonacci(int n) {
    int first=0, second=1, next, i;

    printf("first %d Fibonacci numbers:\n", n);

    for (i=0;i<n;i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;
    printf("enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    generate_fibonacci(n);
    return 0;
}