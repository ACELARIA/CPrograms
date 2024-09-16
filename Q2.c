#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,sum,total=500;
	float per;
	printf("PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE\n");
	printf("enter marks of subject 1: ");
	scanf("%d",&s1);
	printf("enter marks of subject 2: ");
	scanf("%d",&s2);
	printf("enter marks of subject 3: ");
	scanf("%d",&s3);
	printf("enter marks of subject 4: ");
	scanf("%d",&s4);
	printf("enter marks of subject 5: ");
	scanf("%d",&s5);

	sum=s1+s2+s3+s4+s5;
	printf("sum= %d",sum);
	per=(sum*100)/total;
	printf("\npercentage= %.2f\n",per);
	return 0;
}

