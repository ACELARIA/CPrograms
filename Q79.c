#include <stdio.h>

void exchange(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int y,x;
    printf("enter the value of y=");
    scanf("%d",&y);
    printf("enter the value of x=");
    scanf("%d",&x);
    printf("Before exchange: x=%d,y=%d\n", x, y);
    exchange(&x, &y);
    printf("After exchange: x=%d,y= %d\n", x, y);
    return 0;
}