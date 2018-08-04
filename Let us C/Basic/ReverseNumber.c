/* Program to find reverse of a given five digit number */
/* Author : Sravanthi _Yachareni */
#include<stdio.h>
void main()
{
	int d,d1,d2,d3,d4,rev,num;
	printf("Enter five digit number");
	scanf("%d",&num);
	d=num%10;
	d=d*10000;
	num=num/10;
	d1=num%10;
	d1=d1*1000;
	num=num/10;
	d2=num%10;
	d2=d2*100;
	num=num/10;
	d3=num%10;
	d3=d3*10;
	num=num/10;
	d4=num%10;
	d4=d4*1;
	num=num/10;
	rev=d+d1+d2+d3+d4;
	printf("Reverse of a given number is %d",rev);
}
