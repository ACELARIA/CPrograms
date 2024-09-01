#include<stdio.h>
int main(){
	int ts,h,m,s;
	printf("enter total seconds:");
	scanf("%d",&ts);
	h = ts*3600;
	m = ts*60;
	s = ts;
	printf("%d\n%d\n%d\n",h,m,s);
	return 0;
}
