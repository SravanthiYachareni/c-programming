/* Program to find square root of a given number */
/* Author:Sravanthi_yachareni */
#include<stdio.h>
#include<math.h>
void main()
{
	float number, SquareRoot;
	printf("Enter a number ");
	scanf("%f",&number);
	SquareRoot=sqrt(number);
	printf("Square Root of %f is:%f",number,SquareRoot);
}
