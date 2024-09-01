#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value for a & b:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	c=a-b;
	printf("after swapping value of a & b:%d%d",a,b,c);
	return 0;
}
