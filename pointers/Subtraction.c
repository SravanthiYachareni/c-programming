/* Subtraction of two numbers */
/* Author:Sravanthi_Yachareni*/
#include<stdio.h>
void main()
{
	int a,b,r;
	int *pa=&a;
	int *pb=&b;
	int *pr=&r;
	printf("Enter any two numbers");
	scanf("%d %d",pa,pb);
	*pr=*pa-*pb;
	printf("Subtraction of two numbers is :%d",*pr);
}
