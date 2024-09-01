#include<stdio.h>
int main(){

char character;
    printf("PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDATIONAL OPERATOR\n");
    printf("Enter a character: ");
    scanf("%c", &character);

    int isLowercase = (character >= 'a' && character <= 'z') ? 1 : 0;

    if (isLowercase) {
        printf("%c is a lowercase letter.\n", character);
    } else {
        printf("%c is not a lowercase letter.\n", character);
    }

    return 0;
}
