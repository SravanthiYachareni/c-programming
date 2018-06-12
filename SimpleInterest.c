/* Program to find simple interest by accepting principle, time and rate */
/* Author:Sravnathi_Yachareni */

#include<stdio.h>
#include<conio.h>
void main()
{
	int principle,time,rate,simpleinterest;
	printf("Enter a principle, time and rate");
	scanf("%d%d%d",&principle,&time,&rate);
	simpleinterest=principle*time*rate/100;
	printf("Simple interest is:%d",simpleinterest);
}
