/* Program to check whether the candidate is eligible voting or not by accepting age value */
/* Author: Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	int age;
	printf("Enter a age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("The condidate is eligible for voting",age);
	}
	else
	{
		printf("The candidate is not eligible for voting");
	}
}
