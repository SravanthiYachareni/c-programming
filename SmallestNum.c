/* Program to find the smallest among two numbers */
/* Author:Sravanti_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,minimum;
printf("Enter any two numbers");
scanf("%d%d",&num1,&num2);
	minimum=(num1<num2)?num1:num2;
	printf("Minimum is=%d",minimum);
}
	
