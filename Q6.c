#include<stdio.h>
int main()
{
	int a,b;
	printf("PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE\n");
	printf("enter value for a & b=");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping value of a & b=%d%d\n",a,b);
	return 0;
}
