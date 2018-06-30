/* Program to find cube of a given number by defining a user-defined function */
/* Author :SRavanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
int cube(int x);
int main()
{
	int n,cube;
	printf("Enter any number");
	scanf("%d",&n);
	cube=n*n*n;
	printf("Cube of %d is :%d",n,cube);
	return 0;
}
int cube(int x)
{
	int cube;
	cube=x*x*x;
	return cube;
}
