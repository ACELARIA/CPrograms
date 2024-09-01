#include <stdio.h>
int main() 
{
    int sec, d, h, m;
    sec = 31558150;
    	
    d = sec / 86400;
    h = sec/3600;
    m = sec / 60;
	
    printf("D:H:M - %d:%d:%d\n",d,h,m);
	
    return 0;
}
