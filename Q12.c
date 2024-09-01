#include<stdio.h>
int main(){
char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    int asciiCode = (int)character;

    printf("The ASCII code of '%c' is %d\n", character, asciiCode);

    return 0;
}