#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;

    fp = fopen("text.txt", "r"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp))!= EOF) {
        charCount++;

        if (ch == '\n') {
            lineCount++;
            wordCount++;
        } else if (ch == ' ') {
            wordCount++;
        }
    }

    if (ch!='\n' && ch!= EOF) {
        wordCount++;
    }

    fclose(fp);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

}