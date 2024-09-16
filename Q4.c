#include<stdio.h>

int main()
{
	float c,f;
	printf("PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES\n");
	printf("enter temperature in fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temp in centigrade = %.2f\n",c);
	return 0;
}
