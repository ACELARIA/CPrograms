#include<stdio.h>
int main ()
{
	int p,r,t,si;
	printf("enter principle, rate of interest and time to find simple interest:");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple interst=%d\n",si);
	return 0;
}

