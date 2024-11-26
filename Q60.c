#include <stdio.h>

void selectionSort(int arr[], int n) 
{
    for (int i=0; i<n-1;i++) {     
        int min_idx = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[min_idx]) {
                min_idx = j;
            }
        }   
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {33, 99, 17, 88, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array:\n");
    for (int i=0; i<n; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
  
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for (int i=0; i<n; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}