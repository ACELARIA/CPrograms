#include<stdio.h>
int main()
{
	int a,b,c;
	printf("PROGRAM TO SWAP TWO VARIABLES USING THIRD VARIABLE\n");
	printf("enter value for a & b:");
	scanf("%d%d",&a,&b);
	c = a;
	a = b;
	b = c;
		
	printf("\nafter swapping =%d%d\n",a,b);
	return 0;
}
