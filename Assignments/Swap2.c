/* Program to swap two numbers without using temporary variable */
/*Author:Sravanthi_Yachareni */ 

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	printf("Variable values before swaping\n");
	printf("a=%d b=%d",a,b);
	/*Swaping */
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Variable values after swaping\n");
	printf("a=%d b=%d",a,b);
}
