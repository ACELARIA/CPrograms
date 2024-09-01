#include <stdio.h>
int main()
{
	int h,m,s,ts;
	printf("Enter value for h,m,s:");
	scanf("%d%d%d",&h,&m,&s);
	ts = h*3600 + m*60 + s;
	printf("total seconds = %d\n", ts);
	return 0;
}
