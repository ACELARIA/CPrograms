#include<stdio.h>
int main(){
	int num1, num2, num3;
    printf("PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR\n");
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    printf("The maximum number is: %d\n", max);

    return 0;
}
