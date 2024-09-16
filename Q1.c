#include<stdio.h>
int main ()
{
	int p,r,t,si;
	printf("PROGRAM TO CALCULATE SIMPLE INTEREST");
	printf("\nenter principal: "); 
	scanf("%d",&p);
	printf("rate of interest(percentage): ");
	scanf("%d",&r);
	printf("time(in years): ");
	scanf("%d",&t);
	si=(p*r*t)/100;
	printf("\nsimple interst=%d\n",si);
	return 0;
}

