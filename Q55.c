#include <stdio.h>

int main() {
    int numbers[10];
    int oddCount = 0;
    int evenCount = 0;
    int elementCounts[100] = {0}; 

    printf("Enter 10 integers: \n");

    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        elementCounts[numbers[i]]++;
    }

    printf("Number of odd elements: %d\n", oddCount);
    printf("Number of even elements: %d\n", evenCount);

    printf("Count of each element: \n");
    for (int i = 0; i < 100; i++) {
        if (elementCounts[i] > 0) {
            printf("%d: %d\n", i, elementCounts[i]);
        }
    }

    return 0;
}
