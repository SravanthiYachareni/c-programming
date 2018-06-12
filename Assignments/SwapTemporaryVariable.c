/* Program to swap two numbers using temporary variable */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b, temporary;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	printf("Variable values before swaping");
	printf("a=%d b=%d\n",a,b);
	
	/* Swaping */
	temporary=a;
	a=b;
	b=temporary;
	printf("Variable values after swaping",a,b);
	printf("a=%d b=%d",a,b);
}
