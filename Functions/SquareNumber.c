/* Program to find square of a given number by defining user function */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
int square(int x);
void main()
{
	int x,s;
	printf("Enter any number");
	scanf("%d",&x);
	s=square(x);
	printf("Square of %d is %d",x,s);
}
int square(int x)
{
	int square;
	square=x*x;
	return square;
}
