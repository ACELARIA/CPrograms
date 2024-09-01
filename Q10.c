#include<stdio.h>
int main(){
	float M,P,C,E,CM;
	printf("enter marks out of 200:");
	scanf("%f%f%f%f",&M,&P,&C,&E);
	CM=M/2+C/2+P/2+E/2;
	printf("cut off marks:%.2f\n", CM);
	return 0;
}
