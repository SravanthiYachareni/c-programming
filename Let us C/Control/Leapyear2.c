/* Write a program using conditional operaters to determinewhether a year entered
through the keyboard is a leap year or not */
/* Author:Sravanthi_Yachareni*/
#include<stdio.h>
void main()
{
	int year;
	printf("Enter any year");
	scanf("%d",&year);
	if(year%4==0&&year%100!=100||year%400==0)
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is a not leap year",year);
	}
	
	
}
