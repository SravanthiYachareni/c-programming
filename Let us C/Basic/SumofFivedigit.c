/* Program to find sum of individual  digits in a given five digit number */
/* Author : Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	int num,d,d1,d2,d3,d4,sum;
	printf("Enter a five digit number");
	scanf("%d",&num);
	d=num%10;
	num=num/10;
	d1=num%10;
	num=num/10;
	d2=num%10;
	num=num/10;
	d3=num%10;
	num=num/10;
	d4=num%10;
	num=num/10;
	sum=d+d1+d2+d3+d4;
	printf("sum is %d",sum);
}
