/* Any year is input through the keyboard.Write a program to determine whether
the year is leap year or not */
/* Author : Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	int year;
	printf("Enter year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
}
