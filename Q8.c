#include <stdio.h>
int main() 
{
    int sec, d, h, m, remainingseconds;
    printf("EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES\n");
    sec = 31558150;
    d = sec / 86400; 
    remainingseconds = sec % 86400;
    h = remainingseconds/3600;
    remainingseconds= remainingseconds % 3600;
    m = remainingseconds / 60;

    printf("D:H:M - %d:%d:%d\n",d,h,m);
	
    return 0;
}
