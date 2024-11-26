#include <stdio.h>
#include <string.h>

int countVowels(char *str) {
    int count = 0;
    while (*str != '\0') {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') 
 {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);
}