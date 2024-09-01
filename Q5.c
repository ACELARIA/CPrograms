#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value for a & b:");
	scanf("%d%d",&a,&b);
	c = a;
	a = b;
	b = c;
	printf("after swapping =%d%d\n",a,b);
	return 0;
}
