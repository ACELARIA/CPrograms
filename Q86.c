#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a line of text: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    printf("The length of the string is: %d\n", length);

    return 0;
}