/* Program to check whether the given number is multiple of 7 or not */
/* Author:Sravanthi_Yachareni */

#include<stdio.h>
void main()
{
	int number;
	printf("Enter a number");
	scanf("%d",&number);
	if(number%7==0)
	{
		printf("%d is a multiple of 7",number);
	}
	else
	{
		printf("%d is not a multiple of 7",number);
	}
}
