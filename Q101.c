#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char info[50];
    int extrainfo;

    fp = fopen("LNMIITSTUDENT.DAT", "a"); 

    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    printf("Enter extrainfo: ");
    scanf("%s", info);

    fprintf(fp, "%s\n", info);

    fclose(fp);
    printf("Information added to the file.\n");

    return 0;
}