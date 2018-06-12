/* Program to find reverse of a given four digits number */
/* Author:Sraavanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,d1,d2,d3,d4,Reverse;
	printf("Enter four digit numbers");
	scanf("%d",&number);
	d1=number%10;
	d1=d1*1000;
	number=number/10;
	d2=number%10;
	d2=d2*100;
	number=number/10;
	d3=number%10;
	d3=d3*10;
	number=number/10;
	d4=number%10;
	d4=d4*1;
	number=number/10;
	Reverse=d1+d2+d3+d4;
	printf("Reverse of a given number is%d",Reverse);
}
