#include <stdio.h>
#include <string.h>

int countWords(char *str) {
    int count=0,i=0;

    while (str[i]!= '\0') {
        while (str[i] == ' ' && str[i]!='\0') 
        {
            i++;
        }

        if (str[i]!='\0' && str[i]!=' ') 
        {
            count++;
            while (str[i]!= ' ' && str[i]!= '\0') {

                i++;
            }
        }
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    int wordCount = countWords(str);
    printf("Number of words in the string: %d\n", wordCount);
}