#include <stdio.h>

int main() {
    int a1[10], reversed=0,remainder;
    int i;

    printf("enter 10 integers for array :\n");
    for (i=0; i<10; i++) {
        scanf("%d", &a1[i]);
        
    }
    printf("The reversed number is: %d\n", reversed);
    return 0;
}
