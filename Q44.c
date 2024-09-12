#include <stdio.h>

int main() {
    int units_consumed;
    double amount_to_be_paid;

    printf("Enter the units consumed: ");
    scanf("%d", &units_consumed);

    if (units_consumed <= 200) {
        amount_to_be_paid = units_consumed * 0.50;
    } else if (units_consumed <= 400) {
        amount_to_be_paid = 100 + (units_consumed - 200) * 0.65;
    } else if (units_consumed <= 600) {
        amount_to_be_paid = 230 + (units_consumed - 400) * 0.80;
    } else {
        amount_to_be_paid = 425 + (units_consumed - 600) * 125;
    }

    printf("The amount to be paid is: Rs. %.2f\n", amount_to_be_paid);

    return 0;
}