#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char ch;
    int vowel_count = 0;

    fp = fopen("text.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            vowel_count++;
        }
    }

    fclose(fp); 
    printf("Number of vowels in the file: %d\n", vowel_count);

}