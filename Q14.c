#include<stdio.h>
int main(){
    char character;
    printf("PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL\n");
	printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z') {
        printf("%c is an uppercase letter.\n", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("%c is a lowercase letter.\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is a special symbol.\n", character);
    }

    return 0;
}
