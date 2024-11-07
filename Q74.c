#include <stdio.h>

void mergeArrays(int A[], int B[], int m, int n, int C[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < m) {
        C[k++] = A[i++];
    }

    while (j < n) {
        C[k++] = B[j++];
    }
}

int main() {
    int A[] = {1,2,3,4};
    int B[] = {5,6,7,8,9};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
    int C[m + n];

    mergeArrays(A, B, m, n, C);

    printf("merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}