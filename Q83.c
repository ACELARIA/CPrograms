#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; 

    for (int i=1; i<size; i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }

    return max;
}

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int maximum = findMax(arr, n);

    printf("The maximum element in the array is: %d\n", maximum);

    return 0;
}