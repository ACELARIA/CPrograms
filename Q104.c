#include <stdio.h>

enum Color {
    RED,GREEN,BLUE,YELLOW,BLACK,WHITE
};

int main() {
    enum Color color;
    int num;

    printf("Enter a color code (0-5): ");
    scanf("%d", &num);

    switch (num) {
        case RED:
            printf("Hexadecimal color code: #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal color code: #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal color code: #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal color code: #FFFF00\n");
            break;
        case BLACK:
            printf("Hexadecimal color code: #000000\n");
            break;
        case WHITE:
            printf("Hexadecimal color code: #FFFFFF\n");
            break;
        default:
            printf("Invalid color code.\n");
    }

    return 0;
}