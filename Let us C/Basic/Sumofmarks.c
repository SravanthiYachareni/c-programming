/* Program to find sum and percentage of five subjects 
Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	int maths,physics,chemistry,telugu,english,sum,percentage;
	printf("Enter marks  \n");
	scanf("%d %d %d %d %d",&maths,&physics,&chemistry,&telugu,&english);
	sum=maths+physics+chemistry+telugu+english;
	percentage=sum/5;
	printf("Sum of marks is %d\n",sum);
	printf("percentage %d\n",percentage);
}
