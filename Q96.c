#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortStrings(char *str[], int n) {
    char *temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n,i;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char *str[n];

    for (i=0; i<n; i++) {
        str[i] = (char *)malloc(100 * sizeof(char));
        printf("Enter string %d: ", i + 1);
        scanf("%s", str[i]);
    }

    sortStrings(str, n);
    printf("\nSorted strings:\n");
    for (i=0; i<n; i++) 
    {
        printf("%s\n", str[i]);
    }

    for (i=0; i<n; i++) 
    {
        free(str[i]);
    }

}