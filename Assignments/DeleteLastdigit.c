/* Program to delete a last digit in a given number */
/*  Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	printf("Enter a number ");
	scanf("%d",&number);
	number=number/10;
	printf("After deleting last digit number is:%d");
}
