
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr = str;
    int length_with_spaces = 0, length_without_spaces = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (*ptr != '\0') {
        length_with_spaces++;
        ptr++;
    }

    ptr = str;
    while (*ptr != '\0') {
        if (*ptr != ' ') {
            length_without_spaces++;
        }
        ptr++;
    }

    printf("Length of the string including spaces: %d\n", length_with_spaces); 
    printf("Length of the string excluding spaces: %d\n", length_without_spaces-1);

}
