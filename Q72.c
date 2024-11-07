#include <stdio.h>

void rotateArray(int ar[],int n,int d) {
    int temp[d];
    for (int i=0; i<d; i++) {
        temp[i] = ar[i];
    }

for (int i=d; i<n; i++) {
        ar[i - d] = ar[i];
    }

    for (int i=0; i<d; i++) {
        ar[n - d + i] = temp[i];
    }
}

int main() {
    int ar[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(ar)/sizeof(ar[0]);
    int d = 2;

    printf("original array:\n");
    for (int i=0; i<n; i++) {
        printf("%d ", ar[i]);
    }

    rotateArray(ar, n, d);

    printf("\nrotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", ar[i]);
    }
    printf("\n");

    return 0;
}