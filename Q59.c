#include <stdio.h>

int main() {
    int a1[10], a2[10], temp;
    int i;

    printf("enter 10 integers for array 1:\n");
    for (i=0; i<10; i++) {
        scanf("%d", &a1[i]);
    }

    printf("enter 10 integers for array 2:\n");
    for (i=0; i<10; i++) {
        scanf("%d", &a2[i]);
    }

    for (i=0; i<10; i++) {
        temp = a1[i];
        a1[i] = a2[i];
        a2[i] = temp;
    }

    printf("after swapping arrays:\n");
    printf("array 1: ");
    for (i=0; i<10; i++) {
        printf("%d ", a1[i]);
    }
    printf("\n");

    printf("array 2: ");
    for (i=0; i<10; i++) {
        printf("%d ", a2[i]);
    }
    printf("\n");
    return 0;
}








	
