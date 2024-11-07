#include <stdio.h>

int main() {
    int ar[100], n, i, x, count = 0;

    printf("enter the size of the array: ");
    scanf("%d", &n);

    printf("enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    printf("enter the element to search for: ");
    scanf("%d", &x);

    for (i=0; i<n; i++) {
        if (ar[i] == x) {
            count++;
        }
    }

    if (count == 0) {
        printf("%d is not found in the array.\n",x);
    } else {
        printf("%d occurs %d times in the array.\n",x,count);
    }

    return 0;
}