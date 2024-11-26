#include <stdio.h>
void printArray(int arr[], int len)
{
    int i;
    for (i=0; i<len; i++) {
        printf("%d ", arr[i]);
    }
}
 int main()
{
    int original_arr[] = {11, 332, 31, 0, 17};
    int len = sizeof(original_arr)/sizeof(original_arr[0]);
 
    int copied_arr[len], i, j;
    
       for (i=0; i<len; i++) {
        copied_arr[i] = original_arr[len-i-1];
    }
 
    printf("\nOriginal array:\n ");
    printArray(original_arr, len);
 
    printf("\nResultant array:\n ");
    printArray(copied_arr, len);
 printf("\n");
    return 0;
    }