#include <stdio.h>

int main() {
    int a1[10], a2[10], r[10];
    int i;

    printf("enter 10 integers for array 1:\n");
    for (i=0; i<10; i++) 
    {
        scanf("%d", &a1[i]);
    }

    printf("enter 10 integers for array 2:\n");
    for (i=0; i<10; i++) 
    {
        scanf("%d", &a2[i]);
    }

    for (i=0; i<10; i++) 
    {
        r[i] = a1[i] + a2[i];
    }

    printf("sum of the two arrays:\n");
    for (i=0; i<10; i++) 
    {
        printf("%d ", r[i]);
    }
    printf("\n");
    return 0;
}