#include<stdio.h>
int main(){
	int num1, num2, num3,max;
    printf("PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&)\n");
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max = num1;
    if (num2 > max && num2 > num3) 
    {
        max = num2;
    } else if (num3 > max) 
    {
        max = num3;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}
