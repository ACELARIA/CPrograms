#include<stdio.h>
int main()
{
	int gs,bs,da,ta;
	printf("enter basic salary:");
	scanf("%d",&bs);
	da=(10*bs)/100;
	ta=(12*bs)/100;
	gs=bs+da+ta;
	printf("\ngross salary = %d\n",gs);
	return 0;

}

