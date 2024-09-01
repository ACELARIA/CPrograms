#include<stdio.h>
int main(){
	int ts,h,m,s,remainingseconds;
    printf("PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME\n");
	printf("enter total seconds:");
	scanf("%d",&ts);
    h = ts/3600;
    remainingseconds = ts % 3600;
    m = remainingseconds / 60;
    remainingseconds = remainingseconds % 60;
    s = remainingseconds;
    printf("D:H:M - %d:%d:%d\n",h,m,s);
	
    return 0;

}
