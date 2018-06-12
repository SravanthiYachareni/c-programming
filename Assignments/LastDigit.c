/* Program to extract a last digit from a given number */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,digit;
	printf("Enter a number");
	scanf("%d",&number);
	digit=number%10;
	printf("Last digit is:%d",digit);
}
