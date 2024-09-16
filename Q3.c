#include<stdio.h>
int main()
{
	int gs,bs,da,ta;
	printf("PROGRAM TO CALCULATE GROSS SALARY\n");
	printf("enter basic salary:");
	scanf("%d",&bs);
	da=(10*bs)/100;
	printf("da=%d", da);
	ta=(12*bs)/100;
	printf("\nta=%d", ta);
	gs=bs+da+ta;
	printf("\ngross salary = %d\n",gs);
	return 0;

}

