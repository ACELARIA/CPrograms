#include <stdio.h>
#include <string.h>

void reverseCopy(char *src, char *dest) {
    int len = strlen(src) - 1;
    int i = 0;

    while (len >= 0) {
        *(dest + i) = *(src + len);
        i++;
        len--;
    }
    *(dest + i) = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    fgets(str1, 100, stdin);

    reverseCopy(str1, str2);
    printf("Reversed string: %s\n", str2);

}