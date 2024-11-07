#include <stdio.h>

int findPivot(int ar[], int low, int high) {
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = low + (high - low) / 2;

    if (mid < high && ar[mid] > ar[mid + 1])
        return mid;
    if (mid > low && ar[mid] < ar[mid - 1])
        return mid - 1;


    if (ar[low] >= ar[mid])
        return findPivot(ar, low, mid - 1);
    return findPivot(ar, mid + 1, high);

}

int main() {
    int ar[] = {1,2,3,4,5,6,7,8,1};
    int n = sizeof(ar)/sizeof(ar[0]);

    int pivot = findPivot(ar, 0, n - 1);

    if (pivot == -1) {
        printf("no pivot element found.\n");
    } else {
        printf("pivot element is: %d\n", ar[pivot]);
    }

    return 0;
}