#include <stdio.h>
#include <string.h>

struct Employee 
{
    int empNo;
    char name[50];
    float basicPay;
};

int main() {
    int n;
   struct Employee emp[50];


    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &emp[i].empNo);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);
    }

    printf("\nEmployee Details:\n");
    for (int i=0; i<n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", emp[i].empNo);
        printf("Employee Name: %s\n", emp[i].name);
        printf("Basic Pay: %.2f\n", emp[i].basicPay);
    }

}