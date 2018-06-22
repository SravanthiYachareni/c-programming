/*  Program to count number of digits in a given number */
/* Author:Sravanthi_Yachareni */
#include<stdio.h>
void main()
{
	int number,count=0;
	printf("Enter any number\n");
	scanf("%d",&number);
	do{
		count=count+1;
		number=number/10;
	}while(number!=0);
	printf("even of digits :%d",count);
}
