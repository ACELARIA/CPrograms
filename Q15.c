#include<stdio.h>
int main(){
float A,B,C,D,E,total,per;
printf("Enter marks for 5 subjects:");
scanf("%f%f%f%f%f",&A,&B,&C,&D,&E);
total = A+B+C+D+E;
per = total/5;
printf("percentage is: %f\n", per);
if (per >= 0 && per <= 35) {
printf("3rd division\n");
}
if (per >= 36 && per <= 70) {
printf("2nd division\n");
}
if (per >= 71 && per <= 100) {
printf("1st division\n");
}
return 0;
}
