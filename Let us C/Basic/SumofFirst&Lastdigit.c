/* Program to find Sum of first and lastdigit of a given four digit number */
/* Author:Sravanthi_Yachareni*/
#include<stdio.h>
void main()
{
	int number,lastdigit,firstdigit,sum;
	printf("Enter a four digit number\n");
	scanf("%d",&number);
	firstdigit=(number/1000)%10;
	lastdigit=number%10;
	number=number/10;
	sum=lastdigit+firstdigit;
	printf("Sum of first and last digits is %d",sum);
}
