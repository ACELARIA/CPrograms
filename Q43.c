#include <stdio.h>

float calculate_commission(float sales) {
    if (sales <= 500) {
        return sales * 0.05;
    } else if (sales <= 2000) {
        return 35 + (sales - 500) * 0.1;
    } else if (sales <= 5000) {
        return 185 + (sales - 2000) * 0.12;
    } else {
        return sales * 0.125;
    }
}

int main() {
    float sales_amount, commission;

    printf("Enter the sales amount: ");
    scanf("%f", &sales_amount);

    commission = calculate_commission(sales_amount);

    printf("Commission: %.2f\n", commission);

    return 0;
}
