#include<stdio.h>
int main()
{
	float b,h,area;
	printf("PROGRAM TO CALCULATE AREA OF A TRIANGLE\n");
	printf("enter value for b & h:");
	scanf("%f%f",&b,&h);
	area=(b*h)/2;
	printf("area of triangle:%.2f\n",area);
	return 0;

}
