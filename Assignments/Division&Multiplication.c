/* Program to find division operation otherwise multiplication operation */
/* Author :Sravanthi_Yachareni */
#include<stdio.h>
#include<conio.h>
void main()
{
	int number1,number2,Result;
	printf("Enter any two numbers");
	scanf("%d%d",&number1,&number2);
	Result=(number1<number2)?number1/number2:number1*number2;
	printf("Result is :%d",Result);
}
