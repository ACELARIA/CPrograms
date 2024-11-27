#include <stdio.h>

int main() {
    float head_circumference;

    printf("Enter your head circumference in inches: ");
    scanf("%f", &head_circumference);

    float hat_size = 6 + (head_circumference - 20) * 0.125;
    printf("Your estimated hat size is: %.1f\n", hat_size);

}