#include <stdio.h>

void selection_sort(int arr[], int n) {
  int i, j, min_idx;

  // One by one move the boundary of unsorted subarray
  for (i = 0; i < n - 1; i++) {

    // Find the minimum element in unsorted array
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min_idx])
        min_idx = j;

    // Swap the found minimum element with the first element   

    int temp = arr[i];
    arr[i] = arr[min_idx];
    arr[min_idx] = temp;

  }
}

// Function to print an array
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {64, 25, 12, 22, 11,90};
  int n = sizeof(arr) / sizeof(arr[0]);

  selection_sort(arr, n);
  printf("Sorted array: \n");
  printArray(arr, n);
  return 0;
}
*/
#include <stdio.h>

void bubble_sort(int arr[], int n) {
  int i, j;
  int swapped;

  for (i = 0; i < n - 1; i++) {
    swapped = 0;
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = 1;

      }
    }

    // If no two elements were swapped in inner loop, then break
    if (swapped == 0)
      break;
  }
}

// Function to print an array
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
    printf("\n");
}

int main() {
  int arr[] = {64, 25, 12, 22, 11,90};
  int n = sizeof(arr) / sizeof(arr[0]);

  bubble_sort(arr, n);
  printf("Sorted array: \n");
  printArray(arr, n);
  return 0;
}