#include <stdio.h>
int vowel(char ch) {

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
    {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char ch;

    printf("enter a character: ");
    scanf("%c", &ch);

    if (vowel(ch)) {
        printf("%c is a vowel\n", ch);
    } else {
        printf("%c is not a vowel\n", ch);
    }

    return 0;
}