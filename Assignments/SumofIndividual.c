/* Program to find sum of individual digits in a given four digits number */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	int d1,d2,d3,d4,number,Sum;
	printf("Enter a four digits number");
	scanf("%d",&number);
	d1=number%10;
	number=number/10;
	d2=number%10;
	number=number/10;
	d3=number%10;
	number=number/10;
	d4=number%10;
	number=number/10;
	Sum=d1+d2+d3+d4;
	printf("Sum of individual digits is:%d",Sum);
}
