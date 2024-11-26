#include <stdio.h>

int findBiggest(int *arr, int n) {
    int *ptr = arr;
    int biggest = *ptr;
    int i;

    for (i=1; i<n; i++) {
        if (*(ptr + i)>biggest) {
            biggest = *(ptr + i);
        }
    }

    return biggest;
}

int main() {
    int n, i,arr[n];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    int biggest = findBiggest(arr, n);
    printf("The biggest number is: %d\n", biggest);
}