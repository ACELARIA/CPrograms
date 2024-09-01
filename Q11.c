#include<stdio.h>
int main(){
	int ts,h,m,s;
	printf("enter total seconds:");
	scanf("%d",&ts);
	h = ts*3600;
	m = ts*60;
	s = ts;
	printf("h:%d\n m:%d\n s:%d\n",h,m,s);
	return 0;
}
